/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* Rx */
.set Rx__0__INTTYPE, CYREG_PICU12_INTTYPE6
.set Rx__0__MASK, 0x40
.set Rx__0__PC, CYREG_PRT12_PC6
.set Rx__0__PORT, 12
.set Rx__0__SHIFT, 6
.set Rx__AG, CYREG_PRT12_AG
.set Rx__BIE, CYREG_PRT12_BIE
.set Rx__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Rx__BYP, CYREG_PRT12_BYP
.set Rx__DM0, CYREG_PRT12_DM0
.set Rx__DM1, CYREG_PRT12_DM1
.set Rx__DM2, CYREG_PRT12_DM2
.set Rx__DR, CYREG_PRT12_DR
.set Rx__INP_DIS, CYREG_PRT12_INP_DIS
.set Rx__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Rx__MASK, 0x40
.set Rx__PORT, 12
.set Rx__PRT, CYREG_PRT12_PRT
.set Rx__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Rx__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Rx__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Rx__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Rx__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Rx__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Rx__PS, CYREG_PRT12_PS
.set Rx__SHIFT, 6
.set Rx__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Rx__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Rx__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Rx__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Rx__SLW, CYREG_PRT12_SLW

/* Tx */
.set Tx__0__INTTYPE, CYREG_PICU12_INTTYPE7
.set Tx__0__MASK, 0x80
.set Tx__0__PC, CYREG_PRT12_PC7
.set Tx__0__PORT, 12
.set Tx__0__SHIFT, 7
.set Tx__AG, CYREG_PRT12_AG
.set Tx__BIE, CYREG_PRT12_BIE
.set Tx__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Tx__BYP, CYREG_PRT12_BYP
.set Tx__DM0, CYREG_PRT12_DM0
.set Tx__DM1, CYREG_PRT12_DM1
.set Tx__DM2, CYREG_PRT12_DM2
.set Tx__DR, CYREG_PRT12_DR
.set Tx__INP_DIS, CYREG_PRT12_INP_DIS
.set Tx__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Tx__MASK, 0x80
.set Tx__PORT, 12
.set Tx__PRT, CYREG_PRT12_PRT
.set Tx__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Tx__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Tx__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Tx__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Tx__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Tx__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Tx__PS, CYREG_PRT12_PS
.set Tx__SHIFT, 7
.set Tx__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Tx__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Tx__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Tx__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Tx__SLW, CYREG_PRT12_SLW

/* UART */
.set UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set UART_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set UART_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set UART_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG, CYREG_B1_UDB09_10_MSK
.set UART_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB09_10_MSK
.set UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_BUART_sRX_RxBitCounter__CONTROL_REG, CYREG_B1_UDB09_CTL
.set UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG, CYREG_B1_UDB09_ST_CTL
.set UART_BUART_sRX_RxBitCounter__COUNT_REG, CYREG_B1_UDB09_CTL
.set UART_BUART_sRX_RxBitCounter__COUNT_ST_REG, CYREG_B1_UDB09_ST_CTL
.set UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_BUART_sRX_RxBitCounter__PERIOD_REG, CYREG_B1_UDB09_MSK
.set UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG, CYREG_B1_UDB09_10_ST
.set UART_BUART_sRX_RxBitCounter_ST__MASK_REG, CYREG_B1_UDB09_MSK
.set UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG, CYREG_B1_UDB09_ST_CTL
.set UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG, CYREG_B1_UDB09_ST_CTL
.set UART_BUART_sRX_RxBitCounter_ST__STATUS_REG, CYREG_B1_UDB09_ST
.set UART_BUART_sRX_RxShifter_u0__16BIT_A0_REG, CYREG_B1_UDB09_10_A0
.set UART_BUART_sRX_RxShifter_u0__16BIT_A1_REG, CYREG_B1_UDB09_10_A1
.set UART_BUART_sRX_RxShifter_u0__16BIT_D0_REG, CYREG_B1_UDB09_10_D0
.set UART_BUART_sRX_RxShifter_u0__16BIT_D1_REG, CYREG_B1_UDB09_10_D1
.set UART_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_BUART_sRX_RxShifter_u0__16BIT_F0_REG, CYREG_B1_UDB09_10_F0
.set UART_BUART_sRX_RxShifter_u0__16BIT_F1_REG, CYREG_B1_UDB09_10_F1
.set UART_BUART_sRX_RxShifter_u0__A0_A1_REG, CYREG_B1_UDB09_A0_A1
.set UART_BUART_sRX_RxShifter_u0__A0_REG, CYREG_B1_UDB09_A0
.set UART_BUART_sRX_RxShifter_u0__A1_REG, CYREG_B1_UDB09_A1
.set UART_BUART_sRX_RxShifter_u0__D0_D1_REG, CYREG_B1_UDB09_D0_D1
.set UART_BUART_sRX_RxShifter_u0__D0_REG, CYREG_B1_UDB09_D0
.set UART_BUART_sRX_RxShifter_u0__D1_REG, CYREG_B1_UDB09_D1
.set UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_BUART_sRX_RxShifter_u0__F0_F1_REG, CYREG_B1_UDB09_F0_F1
.set UART_BUART_sRX_RxShifter_u0__F0_REG, CYREG_B1_UDB09_F0
.set UART_BUART_sRX_RxShifter_u0__F1_REG, CYREG_B1_UDB09_F1
.set UART_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB09_10_ACTL
.set UART_BUART_sRX_RxSts__16BIT_STATUS_REG, CYREG_B0_UDB09_10_ST
.set UART_BUART_sRX_RxSts__3__MASK, 0x08
.set UART_BUART_sRX_RxSts__3__POS, 3
.set UART_BUART_sRX_RxSts__4__MASK, 0x10
.set UART_BUART_sRX_RxSts__4__POS, 4
.set UART_BUART_sRX_RxSts__5__MASK, 0x20
.set UART_BUART_sRX_RxSts__5__POS, 5
.set UART_BUART_sRX_RxSts__MASK, 0x38
.set UART_BUART_sRX_RxSts__MASK_REG, CYREG_B0_UDB09_MSK
.set UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG, CYREG_B0_UDB09_ACTL
.set UART_BUART_sRX_RxSts__STATUS_REG, CYREG_B0_UDB09_ST
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG, CYREG_B0_UDB09_10_A0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG, CYREG_B0_UDB09_10_A1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG, CYREG_B0_UDB09_10_D0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG, CYREG_B0_UDB09_10_D1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB09_10_ACTL
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG, CYREG_B0_UDB09_10_F0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG, CYREG_B0_UDB09_10_F1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG, CYREG_B0_UDB09_A0_A1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG, CYREG_B0_UDB09_A0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG, CYREG_B0_UDB09_A1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG, CYREG_B0_UDB09_D0_D1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG, CYREG_B0_UDB09_D0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG, CYREG_B0_UDB09_D1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG, CYREG_B0_UDB09_ACTL
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG, CYREG_B0_UDB09_F0_F1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG, CYREG_B0_UDB09_F0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG, CYREG_B0_UDB09_F1
.set UART_BUART_sTX_TxShifter_u0__16BIT_A0_REG, CYREG_B1_UDB08_09_A0
.set UART_BUART_sTX_TxShifter_u0__16BIT_A1_REG, CYREG_B1_UDB08_09_A1
.set UART_BUART_sTX_TxShifter_u0__16BIT_D0_REG, CYREG_B1_UDB08_09_D0
.set UART_BUART_sTX_TxShifter_u0__16BIT_D1_REG, CYREG_B1_UDB08_09_D1
.set UART_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB08_09_ACTL
.set UART_BUART_sTX_TxShifter_u0__16BIT_F0_REG, CYREG_B1_UDB08_09_F0
.set UART_BUART_sTX_TxShifter_u0__16BIT_F1_REG, CYREG_B1_UDB08_09_F1
.set UART_BUART_sTX_TxShifter_u0__A0_A1_REG, CYREG_B1_UDB08_A0_A1
.set UART_BUART_sTX_TxShifter_u0__A0_REG, CYREG_B1_UDB08_A0
.set UART_BUART_sTX_TxShifter_u0__A1_REG, CYREG_B1_UDB08_A1
.set UART_BUART_sTX_TxShifter_u0__D0_D1_REG, CYREG_B1_UDB08_D0_D1
.set UART_BUART_sTX_TxShifter_u0__D0_REG, CYREG_B1_UDB08_D0
.set UART_BUART_sTX_TxShifter_u0__D1_REG, CYREG_B1_UDB08_D1
.set UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG, CYREG_B1_UDB08_ACTL
.set UART_BUART_sTX_TxShifter_u0__F0_F1_REG, CYREG_B1_UDB08_F0_F1
.set UART_BUART_sTX_TxShifter_u0__F0_REG, CYREG_B1_UDB08_F0
.set UART_BUART_sTX_TxShifter_u0__F1_REG, CYREG_B1_UDB08_F1
.set UART_BUART_sTX_TxSts__0__MASK, 0x01
.set UART_BUART_sTX_TxSts__0__POS, 0
.set UART_BUART_sTX_TxSts__1__MASK, 0x02
.set UART_BUART_sTX_TxSts__1__POS, 1
.set UART_BUART_sTX_TxSts__2__MASK, 0x04
.set UART_BUART_sTX_TxSts__2__POS, 2
.set UART_BUART_sTX_TxSts__3__MASK, 0x08
.set UART_BUART_sTX_TxSts__3__POS, 3
.set UART_BUART_sTX_TxSts__MASK, 0x0F
.set UART_BUART_sTX_TxSts__MASK_REG, CYREG_B1_UDB11_MSK
.set UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG, CYREG_B1_UDB11_ACTL
.set UART_BUART_sTX_TxSts__STATUS_REG, CYREG_B1_UDB11_ST
.set UART_IntClock__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set UART_IntClock__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set UART_IntClock__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set UART_IntClock__CFG2_SRC_SEL_MASK, 0x07
.set UART_IntClock__INDEX, 0x01
.set UART_IntClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set UART_IntClock__PM_ACT_MSK, 0x02
.set UART_IntClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set UART_IntClock__PM_STBY_MSK, 0x02

/* DMA_1 */
.set DMA_1__DRQ_CTL, CYREG_IDMUX_DRQ_CTL2
.set DMA_1__DRQ_NUMBER, 10
.set DMA_1__NUMBEROF_TDS, 0
.set DMA_1__PRIORITY, 2
.set DMA_1__TERMIN_EN, 0
.set DMA_1__TERMIN_SEL, 0
.set DMA_1__TERMOUT0_EN, 0
.set DMA_1__TERMOUT0_SEL, 0
.set DMA_1__TERMOUT1_EN, 0
.set DMA_1__TERMOUT1_SEL, 0

/* DMA_2 */
.set DMA_2__DRQ_CTL, CYREG_IDMUX_DRQ_CTL2
.set DMA_2__DRQ_NUMBER, 8
.set DMA_2__NUMBEROF_TDS, 0
.set DMA_2__PRIORITY, 2
.set DMA_2__TERMIN_EN, 0
.set DMA_2__TERMIN_SEL, 0
.set DMA_2__TERMOUT0_EN, 0
.set DMA_2__TERMOUT0_SEL, 0
.set DMA_2__TERMOUT1_EN, 0
.set DMA_2__TERMOUT1_SEL, 0

/* DMA_3 */
.set DMA_3__DRQ_CTL, CYREG_IDMUX_DRQ_CTL0
.set DMA_3__DRQ_NUMBER, 0
.set DMA_3__NUMBEROF_TDS, 0
.set DMA_3__PRIORITY, 2
.set DMA_3__TERMIN_EN, 0
.set DMA_3__TERMIN_SEL, 0
.set DMA_3__TERMOUT0_EN, 1
.set DMA_3__TERMOUT0_SEL, 0
.set DMA_3__TERMOUT1_EN, 0
.set DMA_3__TERMOUT1_SEL, 0

/* PWM_1 */
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB08_09_ACTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB08_09_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB08_09_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB08_09_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB08_09_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG, CYREG_B0_UDB08_09_MSK
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB08_09_MSK
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB08_09_MSK
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB08_09_MSK
.set PWM_1_PWMUDB_genblk1_ctrlreg__7__MASK, 0x80
.set PWM_1_PWMUDB_genblk1_ctrlreg__7__POS, 7
.set PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB08_ACTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_REG, CYREG_B0_UDB08_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG, CYREG_B0_UDB08_ST_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_REG, CYREG_B0_UDB08_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG, CYREG_B0_UDB08_ST_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__MASK, 0x80
.set PWM_1_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB08_MSK_ACTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB08_MSK_ACTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__PERIOD_REG, CYREG_B0_UDB08_MSK
.set PWM_1_PWMUDB_genblk8_stsreg__0__MASK, 0x01
.set PWM_1_PWMUDB_genblk8_stsreg__0__POS, 0
.set PWM_1_PWMUDB_genblk8_stsreg__1__MASK, 0x02
.set PWM_1_PWMUDB_genblk8_stsreg__1__POS, 1
.set PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB08_09_ACTL
.set PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG, CYREG_B0_UDB08_09_ST
.set PWM_1_PWMUDB_genblk8_stsreg__2__MASK, 0x04
.set PWM_1_PWMUDB_genblk8_stsreg__2__POS, 2
.set PWM_1_PWMUDB_genblk8_stsreg__3__MASK, 0x08
.set PWM_1_PWMUDB_genblk8_stsreg__3__POS, 3
.set PWM_1_PWMUDB_genblk8_stsreg__MASK, 0x0F
.set PWM_1_PWMUDB_genblk8_stsreg__MASK_REG, CYREG_B0_UDB08_MSK
.set PWM_1_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB08_MSK_ACTL
.set PWM_1_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG, CYREG_B0_UDB08_MSK_ACTL
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG, CYREG_B0_UDB08_ACTL
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_CNT_REG, CYREG_B0_UDB08_ST_CTL
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG, CYREG_B0_UDB08_ST_CTL
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_REG, CYREG_B0_UDB08_ST
.set PWM_1_PWMUDB_sP8_pwmdp_u0__A0_A1_REG, CYREG_B1_UDB11_A0_A1
.set PWM_1_PWMUDB_sP8_pwmdp_u0__A0_REG, CYREG_B1_UDB11_A0
.set PWM_1_PWMUDB_sP8_pwmdp_u0__A1_REG, CYREG_B1_UDB11_A1
.set PWM_1_PWMUDB_sP8_pwmdp_u0__D0_D1_REG, CYREG_B1_UDB11_D0_D1
.set PWM_1_PWMUDB_sP8_pwmdp_u0__D0_REG, CYREG_B1_UDB11_D0
.set PWM_1_PWMUDB_sP8_pwmdp_u0__D1_REG, CYREG_B1_UDB11_D1
.set PWM_1_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG, CYREG_B1_UDB11_ACTL
.set PWM_1_PWMUDB_sP8_pwmdp_u0__F0_F1_REG, CYREG_B1_UDB11_F0_F1
.set PWM_1_PWMUDB_sP8_pwmdp_u0__F0_REG, CYREG_B1_UDB11_F0
.set PWM_1_PWMUDB_sP8_pwmdp_u0__F1_REG, CYREG_B1_UDB11_F1

/* TIA_1 */
.set TIA_1_SC__BST, CYREG_SC3_BST
.set TIA_1_SC__CLK, CYREG_SC3_CLK
.set TIA_1_SC__CMPINV, CYREG_SC_CMPINV
.set TIA_1_SC__CMPINV_MASK, 0x08
.set TIA_1_SC__CPTR, CYREG_SC_CPTR
.set TIA_1_SC__CPTR_MASK, 0x08
.set TIA_1_SC__CR0, CYREG_SC3_CR0
.set TIA_1_SC__CR1, CYREG_SC3_CR1
.set TIA_1_SC__CR2, CYREG_SC3_CR2
.set TIA_1_SC__MSK, CYREG_SC_MSK
.set TIA_1_SC__MSK_MASK, 0x08
.set TIA_1_SC__PM_ACT_CFG, CYREG_PM_ACT_CFG9
.set TIA_1_SC__PM_ACT_MSK, 0x08
.set TIA_1_SC__PM_STBY_CFG, CYREG_PM_STBY_CFG9
.set TIA_1_SC__PM_STBY_MSK, 0x08
.set TIA_1_SC__SR, CYREG_SC_SR
.set TIA_1_SC__SR_MASK, 0x08
.set TIA_1_SC__SW0, CYREG_SC3_SW0
.set TIA_1_SC__SW10, CYREG_SC3_SW10
.set TIA_1_SC__SW2, CYREG_SC3_SW2
.set TIA_1_SC__SW3, CYREG_SC3_SW3
.set TIA_1_SC__SW4, CYREG_SC3_SW4
.set TIA_1_SC__SW6, CYREG_SC3_SW6
.set TIA_1_SC__SW7, CYREG_SC3_SW7
.set TIA_1_SC__SW8, CYREG_SC3_SW8
.set TIA_1_SC__WRK1, CYREG_SC_WRK1
.set TIA_1_SC__WRK1_MASK, 0x08

/* isr_1 */
.set isr_1__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_1__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_1__INTC_MASK, 0x01
.set isr_1__INTC_NUMBER, 0
.set isr_1__INTC_PRIOR_NUM, 7
.set isr_1__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set isr_1__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_1__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* DacOut */
.set DacOut__0__INTTYPE, CYREG_PICU1_INTTYPE6
.set DacOut__0__MASK, 0x40
.set DacOut__0__PC, CYREG_PRT1_PC6
.set DacOut__0__PORT, 1
.set DacOut__0__SHIFT, 6
.set DacOut__AG, CYREG_PRT1_AG
.set DacOut__AMUX, CYREG_PRT1_AMUX
.set DacOut__BIE, CYREG_PRT1_BIE
.set DacOut__BIT_MASK, CYREG_PRT1_BIT_MASK
.set DacOut__BYP, CYREG_PRT1_BYP
.set DacOut__CTL, CYREG_PRT1_CTL
.set DacOut__DM0, CYREG_PRT1_DM0
.set DacOut__DM1, CYREG_PRT1_DM1
.set DacOut__DM2, CYREG_PRT1_DM2
.set DacOut__DR, CYREG_PRT1_DR
.set DacOut__INP_DIS, CYREG_PRT1_INP_DIS
.set DacOut__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set DacOut__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set DacOut__LCD_EN, CYREG_PRT1_LCD_EN
.set DacOut__MASK, 0x40
.set DacOut__PORT, 1
.set DacOut__PRT, CYREG_PRT1_PRT
.set DacOut__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set DacOut__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set DacOut__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set DacOut__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set DacOut__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set DacOut__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set DacOut__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set DacOut__PS, CYREG_PRT1_PS
.set DacOut__SHIFT, 6
.set DacOut__SLW, CYREG_PRT1_SLW

/* Clock_2 */
.set Clock_2__CFG0, CYREG_CLKDIST_DCFG2_CFG0
.set Clock_2__CFG1, CYREG_CLKDIST_DCFG2_CFG1
.set Clock_2__CFG2, CYREG_CLKDIST_DCFG2_CFG2
.set Clock_2__CFG2_SRC_SEL_MASK, 0x07
.set Clock_2__INDEX, 0x02
.set Clock_2__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_2__PM_ACT_MSK, 0x04
.set Clock_2__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_2__PM_STBY_MSK, 0x04

/* Mixer_1 */
.set Mixer_1_SC__BST, CYREG_SC2_BST
.set Mixer_1_SC__CLK, CYREG_SC2_CLK
.set Mixer_1_SC__CMPINV, CYREG_SC_CMPINV
.set Mixer_1_SC__CMPINV_MASK, 0x04
.set Mixer_1_SC__CPTR, CYREG_SC_CPTR
.set Mixer_1_SC__CPTR_MASK, 0x04
.set Mixer_1_SC__CR0, CYREG_SC2_CR0
.set Mixer_1_SC__CR1, CYREG_SC2_CR1
.set Mixer_1_SC__CR2, CYREG_SC2_CR2
.set Mixer_1_SC__MSK, CYREG_SC_MSK
.set Mixer_1_SC__MSK_MASK, 0x04
.set Mixer_1_SC__PM_ACT_CFG, CYREG_PM_ACT_CFG9
.set Mixer_1_SC__PM_ACT_MSK, 0x04
.set Mixer_1_SC__PM_STBY_CFG, CYREG_PM_STBY_CFG9
.set Mixer_1_SC__PM_STBY_MSK, 0x04
.set Mixer_1_SC__SR, CYREG_SC_SR
.set Mixer_1_SC__SR_MASK, 0x04
.set Mixer_1_SC__SW0, CYREG_SC2_SW0
.set Mixer_1_SC__SW10, CYREG_SC2_SW10
.set Mixer_1_SC__SW2, CYREG_SC2_SW2
.set Mixer_1_SC__SW3, CYREG_SC2_SW3
.set Mixer_1_SC__SW4, CYREG_SC2_SW4
.set Mixer_1_SC__SW6, CYREG_SC2_SW6
.set Mixer_1_SC__SW7, CYREG_SC2_SW7
.set Mixer_1_SC__SW8, CYREG_SC2_SW8
.set Mixer_1_SC__WRK1, CYREG_SC_WRK1
.set Mixer_1_SC__WRK1_MASK, 0x04

/* PhotoIn */
.set PhotoIn__0__INTTYPE, CYREG_PICU1_INTTYPE7
.set PhotoIn__0__MASK, 0x80
.set PhotoIn__0__PC, CYREG_PRT1_PC7
.set PhotoIn__0__PORT, 1
.set PhotoIn__0__SHIFT, 7
.set PhotoIn__AG, CYREG_PRT1_AG
.set PhotoIn__AMUX, CYREG_PRT1_AMUX
.set PhotoIn__BIE, CYREG_PRT1_BIE
.set PhotoIn__BIT_MASK, CYREG_PRT1_BIT_MASK
.set PhotoIn__BYP, CYREG_PRT1_BYP
.set PhotoIn__CTL, CYREG_PRT1_CTL
.set PhotoIn__DM0, CYREG_PRT1_DM0
.set PhotoIn__DM1, CYREG_PRT1_DM1
.set PhotoIn__DM2, CYREG_PRT1_DM2
.set PhotoIn__DR, CYREG_PRT1_DR
.set PhotoIn__INP_DIS, CYREG_PRT1_INP_DIS
.set PhotoIn__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set PhotoIn__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set PhotoIn__LCD_EN, CYREG_PRT1_LCD_EN
.set PhotoIn__MASK, 0x80
.set PhotoIn__PORT, 1
.set PhotoIn__PRT, CYREG_PRT1_PRT
.set PhotoIn__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set PhotoIn__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set PhotoIn__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set PhotoIn__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set PhotoIn__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set PhotoIn__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set PhotoIn__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set PhotoIn__PS, CYREG_PRT1_PS
.set PhotoIn__SHIFT, 7
.set PhotoIn__SLW, CYREG_PRT1_SLW

/* VDAC8_1 */
.set VDAC8_1_viDAC8__CR0, CYREG_DAC1_CR0
.set VDAC8_1_viDAC8__CR1, CYREG_DAC1_CR1
.set VDAC8_1_viDAC8__D, CYREG_DAC1_D
.set VDAC8_1_viDAC8__PM_ACT_CFG, CYREG_PM_ACT_CFG8
.set VDAC8_1_viDAC8__PM_ACT_MSK, 0x02
.set VDAC8_1_viDAC8__PM_STBY_CFG, CYREG_PM_STBY_CFG8
.set VDAC8_1_viDAC8__PM_STBY_MSK, 0x02
.set VDAC8_1_viDAC8__STROBE, CYREG_DAC1_STROBE
.set VDAC8_1_viDAC8__SW0, CYREG_DAC1_SW0
.set VDAC8_1_viDAC8__SW2, CYREG_DAC1_SW2
.set VDAC8_1_viDAC8__SW3, CYREG_DAC1_SW3
.set VDAC8_1_viDAC8__SW4, CYREG_DAC1_SW4
.set VDAC8_1_viDAC8__TR, CYREG_DAC1_TR
.set VDAC8_1_viDAC8__TRIM__M1, CYREG_FLSHID_CUST_TABLES_DAC1_M1
.set VDAC8_1_viDAC8__TRIM__M2, CYREG_FLSHID_CUST_TABLES_DAC1_M2
.set VDAC8_1_viDAC8__TRIM__M3, CYREG_FLSHID_CUST_TABLES_DAC1_M3
.set VDAC8_1_viDAC8__TRIM__M4, CYREG_FLSHID_CUST_TABLES_DAC1_M4
.set VDAC8_1_viDAC8__TRIM__M5, CYREG_FLSHID_CUST_TABLES_DAC1_M5
.set VDAC8_1_viDAC8__TRIM__M6, CYREG_FLSHID_CUST_TABLES_DAC1_M6
.set VDAC8_1_viDAC8__TRIM__M7, CYREG_FLSHID_CUST_TABLES_DAC1_M7
.set VDAC8_1_viDAC8__TRIM__M8, CYREG_FLSHID_CUST_TABLES_DAC1_M8
.set VDAC8_1_viDAC8__TST, CYREG_DAC1_TST

/* ExtClock */
.set ExtClock__0__INTTYPE, CYREG_PICU1_INTTYPE5
.set ExtClock__0__MASK, 0x20
.set ExtClock__0__PC, CYREG_PRT1_PC5
.set ExtClock__0__PORT, 1
.set ExtClock__0__SHIFT, 5
.set ExtClock__AG, CYREG_PRT1_AG
.set ExtClock__AMUX, CYREG_PRT1_AMUX
.set ExtClock__BIE, CYREG_PRT1_BIE
.set ExtClock__BIT_MASK, CYREG_PRT1_BIT_MASK
.set ExtClock__BYP, CYREG_PRT1_BYP
.set ExtClock__CTL, CYREG_PRT1_CTL
.set ExtClock__DM0, CYREG_PRT1_DM0
.set ExtClock__DM1, CYREG_PRT1_DM1
.set ExtClock__DM2, CYREG_PRT1_DM2
.set ExtClock__DR, CYREG_PRT1_DR
.set ExtClock__INP_DIS, CYREG_PRT1_INP_DIS
.set ExtClock__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set ExtClock__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set ExtClock__LCD_EN, CYREG_PRT1_LCD_EN
.set ExtClock__MASK, 0x20
.set ExtClock__PORT, 1
.set ExtClock__PRT, CYREG_PRT1_PRT
.set ExtClock__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set ExtClock__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set ExtClock__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set ExtClock__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set ExtClock__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set ExtClock__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set ExtClock__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set ExtClock__PS, CYREG_PRT1_PS
.set ExtClock__SHIFT, 5
.set ExtClock__SLW, CYREG_PRT1_SLW

/* Filter_1 */
.set Filter_1_DFB__ACU_SRAM_DATA, CYREG_DFB0_ACU_SRAM_DATA_MBASE
.set Filter_1_DFB__COHER, CYREG_DFB0_COHER
.set Filter_1_DFB__CR, CYREG_DFB0_CR
.set Filter_1_DFB__CSA_SRAM_DATA, CYREG_DFB0_CSA_SRAM_DATA_MBASE
.set Filter_1_DFB__CSB_SRAM_DATA, CYREG_DFB0_CSB_SRAM_DATA_MBASE
.set Filter_1_DFB__DALIGN, CYREG_DFB0_DALIGN
.set Filter_1_DFB__DMA_CTRL, CYREG_DFB0_DMA_CTRL
.set Filter_1_DFB__DPA_SRAM_DATA, CYREG_DFB0_DPA_SRAM_DATA_MBASE
.set Filter_1_DFB__DPB_SRAM_DATA, CYREG_DFB0_DPB_SRAM_DATA_MBASE
.set Filter_1_DFB__DSI_CTRL, CYREG_DFB0_DSI_CTRL
.set Filter_1_DFB__FSM_SRAM_DATA, CYREG_DFB0_FSM_SRAM_DATA_MBASE
.set Filter_1_DFB__HOLDA, CYREG_DFB0_HOLDA
.set Filter_1_DFB__HOLDAH, CYREG_DFB0_HOLDAH
.set Filter_1_DFB__HOLDAM, CYREG_DFB0_HOLDAM
.set Filter_1_DFB__HOLDAS, CYREG_DFB0_HOLDAS
.set Filter_1_DFB__HOLDB, CYREG_DFB0_HOLDB
.set Filter_1_DFB__HOLDBH, CYREG_DFB0_HOLDBH
.set Filter_1_DFB__HOLDBM, CYREG_DFB0_HOLDBM
.set Filter_1_DFB__HOLDBS, CYREG_DFB0_HOLDBS
.set Filter_1_DFB__INT_CTRL, CYREG_DFB0_INT_CTRL
.set Filter_1_DFB__PM_ACT_CFG, CYREG_PM_ACT_CFG6
.set Filter_1_DFB__PM_ACT_MSK, 0x10
.set Filter_1_DFB__PM_STBY_CFG, CYREG_PM_STBY_CFG6
.set Filter_1_DFB__PM_STBY_MSK, 0x10
.set Filter_1_DFB__RAM_DIR, CYREG_DFB0_RAM_DIR
.set Filter_1_DFB__RAM_EN, CYREG_DFB0_RAM_EN
.set Filter_1_DFB__SEMA, CYREG_DFB0_SEMA
.set Filter_1_DFB__SR, CYREG_DFB0_SR
.set Filter_1_DFB__STAGEA, CYREG_DFB0_STAGEA
.set Filter_1_DFB__STAGEAH, CYREG_DFB0_STAGEAH
.set Filter_1_DFB__STAGEAM, CYREG_DFB0_STAGEAM
.set Filter_1_DFB__STAGEB, CYREG_DFB0_STAGEB
.set Filter_1_DFB__STAGEBH, CYREG_DFB0_STAGEBH
.set Filter_1_DFB__STAGEBM, CYREG_DFB0_STAGEBM

/* ADC_DelSig_1 */
.set ADC_DelSig_1_DEC__COHER, CYREG_DEC_COHER
.set ADC_DelSig_1_DEC__CR, CYREG_DEC_CR
.set ADC_DelSig_1_DEC__DR1, CYREG_DEC_DR1
.set ADC_DelSig_1_DEC__DR2, CYREG_DEC_DR2
.set ADC_DelSig_1_DEC__DR2H, CYREG_DEC_DR2H
.set ADC_DelSig_1_DEC__GCOR, CYREG_DEC_GCOR
.set ADC_DelSig_1_DEC__GCORH, CYREG_DEC_GCORH
.set ADC_DelSig_1_DEC__GVAL, CYREG_DEC_GVAL
.set ADC_DelSig_1_DEC__OCOR, CYREG_DEC_OCOR
.set ADC_DelSig_1_DEC__OCORH, CYREG_DEC_OCORH
.set ADC_DelSig_1_DEC__OCORM, CYREG_DEC_OCORM
.set ADC_DelSig_1_DEC__OUTSAMP, CYREG_DEC_OUTSAMP
.set ADC_DelSig_1_DEC__OUTSAMPH, CYREG_DEC_OUTSAMPH
.set ADC_DelSig_1_DEC__OUTSAMPM, CYREG_DEC_OUTSAMPM
.set ADC_DelSig_1_DEC__OUTSAMPS, CYREG_DEC_OUTSAMPS
.set ADC_DelSig_1_DEC__PM_ACT_CFG, CYREG_PM_ACT_CFG10
.set ADC_DelSig_1_DEC__PM_ACT_MSK, 0x01
.set ADC_DelSig_1_DEC__PM_STBY_CFG, CYREG_PM_STBY_CFG10
.set ADC_DelSig_1_DEC__PM_STBY_MSK, 0x01
.set ADC_DelSig_1_DEC__SHIFT1, CYREG_DEC_SHIFT1
.set ADC_DelSig_1_DEC__SHIFT2, CYREG_DEC_SHIFT2
.set ADC_DelSig_1_DEC__SR, CYREG_DEC_SR
.set ADC_DelSig_1_DEC__TRIM__M1, CYREG_FLSHID_CUST_TABLES_DEC_M1
.set ADC_DelSig_1_DEC__TRIM__M2, CYREG_FLSHID_CUST_TABLES_DEC_M2
.set ADC_DelSig_1_DEC__TRIM__M3, CYREG_FLSHID_CUST_TABLES_DEC_M3
.set ADC_DelSig_1_DEC__TRIM__M4, CYREG_FLSHID_CUST_TABLES_DEC_M4
.set ADC_DelSig_1_DEC__TRIM__M5, CYREG_FLSHID_CUST_TABLES_DEC_M5
.set ADC_DelSig_1_DEC__TRIM__M6, CYREG_FLSHID_CUST_TABLES_DEC_M6
.set ADC_DelSig_1_DEC__TRIM__M7, CYREG_FLSHID_CUST_TABLES_DEC_M7
.set ADC_DelSig_1_DEC__TRIM__M8, CYREG_FLSHID_CUST_TABLES_DEC_M8
.set ADC_DelSig_1_DSM__BUF0, CYREG_DSM0_BUF0
.set ADC_DelSig_1_DSM__BUF1, CYREG_DSM0_BUF1
.set ADC_DelSig_1_DSM__BUF2, CYREG_DSM0_BUF2
.set ADC_DelSig_1_DSM__BUF3, CYREG_DSM0_BUF3
.set ADC_DelSig_1_DSM__CLK, CYREG_DSM0_CLK
.set ADC_DelSig_1_DSM__CR0, CYREG_DSM0_CR0
.set ADC_DelSig_1_DSM__CR1, CYREG_DSM0_CR1
.set ADC_DelSig_1_DSM__CR10, CYREG_DSM0_CR10
.set ADC_DelSig_1_DSM__CR11, CYREG_DSM0_CR11
.set ADC_DelSig_1_DSM__CR12, CYREG_DSM0_CR12
.set ADC_DelSig_1_DSM__CR13, CYREG_DSM0_CR13
.set ADC_DelSig_1_DSM__CR14, CYREG_DSM0_CR14
.set ADC_DelSig_1_DSM__CR15, CYREG_DSM0_CR15
.set ADC_DelSig_1_DSM__CR16, CYREG_DSM0_CR16
.set ADC_DelSig_1_DSM__CR17, CYREG_DSM0_CR17
.set ADC_DelSig_1_DSM__CR2, CYREG_DSM0_CR2
.set ADC_DelSig_1_DSM__CR3, CYREG_DSM0_CR3
.set ADC_DelSig_1_DSM__CR4, CYREG_DSM0_CR4
.set ADC_DelSig_1_DSM__CR5, CYREG_DSM0_CR5
.set ADC_DelSig_1_DSM__CR6, CYREG_DSM0_CR6
.set ADC_DelSig_1_DSM__CR7, CYREG_DSM0_CR7
.set ADC_DelSig_1_DSM__CR8, CYREG_DSM0_CR8
.set ADC_DelSig_1_DSM__CR9, CYREG_DSM0_CR9
.set ADC_DelSig_1_DSM__DEM0, CYREG_DSM0_DEM0
.set ADC_DelSig_1_DSM__DEM1, CYREG_DSM0_DEM1
.set ADC_DelSig_1_DSM__MISC, CYREG_DSM0_MISC
.set ADC_DelSig_1_DSM__OUT0, CYREG_DSM0_OUT0
.set ADC_DelSig_1_DSM__OUT1, CYREG_DSM0_OUT1
.set ADC_DelSig_1_DSM__REF0, CYREG_DSM0_REF0
.set ADC_DelSig_1_DSM__REF1, CYREG_DSM0_REF1
.set ADC_DelSig_1_DSM__REF2, CYREG_DSM0_REF2
.set ADC_DelSig_1_DSM__REF3, CYREG_DSM0_REF3
.set ADC_DelSig_1_DSM__RSVD1, CYREG_DSM0_RSVD1
.set ADC_DelSig_1_DSM__SW0, CYREG_DSM0_SW0
.set ADC_DelSig_1_DSM__SW2, CYREG_DSM0_SW2
.set ADC_DelSig_1_DSM__SW3, CYREG_DSM0_SW3
.set ADC_DelSig_1_DSM__SW4, CYREG_DSM0_SW4
.set ADC_DelSig_1_DSM__SW6, CYREG_DSM0_SW6
.set ADC_DelSig_1_DSM__TR0, CYREG_NPUMP_DSM_TR0
.set ADC_DelSig_1_DSM__TST0, CYREG_DSM0_TST0
.set ADC_DelSig_1_DSM__TST1, CYREG_DSM0_TST1
.set ADC_DelSig_1_Ext_CP_Clk__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set ADC_DelSig_1_Ext_CP_Clk__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set ADC_DelSig_1_Ext_CP_Clk__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set ADC_DelSig_1_Ext_CP_Clk__CFG2_SRC_SEL_MASK, 0x07
.set ADC_DelSig_1_Ext_CP_Clk__INDEX, 0x00
.set ADC_DelSig_1_Ext_CP_Clk__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set ADC_DelSig_1_Ext_CP_Clk__PM_ACT_MSK, 0x01
.set ADC_DelSig_1_Ext_CP_Clk__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set ADC_DelSig_1_Ext_CP_Clk__PM_STBY_MSK, 0x01
.set ADC_DelSig_1_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ADC_DelSig_1_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ADC_DelSig_1_IRQ__INTC_MASK, 0x20000000
.set ADC_DelSig_1_IRQ__INTC_NUMBER, 29
.set ADC_DelSig_1_IRQ__INTC_PRIOR_NUM, 7
.set ADC_DelSig_1_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_29
.set ADC_DelSig_1_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ADC_DelSig_1_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set ADC_DelSig_1_theACLK__CFG0, CYREG_CLKDIST_ACFG0_CFG0
.set ADC_DelSig_1_theACLK__CFG1, CYREG_CLKDIST_ACFG0_CFG1
.set ADC_DelSig_1_theACLK__CFG2, CYREG_CLKDIST_ACFG0_CFG2
.set ADC_DelSig_1_theACLK__CFG2_SRC_SEL_MASK, 0x07
.set ADC_DelSig_1_theACLK__CFG3, CYREG_CLKDIST_ACFG0_CFG3
.set ADC_DelSig_1_theACLK__CFG3_PHASE_DLY_MASK, 0x0F
.set ADC_DelSig_1_theACLK__INDEX, 0x00
.set ADC_DelSig_1_theACLK__PM_ACT_CFG, CYREG_PM_ACT_CFG1
.set ADC_DelSig_1_theACLK__PM_ACT_MSK, 0x01
.set ADC_DelSig_1_theACLK__PM_STBY_CFG, CYREG_PM_STBY_CFG1
.set ADC_DelSig_1_theACLK__PM_STBY_MSK, 0x01

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 18
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 18
.set CYDEV_CHIP_MEMBER_4D, 13
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 19
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 17
.set CYDEV_CHIP_MEMBER_4I, 23
.set CYDEV_CHIP_MEMBER_4J, 14
.set CYDEV_CHIP_MEMBER_4K, 15
.set CYDEV_CHIP_MEMBER_4L, 22
.set CYDEV_CHIP_MEMBER_4M, 21
.set CYDEV_CHIP_MEMBER_4N, 10
.set CYDEV_CHIP_MEMBER_4O, 7
.set CYDEV_CHIP_MEMBER_4P, 20
.set CYDEV_CHIP_MEMBER_4Q, 12
.set CYDEV_CHIP_MEMBER_4R, 8
.set CYDEV_CHIP_MEMBER_4S, 11
.set CYDEV_CHIP_MEMBER_4T, 9
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 16
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 24
.set CYDEV_CHIP_MEMBER_FM3, 28
.set CYDEV_CHIP_MEMBER_FM4, 29
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 25
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 26
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 27
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000000
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000501
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif