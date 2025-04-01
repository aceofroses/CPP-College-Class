#ifndef QUESTION_H
#define QUESTION_H
#include <iostream>


class Question
{
    private:
        std::string question;
        std::string ans1;
        std::string ans2;
        int correct;
    public:
        Question(std::string q, std::string a1, std::string a2, int c)
        {
            question = q; ans1 = a1; ans2 = a2; correct = c;
        }
        int getCorrect() const
        { return correct; }
        void displayFullQuestion() const;
};

#endif