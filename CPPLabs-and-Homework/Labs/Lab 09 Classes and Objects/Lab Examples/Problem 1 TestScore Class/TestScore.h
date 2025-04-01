#ifndef TESTSCORE_H
#define TESTSCORE_H

class TestScores
{
    private:
        int score1,
            score2,
            score3;
    public: 
        TestScores()
        {
            score1 = 0; score2 = 0; score3 = 0;
        }
        TestScores(int s1, int s2, int s3)
        { score1 = s1; score2 = s2; score3 = s3;}
        
        float average() const; 
};

#endif // TESTSCORE_H