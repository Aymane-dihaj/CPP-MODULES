#include "PmergeMe.hpp"

// -----------------vector----------------------

std::vector<int>   insertionSortForVector(std::vector<int>& container)
{
    std::vector<int> vec(container);
    for (size_t i = 1; i < vec.size(); ++i)
    {
        int key = vec[i];
        int j = i - 1;

        while (j >= 0 && vec[j] >= key)
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    }
    return vec;
}


std::vector<int>    mergeVector(std::vector<int>& left, std::vector<int>& right)
{
    std::vector<int> merged;

    std::vector<int>::iterator first_iter = left.begin();
    std::vector<int>::iterator sec_iter = right.begin();

    while (first_iter != left.end() && sec_iter != right.end())
    {
        if (*first_iter <= *sec_iter)
            merged.push_back(*first_iter++);
        else
            merged.push_back(*sec_iter++);
    }
    if (first_iter != left.end())
        merged.insert(merged.end(), first_iter, left.end());
    else
        merged.insert(merged.end(), sec_iter, right.end());
    return merged;
}


std::vector<int> sortVector(std::vector<int> vec)
{
    int midOfvec = vec.size() / 2;
    if (vec.size() <= 4)
        return insertionSortForVector(vec);
    std::vector<int> first(vec.begin(), vec.begin() + midOfvec);
    std::vector<int> sec(vec.begin() + midOfvec, vec.end());
    first = sortVector(first);
    sec = sortVector(sec);
    return mergeVector(first, sec);
}

// -----------------deque----------------------

std::deque<int>    mergeDeque(std::deque<int>& left, std::deque<int>& right)
{
    std::deque<int> merged;

    std::deque<int>::iterator left_iter = left.begin();
    std::deque<int>::iterator right_iter = right.begin();

    while (left_iter != left.end() && right_iter != right.end())
    {
        if (*left_iter <= *right_iter)
            merged.push_back(*left_iter++);
        else
            merged.push_back(*right_iter++);
    }
    if (left_iter != left.end())
        merged.insert(merged.end(), left_iter, left.end());
    else
        merged.insert(merged.end(), right_iter, right.end());
    return merged;
}

std::deque<int>   insertionSortForDeque(std::deque<int>& container)
{
    std::deque<int> deq(container);
    for (size_t i = 1; i < deq.size(); ++i)
    {
        int key = deq[i];
        int j = i - 1;

        while (j >= 0 && deq[j] >= key)
        {
            deq[j + 1] = deq[j];
            j--;
        }
        deq[j + 1] = key;
    }
    return deq;
}

std::deque<int> sortDeque(std::deque<int> vec)
{
    int midOfvec = vec.size() / 2;
    if (vec.size() <= 4)
        return insertionSortForDeque(vec);
    std::deque<int> first(vec.begin(), vec.begin() + midOfvec);
    std::deque<int> sec(vec.begin() + midOfvec, vec.end());
    first = sortDeque(first);
    sec = sortDeque(sec);
    return mergeDeque(first, sec);
}

int main(int ac, char **av)
{
    try
    {
        clock_t vStart;
        clock_t vEnd;
        clock_t dStart;
        clock_t dEnd;
        std::vector<int> vec;
        std::deque<int> deq;
        if (ac < 3)
            throw std::runtime_error("Error: wrong number of arguments.");
        checkInput(ac, av);
        fillContainers(vec, deq, av, ac);
        std::cout << "Before: ";
        for (size_t i = 0; i < vec.size(); i++)
            std::cout << vec[i] << " ";
        std::cout << std::endl;
        vStart = clock();
        vec = sortVector(vec);
        vEnd = clock();
        dStart = clock();
        deq = sortDeque(deq);
        dEnd = clock();
        std::cout << "after: ";
        for (size_t i = 0; i < vec.size(); i++)
            std::cout << vec[i] << " ";
        std::cout << std::endl;
        std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << vEnd - vStart << " us" << std::endl;
        std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << dEnd - dStart << " us" << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}