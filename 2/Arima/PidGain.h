#ifndef PID_GAIN_H
#define PID_GAIN_H

class PidGain
{
private:
    // メンバ変数
    double kp;
    double ki;
    double kd;

public:
    // コンストラクタ
    PidGain(double _kp, double _ki, double _kd);

    // メンバ関数
    void setPidGain(double _kp, double _ki, double _kd);

    double getkp();
    double getki();
    double getkd();
};
#endif