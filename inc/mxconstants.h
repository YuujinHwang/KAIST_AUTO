/**
  ******************************************************************************
  * File Name          : mxconstants.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * COPYRIGHT(c) 2016 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MXCONSTANT_H
#define __MXCONSTANT_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/


#define User_Blue_Button_Pin GPIO_PIN_13
#define User_Blue_Button_GPIO_Port GPIOC

#define ACCEL_AIN_Pin				GPIO_PIN_3
#define ACCEL_AIN_GPIO_Port			GPIOA
#define TORQ_AIN1_Pin				GPIO_PIN_4
#define TORQ_AIN1_GPIO_Port			GPIOA
#define TORQ_AIN2_Pin				GPIO_PIN_5
#define TORQ_AIN2_GPIO_Port			GPIOA

#define KeyIn_Pin					GPIO_PIN_0
#define KeyIn_GPIO_Port				GPIOE
#define SpareDin0_Pin				GPIO_PIN_1
#define SpareDin0_GPIO_Port			GPIOE
#define SpareDin1_Pin				GPIO_PIN_2
#define SpareDin1_GPIO_Port			GPIOE
#define SpareDin2_Pin				GPIO_PIN_3
#define SpareDin2_GPIO_Port			GPIOE

#define FrontWheelEncr0_Pin			GPIO_PIN_6
#define FrontWheelEncr0_GPIO_Port	GPIOC
#define FrontWheelEncr1_Pin			GPIO_PIN_7
#define FrontWheelEncr1_GPIO_Port	GPIOC
#define RearWheelEncr0_Pin			GPIO_PIN_8
#define RearWheelEncr0_GPIO_Port	GPIOC
#define RearWheelEncr1_Pin			GPIO_PIN_9
#define RearWheelEncr1_GPIO_Port	GPIOC

#define SteerMotor0_Dir_Pin			GPIO_PIN_0
#define SteerMotor0_Dir_GPIO_Port	GPIOB
#define SteerMotor0_Run_Pin			GPIO_PIN_1
#define SteerMotor0_Run_GPIO_Port	GPIOB
#define SteerMotor0_Start_Pin		GPIO_PIN_2
#define SteerMotor0_Start_GPIO_Port	GPIOB

#define SteerMotor1_Dir_Pin			GPIO_PIN_4
#define SteerMotor1_Dir_GPIO_Port	GPIOB
#define SteerMotor1_Run_Pin			GPIO_PIN_5
#define SteerMotor1_Run_GPIO_Port	GPIOB
#define SteerMotor1_Start_Pin		GPIO_PIN_6
#define SteerMotor1_Start_GPIO_Port	GPIOB

#define DriveMotor0_F_Pin			GPIO_PIN_8
#define DriveMotor0_F_GPIO_Port		GPIOB
#define DriveMotor0_B_Pin			GPIO_PIN_9
#define DriveMotor0_B_GPIO_Port		GPIOB

#define DriveMotor1_F_Pin			GPIO_PIN_10
#define DriveMotor1_F_GPIO_Port		GPIOB
#define DriveMotor1_B_Pin			GPIO_PIN_11
#define DriveMotor1_B_GPIO_Port		GPIOB


#define SpareDout_Pin				GPIO_PIN_15
#define SpareDout_GPIO_Port			GPIOB
#define RelayCtrl_Pin				GPIO_PIN_12
#define RelayCtrl_GPIO_Port			GPIOB

#define MCO_Pin GPIO_PIN_0
#define MCO_GPIO_Port GPIOH
#define RMII_MDC_Pin GPIO_PIN_1
#define RMII_MDC_GPIO_Port GPIOC
#define RMII_MDIO_Pin GPIO_PIN_2
#define RMII_MDIO_GPIO_Port GPIOA

#define RMII_RXD0_Pin GPIO_PIN_4
#define RMII_RXD0_GPIO_Port GPIOC
#define RMII_RXD1_Pin GPIO_PIN_5
#define RMII_RXD1_GPIO_Port GPIOC

#define RMII_TXD1_Pin GPIO_PIN_13
#define RMII_TXD1_GPIO_Port GPIOB

#define STLK_RX_Pin GPIO_PIN_8
#define STLK_RX_GPIO_Port GPIOD
#define STLK_TX_Pin GPIO_PIN_9
#define STLK_TX_GPIO_Port GPIOD
#define USB_PowerSwitchOn_Pin GPIO_PIN_6
#define USB_PowerSwitchOn_GPIO_Port GPIOG
#define USB_OverCurrent_Pin GPIO_PIN_7
#define USB_OverCurrent_GPIO_Port GPIOG

#define USB_SOF_Pin GPIO_PIN_8
#define USB_SOF_GPIO_Port GPIOA
#define USB_VBUS_Pin GPIO_PIN_9
#define USB_VBUS_GPIO_Port GPIOA
#define USB_ID_Pin GPIO_PIN_10
#define USB_ID_GPIO_Port GPIOA
#define USB_DM_Pin GPIO_PIN_11
#define USB_DM_GPIO_Port GPIOA
#define USB_DP_Pin GPIO_PIN_12
#define USB_DP_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA

#define Console_TX_Pin			GPIO_PIN_10
#define Console_TX_GPIO_Port	GPIOC
#define Console_RX_Pin			GPIO_PIN_11
#define Console_RX_GPIO_Port	GPIOC

#define BLUE_EN_Pin				GPIO_PIN_5
#define BLUE_EN_GPIO_Port		GPIOA
#define Blue_RX_Pin				GPIO_PIN_9
#define Blue_RX_GPIO_Port		GPIOG
#define Blue_TX_Pin				GPIO_PIN_14
#define Blue_TX_GPIO_Port		GPIOG

#define RMII_TX_EN_Pin GPIO_PIN_11
#define RMII_TX_EN_GPIO_Port GPIOG
#define RMII_TXD0_Pin GPIO_PIN_13
#define RMII_TXD0_GPIO_Port GPIOG

#define SW0_Pin GPIO_PIN_3
#define SW0_GPIO_Port GPIOB

#define LD2_Pin						GPIO_PIN_7
#define LD2_GPIO_Port				GPIOB
#define LD3_Pin						GPIO_PIN_14
#define LD3_GPIO_Port				GPIOB


/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MXCONSTANT_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
