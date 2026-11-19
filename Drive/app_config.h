#ifndef __APP_CONFIG_H
#define __APP_CONFIG_H

#ifndef PI
#define PI 3.14159265358979323846f
#endif

/* 电机速度环 PID 参数 */
#define BrushMotor_PID_mode     PID_POSITION
#define BrushMotor_PID_KP       10.0f
#define BrushMotor_PID_KI       0.8f
#define BrushMotor_PID_KD       5.0f
#define BrushMotor_PID_Maxout   1000.0f
#define BrushMotor_PID_MaxIout  1000.0f

/* 灰度巡线转向环 PID 参数 (输入为灰度偏差，范围约 -30 ~ +30) */
#define SelfTurn_PID_mode       PID_POSITION
#define SelfTurn_PID_KP         0.8f
#define SelfTurn_PID_KI         0.0f
#define SelfTurn_PID_KD         0.15f
#define SelfTurn_PID_Maxout     200.0f
#define SelfTurn_PID_MaxIout    10.0f

/* 航向保持转向环 PID 参数 (输入为偏航角误差，单位 rad) */
#define YawHold_PID_mode        PID_POSITION
#define YawHold_PID_KP          40.0f
#define YawHold_PID_KI          0.0f
#define YawHold_PID_KD          4.0f
#define YawHold_PID_Maxout      200.0f
#define YawHold_PID_MaxIout     10.0f

/* 编码器与轮子机械参数 (控制周期 20ms -> 50Hz) */
#define EncoderReadingFrequency 50.0f
#define EncoderLines            390.0f
#define TireRadius              6.5f

/* 第一个任务状态 */
#define TASK1_FLAG              1
#define TASK1_STATE_IDLE        0
#define TASK1_STATE_LEAVE_A     1
#define TASK1_STATE_FIND_B      2
#define TASK1_STATE_FINISH      3
#define TASK1_SPEED             45.0f

/* 第二个任务状态 */
#define TASK2_FLAG              2
#define TASK2_STATE_IDLE        0
#define TASK2_STATE_AB_LEAVE_A  1
#define TASK2_STATE_AB_FIND_B   2
#define TASK2_STATE_BC_TRACE    3
#define TASK2_STATE_CD_FIND_D   4
#define TASK2_STATE_DA_TRACE    5
#define TASK2_STATE_FINISH      6

#define TASK2_STRAIGHT_SPEED    45.0f
#define TASK2_TRACE_SPEED       35.0f
#define TASK2_LINE_LOST_TICKS   5
#define TASK2_LED_TICKS         10
#define TASK2_LED_ON            0
#define TASK2_LED_OFF           1

/* 第三问与第四问 */
#define TASK3_FLAG                  3
#define TASK4_FLAG                  4
#define TASK34_STATE_IDLE           0
#define TASK34_STATE_AC_LEAVE_A     1
#define TASK34_STATE_AC_FIND_C      2
#define TASK34_STATE_CB_TRACE       3
#define TASK34_STATE_BD_FIND_D      4
#define TASK34_STATE_DA_TRACE       5
#define TASK34_STATE_FINISH         6

#define TASK34_STRAIGHT_SPEED       45.0f
#define TASK34_TRACE_SPEED          35.0f
#define TASK34_LINE_LOST_TICKS      5
#define TASK34_LED_TICKS            10
#define TASK34_LED_ON               0
#define TASK34_LED_OFF              1

#define TASK34_START_AC_YAW_OFFSET  0.0f
#define TASK34_DIAG_ANGLE           (38.66f * PI / 180.0f)
#define TASK34_NEXT_AC_YAW_OFFSET   (-TASK34_DIAG_ANGLE)
#define TASK34_BD_YAW_OFFSET        (+TASK34_DIAG_ANGLE)

#define TASK34_CB_TRACE_SIGN        1.0f
#define TASK34_DA_TRACE_SIGN        1.0f

#endif /* __APP_CONFIG_H */
