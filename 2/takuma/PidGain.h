#ifndef PID_GAIN_H
#define PID_GAIN_H

class PidGain {
      private:
            // メンバ変数
            double kp;
            double ki;
            double kd;

      public:
            // コンストラクタ
            PidGain(double _kp, double _ki, double _kd);

            // メンバ関数
            // セッター
            void setPidGain(double _kp, double _ki, double _kd);

            // ゲッター
            double getKp();
            double getKi();
            double getKd();
};

#endif