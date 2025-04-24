#ifndef PID_GAIN_H // if not define
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
    void setPidGain(double _kp = 0.6, double _ki = 0.08, double _kd = 0.04);
    // 　ゲッター
    double getKp();
    double getKi();
    double getKd();
};

#endif