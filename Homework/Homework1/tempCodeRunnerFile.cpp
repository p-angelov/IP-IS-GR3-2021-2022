for (int num = 0; num < inputLimit; num++)
    {
        if (isPalindrome(num) && isPalindrome(num * num) && num > 3)
            cout << num << " -> " << num * num << '\n';
    }