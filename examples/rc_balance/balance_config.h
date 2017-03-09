/*******************************************************************************
* balance_config.h
*
* Contains the settings for configuration of rc_balance.c
*******************************************************************************/

#ifndef BALANCE_CONFIG
#define BALANCE_CONFIG

#define SAMPLE_RATE_HZ 100	// main filter and control loop speed
#define DT 0.01			// 1/sample_rate

// Structural properties of BALANC3R
#define CAPE_MOUNT_ANGLE		0.25 // increase if mip tends to roll forward
#define GEARBOX 				15
#define ENCODER_RES				48
#define WHEEL_RADIUS_M			0.028
#define TRACK_WIDTH_M			0.127
#define V_NOMINAL				7.4

// inner loop controller
#define 	D1_GAIN					5.05
#define 	D1_ORDER				2
#define 	D1_NUM					{-4.945, 8.862, -3.967}
#define 	D1_DEN					{ 1.000, -1.481, 0.4812}
#define 	D1_SATURATION_TIMEOUT	0.4


// outer loop controller
#define 	D2_GAIN					0.5
#define		D2_ORDER				2
#define 	D2_NUM					{0.18856,  -0.37209,  0.18354}
#define 	D2_DEN					{1.00000,  -1.86046,   0.86046}
#define 	THETA_REF_MAX			0.33

// steering controller
#define D3_KP					1.0
#define D3_KI					0.3
#define D3_KD					0.05
#define STEERING_INPUT_MAX		0.5

// electrical hookups
#define MOTOR_CHANNEL_L			4
#define MOTOR_CHANNEL_R			1
#define MOTOR_POLARITY_L		1
#define MOTOR_POLARITY_R		1
#define ENCODER_CHANNEL_L		4
#define ENCODER_CHANNEL_R		1
#define ENCODER_POLARITY_L		1
#define ENCODER_POLARITY_R		1

//	drive speeds when using remote control (dsm2)
#define DRIVE_RATE_NOVICE		6
#define TURN_RATE_NOVICE		6
#define DRIVE_RATE_ADVANCED		26
#define TURN_RATE_ADVANCED		10

// DSM channel config
#define DSM_DRIVE_POL			1
#define DSM_TURN_POL			-1
#define DSM_DRIVE_CH			3
#define DSM_TURN_CH				2
#define DSM_DEAD_ZONE			0.04

// Thread Loop Rates
#define BATTERY_CHECK_HZ		5
#define SETPOINT_MANAGER_HZ		1000
#define PRINTF_HZ				50

// other
#define TIP_ANGLE				0.85
#define START_ANGLE				0.25
#define START_DELAY				0.4
#define PICKUP_DETECTION_TIME	0.6
#define ENABLE_POSITION_HOLD	1
#define SOFT_START_SEC			0.7

#endif	//BALANCE_CONFIG
