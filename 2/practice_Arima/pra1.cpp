#include <iostream>

struct Coordinate
{
    int x; // x座標
    int y; // y座標
};

enum class Direction
{
    N,
    NE,
    E,
    SE,
    S,
    SW,
    W,
    NW,
    HERE // 同じ座標となる無効な方角
};

// Direction::N == 0, NE == 1, E == 2, SE == 3, S == 4, SW == 5, W == 6, NW == 7, HERE == 8;

// 座標の差分から進行方向の方位を返す関数
Direction calcNextDirection(const Coordinate &current, const Coordinate &next)
{
    int dx = next.x - current.x;
    int dy = next.y - current.y;

    if (dx == 0 && dy < 0)
        return Direction::N;
    if (dx > 0 && dy < 0)
        return Direction::NE;
    if (dx > 0 && dy == 0)
        return Direction::E;
    if (dx > 0 && dy > 0)
        return Direction::SE;
    if (dx == 0 && dy > 0)
        return Direction::S;
    if (dx < 0 && dy > 0)
        return Direction::SW;
    if (dx < 0 && dy == 0)
        return Direction::W;
    if (dx < 0 && dy < 0)
        return Direction::NW;

    // 同じ座標となる無効な方角
    return Direction::HERE;
}

// Direction を文字列で表示する関数
const char *directionToString(Direction dir)
{
    switch (dir)
    {
    case Direction::N:
        return "0(N)";
    case Direction::NE:
        return "1(NE)";
    case Direction::E:
        return "2(E)";
    case Direction::SE:
        return "3(SE)";
    case Direction::S:
        return "4(S)";
    case Direction::SW:
        return "5(SW)";
    case Direction::W:
        return "6(W)";
    case Direction::NW:
        return "7(NW)";
    case Direction::HERE:
        return "現在地(HERE)";
    default:
        return "エラー";
    }
}

int main()
{
    Coordinate current, next;

    std::cout << "現在の座標を入力してください (y,x):";
    std::cin >> current.y >> current.x;

    std::cout << "次の座標を入力してください (y,x):";
    std::cin >> next.y >> next.x;

    Direction dir = calcNextDirection(current, next);
    std::cout << "方角:" << directionToString(dir) << std::endl;

    return 0;
}