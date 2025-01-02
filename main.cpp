#include <iostream>
#include <vector>

using std::cout;
using std::vector;

#define LEFT_BUFFER "\t"

class ArtistotlesPuzzle
{
    vector<vector<int>> m_puzzleBoard;
    vector<int> m_availableNumbers;
public:
    ArtistotlesPuzzle()
    {
        m_puzzleBoard.push_back(vector<int>({0, 0, 0}));
        m_puzzleBoard.push_back(vector<int>({0, 0, 0, 0}));
        m_puzzleBoard.push_back(vector<int>({0, 0, 0, 0, 0}));
        m_puzzleBoard.push_back(vector<int>({0, 0, 0, 0}));
        m_puzzleBoard.push_back(vector<int>({0, 0, 0}));
        for (int i = 1; i <= 19; ++i)
        {
            m_availableNumbers.push_back(i);
        }
    }

    // bool validate()
    // {
    //     vector<int>
    // }

    void Print()
    {
        cout << "Aristotles Puzzle Board:\n\n";
        cout << LEFT_BUFFER << "  " << m_puzzleBoard[0][0] << " " <<
                          m_puzzleBoard[0][1] << " " <<
                          m_puzzleBoard[0][2] << "\n";
        cout << LEFT_BUFFER << " " << m_puzzleBoard[1][0] << " " <<
                        m_puzzleBoard[1][1] << " " <<
                        m_puzzleBoard[1][2] << " " <<
                        m_puzzleBoard[1][3] << "\n";
        cout << LEFT_BUFFER << m_puzzleBoard[2][0] << " " <<
                m_puzzleBoard[2][1] << " " <<
                m_puzzleBoard[2][2] << " " <<
                m_puzzleBoard[2][3] << " " <<
                m_puzzleBoard[2][4] << "\n";
        cout << LEFT_BUFFER << " " << m_puzzleBoard[3][0] << " " <<
                        m_puzzleBoard[3][1] << " " <<
                        m_puzzleBoard[3][2] << " " <<
                        m_puzzleBoard[3][3] << "\n";
        cout << LEFT_BUFFER << "  " << m_puzzleBoard[4][0] << " " <<
                          m_puzzleBoard[4][1] << " " <<
                          m_puzzleBoard[4][2] << "\n";
        cout << "Available Pieces: {";
        for (int i = 0; i < m_availableNumbers.size() - 1; ++i)
        {
            cout << m_availableNumbers[i] << ", ";
        }
        cout << m_availableNumbers[m_availableNumbers.size() - 1] << "}\n";
    }
};

int main()
{
    ArtistotlesPuzzle puzzle;
    puzzle.Print();
    long long i = 0;
    for (;;)
    {
        cout << ++i << "\n";
    }
    return 0;
}
