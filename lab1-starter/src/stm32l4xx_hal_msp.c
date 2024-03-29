/**
  ******************************************************************************
  * @file    stm32l4xx_hal_msp_template.c
  * @author  MCD Application Team
  * @version V1.7.1
  * @date    21-April-2017
  * @brief   HAL MSP module.
  *          This file template is located in the HAL folder and should be copied 
  *          to the user folder.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2017 STMicroelectronics</center></h2>
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

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/** @addtogroup STM32L4xx_HAL_Driver
  * @{
  */

/** @defgroup HAL_MSP HAL MSP module driver
  * @brief HAL MSP module.
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/** @defgroup HAL_MSP_Private_Functions
  * @{
  */

/**
  * @brief  Initialize the Global MSP.
  * @param  None
  * @retval None
  */
void HAL_MspInit(void)
{
  /* NOTE : This function is generated automatically by STM32CubeMX and eventually  
            modified by the user
   */ 
}

/**
  * @brief  DeInitialize the Global MSP.
  * @param  None  
  * @retval None
  */
void HAL_MspDeInit(void)
{
  /* NOTE : This function is generated automatically by STM32CubeMX and eventually  
            modified by the user
   */
}

/**
  * @brief  Initialize the PPP MSP.
  * @param  None
  * @retval None
  */
void HAL_PPP_MspInit(void)
{
  /* NOTE : This function is generated automatically by STM32CubeMX and eventually  
            modified by the user
   */ 
}

/**
  * @brief  DeInitialize the PPP MSP.
  * @param  None  
  * @retval None
  */
void HAL_PPP_MspDeInit(void)
{
  /* NOTE : This function is generated automatically by STM32CubeMX and eventually  
            modified by the user
   */
}

/**
  * @brief TIM MSP Initialization 
  *        This function configures the hardware resources used in this example: 
  *           - Peripheral's clock enable
  *           - Peripheral's GPIO Configuration  
  * @param htim: TIM handle pointer
  * @retval None
  */
/*void HAL_TIM_Base_MspInit (TIM_HandleTypeDef *htim)
{
  //##-1- Enable peripherals and GPIO Clocks #################################
  // TIMx Peripheral clock enable 
 
  __HAL_RCC_TIM3_CLK_ENABLE(); //this is defined in stm32f4xx_hal_rcc.h
	
	
  //##-2- Configure the NVIC for TIMx ########################################
  // Set the TIMx priority
	//HAL_NVIC_SetPriority(TIM3_IRQn, 1, 0);  //in _hal.c, the priority group is set to 4. 
																					//so the range of the preemption priority is 0-15, while the range of the sub_priority is 0
																					//here set is as 1, leave 0 to systick, as systick interrupt may case troubles. 
  
  // Enable the TIMx global Interrupt
	HAL_NVIC_EnableIRQ(TIM3_IRQn);
}*/
void HAL_TIM_Base_MspInit (TIM_HandleTypeDef *htim)
{
  //##-1- Enable peripherals and GPIO Clocks #################################
  // TIMx Peripheral clock enable 
 
  __HAL_RCC_TIM2_CLK_ENABLE(); //this is defined in stm32f4xx_hal_rcc.h
	
	
  //##-2- Configure the NVIC for TIMx ########################################
  // Set the TIMx priority 
	HAL_NVIC_SetPriority(TIM2_IRQn, 1, 0);  //in _hal.c, the priority group is set to 4. 
																					//so the range of the preemption priority is 0-15, while the range of the sub_priority is 0
																					//here set is as 1, leave 0 to systick, as systick interrupt may case troubles. 
  
  // Enable the TIMx global Interrupt 
	HAL_NVIC_EnableIRQ(TIM2_IRQn);
}

//configure the 
void HAL_TIM_OC_MspInit (TIM_HandleTypeDef *htim)
{
  /*##-1- Enable peripherals and GPIO Clocks #################################*/
  /* TIMx Peripheral clock enable */
 
  __HAL_RCC_TIM4_CLK_ENABLE(); //this is defined in stm32f4xx_hal_rcc.h
	
	
  /*##-2- Configure the NVIC for TIMx ########################################*/
  /* Set the TIMx priority */
	HAL_NVIC_SetPriority(TIM4_IRQn, 1, 0);
  
  /* Enable the TIMx global Interrupt */
	HAL_NVIC_EnableIRQ(TIM4_IRQn);
}



/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
