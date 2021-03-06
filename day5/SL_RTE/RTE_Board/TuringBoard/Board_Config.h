/**
  ******************************************************************************
  * @file    Board_Config.h
  * @author  Shan Lei ->>lurenjia.tech ->>https://github.com/sudashannon
  * @brief   硬件环境配置头文件，按照KEIL格式编写，为板子的硬件环境进行配置。
  * @version V1.0 2018/11/02 第一版
  ******************************************************************************
  */
#ifndef __BOARD_CONFIG_H
#define __BOARD_CONFIG_H
//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------
//<s> BOARD_VERSION
//<i> 硬件板子版本号，具体定义见相关文档。
#define BOARD_VERSION "1.0"
//=======================
//<h>系统时钟配置
//=======================
	//<o> PLL M分频参数
	//<i> 晶振/M即为输入PLL的时钟。
	#define PLL_M    		         (4U)
	//<o> PLL N倍频参数
	//<i> PLL输入时钟*N为下一阶段时钟。
	#define PLL_N    		         (400U)
//</h>
//=======================
//<h>Systick配置
//=======================
	//<o> Systick中断优先级
	//<i> 默认最低。
	#define SYSTICK_PreemptPriority    		 (0x15)
//</h>
//==================================================================
//<h>串口1有关配置
//==================================================================
	//<o> 串口1中断优先级
	#define USART1_PreemptPriority           0x10
	//<o> 串口1接收中断优先级
	#define USART1_DMARX_PreemptPriority     0x09
	//<e>使能DMA发送
	#define USART1_USE_DMA_TX                0
	#if USART1_USE_DMA_TX == 1
	//<o> 串口发送DMA中断优先级
	#define USART1_DMATX_PreemptPriority     0x08
	#endif
	//</e>
//</h>
#endif
/****************** (C) COPYRIGHT SuChow University Shannon********************/
