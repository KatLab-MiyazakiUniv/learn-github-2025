#include <iostream>
#include <cmath>

constexpr double ROTATION_DEGREE = 360.0;

struct Wheel
{
    double radius; // 半径
    int angle;     // 回転角

    // メンバ関数
    double getDistance() const
    {
        return radius * 2 * M_PI * (angle / ROTATION_DEGREE);
    }
};

// 構造体のポインタを受け取る関数
double getDistance2(const Wheel *wheel)
{
    return (*wheel).radius * 2 * M_PI * ((*wheel).angle / ROTATION_DEGREE);
}

// 構造体の参照を受け取る関数
double getDistance3(const Wheel &wheel)
{
    return wheel.radius * 2 * M_PI * (wheel.angle / ROTATION_DEGREE);
}

int main()
{
    Wheel wheel = {4.5, 60}; // 構造体の初期化

    double mileage1 = wheel.getDistance();  // メンバ関数による呼び出し
    double mileage2 = getDistance2(&wheel); // ポインタによる呼び出し
    double mileage3 = getDistance3(wheel);  // 参照渡しによる呼び出し

    std::cout << "走行距離:" << mileage1 << std::endl;
    std::cout << "走行距離:" << mileage2 << std::endl;
    std::cout << "走行距離:" << mileage3 << std::endl;
    return 0;
}
