/*
 * Copyright (C) 2011-2012 Freescale Semiconductor, Inc.
 */

/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __DW_HDMI_H__
#define __DW_HDMI_H__

/*
 * Hdmi controller registers for Allwinner H3
 */

/* Identification Registers */
#define HDMI_DESIGN_ID                          0x0000
#define HDMI_REVISION_ID                        0x0001
#define HDMI_PRODUCT_ID0                        0x8000
#define HDMI_PRODUCT_ID1                        0x8001
#define HDMI_CONFIG0_ID                         0x0002
#define HDMI_CONFIG1_ID                         0x0003
#define HDMI_CONFIG2_ID                         0x8002
#define HDMI_CONFIG3_ID                         0x8003

/* Interrupt Registers */
#define HDMI_IH_FC_STAT0                        0x0010
#define HDMI_IH_FC_STAT1                        0x0011
#define HDMI_IH_FC_STAT2                        0x8010
#define HDMI_IH_AS_STAT0                        0x8011
#define HDMI_IH_PHY_STAT0                       0x0012
#define HDMI_IH_I2CM_STAT0                      0x0013
#define HDMI_IH_CEC_STAT0                       0x8012
#define HDMI_IH_VP_STAT0                        0x8013
#define HDMI_IH_I2CMPHY_STAT0                   0x4010
#define HDMI_IH_AHBDMAAUD_STAT0                 0x4011

#define HDMI_IH_MUTE_FC_STAT0                   0x1010
#define HDMI_IH_MUTE_FC_STAT1                   0x1011
#define HDMI_IH_MUTE_FC_STAT2                   0x9010
#define HDMI_IH_MUTE_AS_STAT0                   0x9011
#define HDMI_IH_MUTE_PHY_STAT0                  0x1012
#define HDMI_IH_MUTE_I2CM_STAT0                 0x1013
#define HDMI_IH_MUTE_CEC_STAT0                  0x9012
#define HDMI_IH_MUTE_VP_STAT0                   0x9013
#define HDMI_IH_MUTE_I2CMPHY_STAT0              0x5010
#define HDMI_IH_MUTE_AHBDMAAUD_STAT0            0x5011
#define HDMI_IH_MUTE                            0xf01f

/* Video Sample Registers */
#define HDMI_TX_INVID0                          0x0800
#define HDMI_TX_INSTUFFING                      0x0801
#define HDMI_TX_GYDATA0                         0x8800
#define HDMI_TX_GYDATA1                         0x8801
#define HDMI_TX_RCRDATA0                        0x0802
#define HDMI_TX_RCRDATA1                        0x0803
#define HDMI_TX_BCBDATA0                        0x8802
#define HDMI_TX_BCBDATA1                        0x8803

/* Video Packetizer Registers */
#define HDMI_VP_STATUS                          0x0400
#define HDMI_VP_PR_CD                           0x0401
#define HDMI_VP_STUFF                           0x8400
#define HDMI_VP_REMAP                           0x8401
#define HDMI_VP_CONF                            0x0402
#define HDMI_VP_STAT                            0x0403
#define HDMI_VP_INT                             0x8402
#define HDMI_VP_MASK                            0x8403
#define HDMI_VP_POL                             0x4400

/* Frame Composer Registers */
#define HDMI_FC_INVIDCONF                       0x0040
#define HDMI_FC_INHACTV0                        0x0041
#define HDMI_FC_INHACTV1                        0x8040
#define HDMI_FC_INHBLANK0                       0x8041
#define HDMI_FC_INHBLANK1                       0x0042
#define HDMI_FC_INVACTV0                        0x0043
#define HDMI_FC_INVACTV1                        0x8042
#define HDMI_FC_INVBLANK                        0x8043
#define HDMI_FC_HSYNCINDELAY0                   0x4040
#define HDMI_FC_HSYNCINDELAY1                   0x4041
#define HDMI_FC_HSYNCINWIDTH0                   0xC040
#define HDMI_FC_HSYNCINWIDTH1                   0xC041
#define HDMI_FC_VSYNCINDELAY                    0x4042
#define HDMI_FC_VSYNCINWIDTH                    0x4043
#define HDMI_FC_INFREQ0                         0xC042
#define HDMI_FC_INFREQ1                         0xC043
#define HDMI_FC_INFREQ2                         0x0044
#define HDMI_FC_CTRLDUR                         0x0045
#define HDMI_FC_EXCTRLDUR                       0x8044
#define HDMI_FC_EXCTRLSPAC                      0x8045
#define HDMI_FC_CH0PREAM                        0x0046
#define HDMI_FC_CH1PREAM                        0x0047
#define HDMI_FC_CH2PREAM                        0x8046
#define HDMI_FC_AVICONF3                        0x8047
#define HDMI_FC_GCP                             0x4044
#define HDMI_FC_AVICONF0                        0x4045
#define HDMI_FC_AVICONF1                        0xC044
#define HDMI_FC_AVICONF2                        0xC045
#define HDMI_FC_AVIVID                          0x4046
#define HDMI_FC_AVIETB0                         0x4047
#define HDMI_FC_AVIETB1                         0xC046
#define HDMI_FC_AVISBB0                         0xC047
#define HDMI_FC_AVISBB1                         0x2040
#define HDMI_FC_AVIELB0                         0x2041
#define HDMI_FC_AVIELB1                         0xA040
#define HDMI_FC_AVISRB0                         0xA041
#define HDMI_FC_AVISRB1                         0x2042
#define HDMI_FC_AUDICONF0                       0x2043
#define HDMI_FC_AUDICONF1                       0xA042
#define HDMI_FC_AUDICONF2                       0xA043
#define HDMI_FC_AUDICONF3                       0x6040
#define HDMI_FC_VSDIEEEID0                      0x6041
#define HDMI_FC_VSDSIZE                         0xE040
#define HDMI_FC_VSDIEEEID1                      0x2044
#define HDMI_FC_VSDIEEEID2                      0x2045
#define HDMI_FC_VSDPAYLOAD0                     0xA044
#define HDMI_FC_VSDPAYLOAD1                     0xA045
#define HDMI_FC_VSDPAYLOAD2                     0x2046
#define HDMI_FC_VSDPAYLOAD3                     0x2047
#define HDMI_FC_VSDPAYLOAD4                     0xA046
#define HDMI_FC_VSDPAYLOAD5                     0xA047
#define HDMI_FC_VSDPAYLOAD6                     0x6044
#define HDMI_FC_VSDPAYLOAD7                     0x6045
#define HDMI_FC_VSDPAYLOAD8                     0xE044
#define HDMI_FC_VSDPAYLOAD9                     0xE045
#define HDMI_FC_VSDPAYLOAD10                    0x6046
#define HDMI_FC_VSDPAYLOAD11                    0x6047
#define HDMI_FC_VSDPAYLOAD12                    0xE046
#define HDMI_FC_VSDPAYLOAD13                    0xE047
#define HDMI_FC_VSDPAYLOAD14                    0x0048
#define HDMI_FC_VSDPAYLOAD15                    0x0049
#define HDMI_FC_VSDPAYLOAD16                    0x8048
#define HDMI_FC_VSDPAYLOAD17                    0x8049
#define HDMI_FC_VSDPAYLOAD18                    0x004A
#define HDMI_FC_VSDPAYLOAD19                    0x004B
#define HDMI_FC_VSDPAYLOAD20                    0x804A
#define HDMI_FC_VSDPAYLOAD21                    0x804B
#define HDMI_FC_VSDPAYLOAD22                    0x4048
#define HDMI_FC_VSDPAYLOAD23                    0x4049
#define HDMI_FC_SPDVENDORNAME0                  0xC048
#define HDMI_FC_SPDVENDORNAME1                  0xC049
#define HDMI_FC_SPDVENDORNAME2                  0x404A
#define HDMI_FC_SPDVENDORNAME3                  0x404B
#define HDMI_FC_SPDVENDORNAME4                  0xC04A
#define HDMI_FC_SPDVENDORNAME5                  0xC04B
#define HDMI_FC_SPDVENDORNAME6                  0x004C
#define HDMI_FC_SPDVENDORNAME7                  0x004D
#define HDMI_FC_SDPPRODUCTNAME0                 0x804C
#define HDMI_FC_SDPPRODUCTNAME1                 0x804D
#define HDMI_FC_SDPPRODUCTNAME2                 0x004E
#define HDMI_FC_SDPPRODUCTNAME3                 0x004F
#define HDMI_FC_SDPPRODUCTNAME4                 0x804E
#define HDMI_FC_SDPPRODUCTNAME5                 0x804F
#define HDMI_FC_SDPPRODUCTNAME6                 0x404C
#define HDMI_FC_SDPPRODUCTNAME7                 0x404D
#define HDMI_FC_SDPPRODUCTNAME8                 0xC04C
#define HDMI_FC_SDPPRODUCTNAME9                 0xC04D
#define HDMI_FC_SDPPRODUCTNAME10                0x404E
#define HDMI_FC_SDPPRODUCTNAME11                0x404F
#define HDMI_FC_SDPPRODUCTNAME12                0xC04E
#define HDMI_FC_SDPPRODUCTNAME13                0xC04F
#define HDMI_FC_SDPPRODUCTNAME14                0x2048
#define HDMI_FC_SPDPRODUCTNAME15                0x2049
#define HDMI_FC_SPDDEVICEINF                    0xA048
#define HDMI_FC_AUDSCONF                        0xA049
#define HDMI_FC_AUDSSTAT                        0x204A
#define HDMI_FC_DATACH0FILL                     0x204C
#define HDMI_FC_DATACH1FILL                     0x204D
#define HDMI_FC_DATACH2FILL                     0xA04C
#define HDMI_FC_CTRLQHIGH                       0xA04D
#define HDMI_FC_CTRLQLOW                        0x204E
#define HDMI_FC_ACP0                            0x204F
#define HDMI_FC_ACP28                           0xA04E
#define HDMI_FC_ACP27                           0xA04F
#define HDMI_FC_ACP26                           0x604C
#define HDMI_FC_ACP25                           0x604D
#define HDMI_FC_ACP24                           0xE04C
#define HDMI_FC_ACP23                           0xE04D
#define HDMI_FC_ACP22                           0x604E
#define HDMI_FC_ACP21                           0x604F
#define HDMI_FC_ACP20                           0xE04E
#define HDMI_FC_ACP19                           0xE04F
#define HDMI_FC_ACP18                           0x1040
#define HDMI_FC_ACP17                           0x1041
#define HDMI_FC_ACP16                           0x9040
#define HDMI_FC_ACP15                           0x9041
#define HDMI_FC_ACP14                           0x1042
#define HDMI_FC_ACP13                           0x1043
#define HDMI_FC_ACP12                           0x9042
#define HDMI_FC_ACP11                           0x9043
#define HDMI_FC_ACP10                           0x5040
#define HDMI_FC_ACP9                            0x5041
#define HDMI_FC_ACP8                            0xD040
#define HDMI_FC_ACP7                            0xD041
#define HDMI_FC_ACP6                            0x5042
#define HDMI_FC_ACP5                            0x5043
#define HDMI_FC_ACP4                            0xD042
#define HDMI_FC_ACP3                            0xD043
#define HDMI_FC_ACP2                            0x1044
#define HDMI_FC_ACP1                            0x1045
#define HDMI_FC_ISCR1_0                         0x9044
#define HDMI_FC_ISCR1_16                        0x9045
#define HDMI_FC_ISCR1_15                        0x1046
#define HDMI_FC_ISCR1_14                        0x1047
#define HDMI_FC_ISCR1_13                        0x9046
#define HDMI_FC_ISCR1_12                        0x9047
#define HDMI_FC_ISCR1_11                        0x5044
#define HDMI_FC_ISCR1_10                        0x5045
#define HDMI_FC_ISCR1_9                         0xD044
#define HDMI_FC_ISCR1_8                         0xD045
#define HDMI_FC_ISCR1_7                         0x5046
#define HDMI_FC_ISCR1_6                         0x5047
#define HDMI_FC_ISCR1_5                         0xD046
#define HDMI_FC_ISCR1_4                         0xD047
#define HDMI_FC_ISCR1_3                         0x3040
#define HDMI_FC_ISCR1_2                         0x3041
#define HDMI_FC_ISCR1_1                         0xB040
#define HDMI_FC_ISCR2_15                        0xB041
#define HDMI_FC_ISCR2_14                        0x3042
#define HDMI_FC_ISCR2_13                        0x3043
#define HDMI_FC_ISCR2_12                        0xB042
#define HDMI_FC_ISCR2_11                        0xB043
#define HDMI_FC_ISCR2_10                        0x7040
#define HDMI_FC_ISCR2_9                         0x7041
#define HDMI_FC_ISCR2_8                         0xF040
#define HDMI_FC_ISCR2_7                         0xF041
#define HDMI_FC_ISCR2_6                         0x7042
#define HDMI_FC_ISCR2_5                         0x7043
#define HDMI_FC_ISCR2_4                         0xF042
#define HDMI_FC_ISCR2_3                         0xF043
#define HDMI_FC_ISCR2_2                         0x3044
#define HDMI_FC_ISCR2_1                         0x3045
#define HDMI_FC_ISCR2_0                         0xB044
#define HDMI_FC_DATAUTO0                        0xB045
#define HDMI_FC_DATAUTO1                        0x3046
#define HDMI_FC_DATAUTO2                        0x3047
#define HDMI_FC_DATMAN                          0xB046
#define HDMI_FC_DATAUTO3                        0xB047
#define HDMI_FC_RDRB0                           0x7044
#define HDMI_FC_RDRB1                           0x7045
#define HDMI_FC_RDRB2                           0xF044
#define HDMI_FC_RDRB3                           0xF045
#define HDMI_FC_RDRB4                           0x7046
#define HDMI_FC_RDRB5                           0x7047
#define HDMI_FC_RDRB6                           0xF046
#define HDMI_FC_RDRB7                           0xF047
#define HDMI_FC_STAT0                           0x104C
#define HDMI_FC_INT0                            0x104D
#define HDMI_FC_MASK0                           0x904C
#define HDMI_FC_POL0                            0x904D
#define HDMI_FC_STAT1                           0x104E
#define HDMI_FC_INT1                            0x104F
#define HDMI_FC_MASK1                           0x904E
#define HDMI_FC_POL1                            0x904F
#define HDMI_FC_STAT2                           0x504C
#define HDMI_FC_INT2                            0x504D
#define HDMI_FC_MASK2                           0xD04C
#define HDMI_FC_POL2                            0xD04D
#define HDMI_FC_PRCONF                          0x3048

#define HDMI_FC_GMD_STAT                        0x0050
#define HDMI_FC_GMD_EN                          0x0051
#define HDMI_FC_GMD_UP                          0x8050
#define HDMI_FC_GMD_CONF                        0x8051
#define HDMI_FC_GMD_HB                          0x0052
#define HDMI_FC_GMD_PB0                         0x0053
#define HDMI_FC_GMD_PB1                         0x8052
#define HDMI_FC_GMD_PB2                         0x8053
#define HDMI_FC_GMD_PB3                         0x4050
#define HDMI_FC_GMD_PB4                         0x4051
#define HDMI_FC_GMD_PB5                         0xC050
#define HDMI_FC_GMD_PB6                         0xC051
#define HDMI_FC_GMD_PB7                         0x4052
#define HDMI_FC_GMD_PB8                         0x4053
#define HDMI_FC_GMD_PB9                         0xC052
#define HDMI_FC_GMD_PB10                        0xC053
#define HDMI_FC_GMD_PB11                        0x0054
#define HDMI_FC_GMD_PB12                        0x0055
#define HDMI_FC_GMD_PB13                        0x8054
#define HDMI_FC_GMD_PB14                        0x8055
#define HDMI_FC_GMD_PB15                        0x0056
#define HDMI_FC_GMD_PB16                        0x0057
#define HDMI_FC_GMD_PB17                        0x8056
#define HDMI_FC_GMD_PB18                        0x8057
#define HDMI_FC_GMD_PB19                        0x4054
#define HDMI_FC_GMD_PB20                        0x4055
#define HDMI_FC_GMD_PB21                        0xC054
#define HDMI_FC_GMD_PB22                        0xC055
#define HDMI_FC_GMD_PB23                        0x4056
#define HDMI_FC_GMD_PB24                        0x4057
#define HDMI_FC_GMD_PB25                        0xC056
#define HDMI_FC_GMD_PB26                        0xC057
#define HDMI_FC_GMD_PB27                        0x2050

#define HDMI_FC_DBGFORCE                        0x0840
#define HDMI_FC_DBGAUD0CH0                      0x0841
#define HDMI_FC_DBGAUD1CH0                      0x8840
#define HDMI_FC_DBGAUD2CH0                      0x8841
#define HDMI_FC_DBGAUD0CH1                      0x0842
#define HDMI_FC_DBGAUD1CH1                      0x0843
#define HDMI_FC_DBGAUD2CH1                      0x8842
#define HDMI_FC_DBGAUD0CH2                      0x8843
#define HDMI_FC_DBGAUD1CH2                      0x4840
#define HDMI_FC_DBGAUD2CH2                      0x4841
#define HDMI_FC_DBGAUD0CH3                      0xC840
#define HDMI_FC_DBGAUD1CH3                      0xC841
#define HDMI_FC_DBGAUD2CH3                      0x4842
#define HDMI_FC_DBGAUD0CH4                      0x4843
#define HDMI_FC_DBGAUD1CH4                      0xC842
#define HDMI_FC_DBGAUD2CH4                      0xC843
#define HDMI_FC_DBGAUD0CH5                      0x0844
#define HDMI_FC_DBGAUD1CH5                      0x0845
#define HDMI_FC_DBGAUD2CH5                      0x8844
#define HDMI_FC_DBGAUD0CH6                      0x8845
#define HDMI_FC_DBGAUD1CH6                      0x0846
#define HDMI_FC_DBGAUD2CH6                      0x0847
#define HDMI_FC_DBGAUD0CH7                      0x8846
#define HDMI_FC_DBGAUD1CH7                      0x8847
#define HDMI_FC_DBGAUD2CH7                      0x4844
#define HDMI_FC_DBGTMDS0                        0x4845
#define HDMI_FC_DBGTMDS1                        0xC844
#define HDMI_FC_DBGTMDS2                        0xC845

/* HDMI Source PHY Registers */
#define HDMI_PHY_CONF0                          0x0240
#define HDMI_PHY_TST0                           0x0241
#define HDMI_PHY_TST1                           0x8240
#define HDMI_PHY_TST2                           0x8241
#define HDMI_PHY_STAT0                          0x0242
#define HDMI_PHY_INT0                           0x0243
#define HDMI_PHY_MASK0                          0x8242
#define HDMI_PHY_POL0                           0x8243

/* HDMI Master PHY Registers */
#define HDMI_PHY_I2CM_SLAVE_ADDR                0x2240
#define HDMI_PHY_I2CM_ADDRESS_ADDR              0x2241
#define HDMI_PHY_I2CM_DATAO_1_ADDR              0xA240
#define HDMI_PHY_I2CM_DATAO_0_ADDR              0xA241
#define HDMI_PHY_I2CM_DATAI_1_ADDR              0x2242
#define HDMI_PHY_I2CM_DATAI_0_ADDR              0x2243
#define HDMI_PHY_I2CM_OPERATION_ADDR            0xA242
#define HDMI_PHY_I2CM_INT_ADDR                  0xA243
#define HDMI_PHY_I2CM_CTLINT_ADDR               0x6240
#define HDMI_PHY_I2CM_DIV_ADDR                  0x6241
#define HDMI_PHY_I2CM_SOFTRSTZ_ADDR             0xE240
#define HDMI_PHY_I2CM_SS_SCL_HCNT_1_ADDR        0xE241
#define HDMI_PHY_I2CM_SS_SCL_HCNT_0_ADDR        0x6242
#define HDMI_PHY_I2CM_SS_SCL_LCNT_1_ADDR        0x6243
#define HDMI_PHY_I2CM_SS_SCL_LCNT_0_ADDR        0xE242
#define HDMI_PHY_I2CM_FS_SCL_HCNT_1_ADDR        0xE243
#define HDMI_PHY_I2CM_FS_SCL_HCNT_0_ADDR        0x2244
#define HDMI_PHY_I2CM_FS_SCL_LCNT_1_ADDR        0x2245
#define HDMI_PHY_I2CM_FS_SCL_LCNT_0_ADDR        0xA244

/* Audio Sampler Registers */
#define HDMI_AUD_CONF0                          0x0250
#define HDMI_AUD_CONF1                          0x0251
#define HDMI_AUD_INT                            0x8250
#define HDMI_AUD_CONF2                          0x8251
#define HDMI_AUD_N1                             0x0A40
#define HDMI_AUD_N2                             0x0A41
#define HDMI_AUD_N3                             0x8A40
#define HDMI_AUD_CTS1                           0x8A41
#define HDMI_AUD_CTS2                           0x0A42
#define HDMI_AUD_CTS3                           0x0A43
#define HDMI_AUD_INPUTCLKFS                     0x8A42
#define HDMI_AUD_SPDIFINT                       0x8A50
#define HDMI_AUD_CONF0_HBR                      0x0260
#define HDMI_AUD_HBR_STATUS                     0x0261
#define HDMI_AUD_HBR_INT                        0x8260
#define HDMI_AUD_HBR_POL                        0x8261
#define HDMI_AUD_HBR_MASK                       0x0262

/* Generic Parallel Audio Interface Registers */
/* Not used as GPAUD interface is not enabled in hw */
#define HDMI_GP_CONF0                           0x0270
#define HDMI_GP_CONF1                           0x0271
#define HDMI_GP_CONF2                           0x8270
#define HDMI_GP_STAT                            0x8271
#define HDMI_GP_INT                             0x0272
#define HDMI_GP_MASK                            0x0273
#define HDMI_GP_POL                             0x8272

/* Audio DMA Registers */
#define HDMI_AHB_DMA_CONF0                      0x0A60
#define HDMI_AHB_DMA_START                      0x0A61
#define HDMI_AHB_DMA_STOP                       0x8A60
#define HDMI_AHB_DMA_THRSLD                     0x8A61
#define HDMI_AHB_DMA_STRADDR0                   0x0A62
#define HDMI_AHB_DMA_STRADDR1                   0x0A63
#define HDMI_AHB_DMA_STRADDR2                   0x8A62
#define HDMI_AHB_DMA_STRADDR3                   0x8A63
#define HDMI_AHB_DMA_STPADDR0                   0x4A60
#define HDMI_AHB_DMA_STPADDR1                   0x4A61
#define HDMI_AHB_DMA_STPADDR2                   0xCA60
#define HDMI_AHB_DMA_STPADDR3                   0xCA61
#define HDMI_AHB_DMA_BSTADDR0                   0x4A62
#define HDMI_AHB_DMA_BSTADDR1                   0x4A63
#define HDMI_AHB_DMA_BSTADDR2                   0xCA62
#define HDMI_AHB_DMA_BSTADDR3                   0xCA63
#define HDMI_AHB_DMA_MBLENGTH0                  0x0A64
#define HDMI_AHB_DMA_MBLENGTH1                  0x0A65
#define HDMI_AHB_DMA_STAT                       0x8A64
#define HDMI_AHB_DMA_INT                        0x8A65
#define HDMI_AHB_DMA_MASK                       0x0A66
#define HDMI_AHB_DMA_POL                        0x0A67
#define HDMI_AHB_DMA_CONF1                      0x8A66
#define HDMI_AHB_DMA_BUFFSTAT                   0x8A67
#define HDMI_AHB_DMA_BUFFINT                    0x4A64
#define HDMI_AHB_DMA_BUFFMASK                   0x4A65
#define HDMI_AHB_DMA_BUFFPOL                    0xCA64

/* Main Controller Registers */
#define HDMI_MC_SFRDIV                          0x0080
#define HDMI_MC_CLKDIS                          0x0081
#define HDMI_MC_SWRSTZ                          0x8080
#define HDMI_MC_OPCTRL                          0x8081
#define HDMI_MC_FLOWCTRL                        0x0082
#define HDMI_MC_PHYRSTZ                         0x0083
#define HDMI_MC_LOCKONCLOCK                     0x8082
#define HDMI_MC_HEACPHY_RST                     0x8083

/* Color Space  Converter Registers */
#define HDMI_CSC_CFG                            0x0090
#define HDMI_CSC_SCALE                          0x0091
#define HDMI_CSC_COEF_A1_MSB                    0x8090
#define HDMI_CSC_COEF_A1_LSB                    0x8091
#define HDMI_CSC_COEF_A2_MSB                    0x0092
#define HDMI_CSC_COEF_A2_LSB                    0x0093
#define HDMI_CSC_COEF_A3_MSB                    0x8092
#define HDMI_CSC_COEF_A3_LSB                    0x8093
#define HDMI_CSC_COEF_A4_MSB                    0x4090
#define HDMI_CSC_COEF_A4_LSB                    0x4091
#define HDMI_CSC_COEF_B1_MSB                    0xC090
#define HDMI_CSC_COEF_B1_LSB                    0xC091
#define HDMI_CSC_COEF_B2_MSB                    0x4092
#define HDMI_CSC_COEF_B2_LSB                    0x4093
#define HDMI_CSC_COEF_B3_MSB                    0xC092
#define HDMI_CSC_COEF_B3_LSB                    0xC093
#define HDMI_CSC_COEF_B4_MSB                    0x0094
#define HDMI_CSC_COEF_B4_LSB                    0x0095
#define HDMI_CSC_COEF_C1_MSB                    0x8094
#define HDMI_CSC_COEF_C1_LSB                    0x8095
#define HDMI_CSC_COEF_C2_MSB                    0x0096
#define HDMI_CSC_COEF_C2_LSB                    0x0097
#define HDMI_CSC_COEF_C3_MSB                    0x8096
#define HDMI_CSC_COEF_C3_LSB                    0x8097
#define HDMI_CSC_COEF_C4_MSB                    0x4094
#define HDMI_CSC_COEF_C4_LSB                    0x4095

/* HDCP Encryption Engine Registers */
#define HDMI_A_HDCPCFG0                         0x00C0
#define HDMI_A_HDCPCFG1                         0x00C1
#define HDMI_A_HDCPOBS0                         0x80C0
#define HDMI_A_HDCPOBS1                         0x80C1
#define HDMI_A_HDCPOBS2                         0x00C2
#define HDMI_A_HDCPOBS3                         0x00C3
#define HDMI_A_APIINTCLR                        0x80C2
#define HDMI_A_APIINTSTAT                       0x80C3
#define HDMI_A_APIINTMSK                        0x40C0
#define HDMI_A_VIDPOLCFG                        0x40C1
#define HDMI_A_OESSWCFG                         0xC0C0
#define HDMI_A_TIMER1SETUP0                     0xC0C1
#define HDMI_A_TIMER1SETUP1                     0x40C2
#define HDMI_A_TIMER2SETUP0                     0x40C3
#define HDMI_A_TIMER2SETUP1                     0xC0C2
#define HDMI_A_100MSCFG                         0xC0C3
#define HDMI_A_2SCFG0                           0x00C4
#define HDMI_A_2SCFG1                           0x00C5
#define HDMI_A_5SCFG0                           0x80C4
#define HDMI_A_5SCFG1                           0x80C5
#define HDMI_A_SRMVERLSB                        0x00C6
#define HDMI_A_SRMVERMSB                        0x00C7
#define HDMI_A_SRMCTRL                          0x80C6
#define HDMI_A_SFRSETUP                         0x80C7
#define HDMI_A_I2CHSETUP                        0x40C4
#define HDMI_A_INTSETUP                         0x40C5
#define HDMI_A_PRESETUP                         0xC0C4
#define HDMI_A_SRM_BASE                         0x20C0

/* CEC Engine Registers */
#define HDMI_CEC_CTRL                           0x06F0
#define HDMI_CEC_STAT                           0x06F1
#define HDMI_CEC_MASK                           0x86F0
#define HDMI_CEC_POLARITY                       0x86F1
#define HDMI_CEC_INT                            0x06F2
#define HDMI_CEC_ADDR_L                         0x06F3
#define HDMI_CEC_ADDR_H                         0x86F2
#define HDMI_CEC_TX_CNT                         0x86F3
#define HDMI_CEC_RX_CNT                         0x46F0
#define HDMI_CEC_TX_DATA0                       0x06F4
#define HDMI_CEC_TX_DATA1                       0x06F5
#define HDMI_CEC_TX_DATA2                       0x86F4
#define HDMI_CEC_TX_DATA3                       0x86F5
#define HDMI_CEC_TX_DATA4                       0x06F6
#define HDMI_CEC_TX_DATA5                       0x06F7
#define HDMI_CEC_TX_DATA6                       0x86F6
#define HDMI_CEC_TX_DATA7                       0x86F7
#define HDMI_CEC_TX_DATA8                       0x46F4
#define HDMI_CEC_TX_DATA9                       0x46F5
#define HDMI_CEC_TX_DATA10                      0xC6F4
#define HDMI_CEC_TX_DATA11                      0xC6F5
#define HDMI_CEC_TX_DATA12                      0x46F6
#define HDMI_CEC_TX_DATA13                      0x46F7
#define HDMI_CEC_TX_DATA14                      0xC6F6
#define HDMI_CEC_TX_DATA15                      0xC6F7
#define HDMI_CEC_RX_DATA0                       0x26F0
#define HDMI_CEC_RX_DATA1                       0x26F1
#define HDMI_CEC_RX_DATA2                       0xA6F0
#define HDMI_CEC_RX_DATA3                       0xA6F1
#define HDMI_CEC_RX_DATA4                       0x26F2
#define HDMI_CEC_RX_DATA5                       0x26F3
#define HDMI_CEC_RX_DATA6                       0xA6F2
#define HDMI_CEC_RX_DATA7                       0xA6F3
#define HDMI_CEC_RX_DATA8                       0x66F0
#define HDMI_CEC_RX_DATA9                       0x66F1
#define HDMI_CEC_RX_DATA10                      0xE6F0
#define HDMI_CEC_RX_DATA11                      0xE6F1
#define HDMI_CEC_RX_DATA12                      0x66F2
#define HDMI_CEC_RX_DATA13                      0x66F3
#define HDMI_CEC_RX_DATA14                      0xE6F2
#define HDMI_CEC_RX_DATA15                      0xE6F3
#define HDMI_CEC_LOCK                           0x26F4
#define HDMI_CEC_WKUPCTRL                       0x26F5

/* I2C Master Registers (E-DDC) */
#define HDMI_I2CM_SLAVE                         0x0EE0
#define HDMI_I2CM_ADDRESS                       0x0EE1
#define HDMI_I2CM_DATAO                         0x8EE0
#define HDMI_I2CM_DATAI                         0x8EE1
#define HDMI_I2CM_OPERATION                     0x0EE2
#define HDMI_I2CM_INT                           0x0EE3
#define HDMI_I2CM_CTLINT                        0x8EE2
#define HDMI_I2CM_DIV                           0x8EE3
#define HDMI_I2CM_SEGADDR                       0x4EE0
#define HDMI_I2CM_SOFTRSTZ                      0x4EE1
#define HDMI_I2CM_SEGPTR                        0xCEE0
#define HDMI_I2CM_SS_SCL_HCNT_1_ADDR            0xCEE1
#define HDMI_I2CM_SS_SCL_HCNT_0_ADDR            0x4EE2
#define HDMI_I2CM_SS_SCL_LCNT_1_ADDR            0x4EE3
#define HDMI_I2CM_SS_SCL_LCNT_0_ADDR            0xCEE2
#define HDMI_I2CM_FS_SCL_HCNT_1_ADDR            0xCEE3
#define HDMI_I2CM_FS_SCL_HCNT_0_ADDR            0x0EE4
#define HDMI_I2CM_FS_SCL_LCNT_1_ADDR            0x0EE5
#define HDMI_I2CM_FS_SCL_LCNT_0_ADDR            0x8EE4

/* Random Number Generator Registers (RNG) */
#define HDMI_RNG_BASE                           0x0100


/*
 * Register field definitions
 */
enum {
/* IH_FC_INT2 field values */
    HDMI_IH_FC_INT2_OVERFLOW_MASK = 0x03,
    HDMI_IH_FC_INT2_LOW_PRIORITY_OVERFLOW = 0x02,
    HDMI_IH_FC_INT2_HIGH_PRIORITY_OVERFLOW = 0x01,

/* IH_FC_STAT2 field values */
    HDMI_IH_FC_STAT2_OVERFLOW_MASK = 0x03,
    HDMI_IH_FC_STAT2_LOW_PRIORITY_OVERFLOW = 0x02,
    HDMI_IH_FC_STAT2_HIGH_PRIORITY_OVERFLOW = 0x01,

/* IH_PHY_STAT0 field values */
    HDMI_IH_PHY_STAT0_RX_SENSE3 = 0x20,
    HDMI_IH_PHY_STAT0_RX_SENSE2 = 0x10,
    HDMI_IH_PHY_STAT0_RX_SENSE1 = 0x8,
    HDMI_IH_PHY_STAT0_RX_SENSE0 = 0x4,
    HDMI_IH_PHY_STAT0_TX_PHY_LOCK = 0x2,
    HDMI_IH_PHY_STAT0_HPD = 0x1,

/* IH_CEC_STAT0 field values */
    HDMI_IH_CEC_STAT0_WAKEUP = 0x40,
    HDMI_IH_CEC_STAT0_ERROR_FOLL = 0x20,
    HDMI_IH_CEC_STAT0_ERROR_INIT = 0x10,
    HDMI_IH_CEC_STAT0_ARB_LOST = 0x8,
    HDMI_IH_CEC_STAT0_NACK = 0x4,
    HDMI_IH_CEC_STAT0_EOM = 0x2,
    HDMI_IH_CEC_STAT0_DONE = 0x1,


/* IH_MUTE_I2CMPHY_STAT0 field values */
    HDMI_IH_MUTE_I2CMPHY_STAT0_I2CMPHYDONE = 0x2,
    HDMI_IH_MUTE_I2CMPHY_STAT0_I2CMPHYERROR = 0x1,

/* IH_PHY_STAT0 field values */
    HDMI_IH_MUTE_PHY_STAT0_RX_SENSE3 = 0x20,
    HDMI_IH_MUTE_PHY_STAT0_RX_SENSE2 = 0x10,
    HDMI_IH_MUTE_PHY_STAT0_RX_SENSE1 = 0x8,
    HDMI_IH_MUTE_PHY_STAT0_RX_SENSE0 = 0x4,
    HDMI_IH_MUTE_PHY_STAT0_TX_PHY_LOCK = 0x2,
    HDMI_IH_MUTE_PHY_STAT0_HPD = 0x1,

/* IH_AHBDMAAUD_STAT0 field values */
    HDMI_IH_AHBDMAAUD_STAT0_ERROR = 0x20,
    HDMI_IH_AHBDMAAUD_STAT0_LOST = 0x10,
    HDMI_IH_AHBDMAAUD_STAT0_RETRY = 0x08,
    HDMI_IH_AHBDMAAUD_STAT0_DONE = 0x04,
    HDMI_IH_AHBDMAAUD_STAT0_BUFFFULL = 0x02,
    HDMI_IH_AHBDMAAUD_STAT0_BUFFEMPTY = 0x01,

/* IH_MUTE_FC_STAT2 field values */
    HDMI_IH_MUTE_FC_STAT2_OVERFLOW_MASK = 0x03,
    HDMI_IH_MUTE_FC_STAT2_LOW_PRIORITY_OVERFLOW = 0x02,
    HDMI_IH_MUTE_FC_STAT2_HIGH_PRIORITY_OVERFLOW = 0x01,

/* IH_MUTE_AHBDMAAUD_STAT0 field values */
    HDMI_IH_MUTE_AHBDMAAUD_STAT0_ERROR = 0x20,
    HDMI_IH_MUTE_AHBDMAAUD_STAT0_LOST = 0x10,
    HDMI_IH_MUTE_AHBDMAAUD_STAT0_RETRY = 0x08,
    HDMI_IH_MUTE_AHBDMAAUD_STAT0_DONE = 0x04,
    HDMI_IH_MUTE_AHBDMAAUD_STAT0_BUFFFULL = 0x02,
    HDMI_IH_MUTE_AHBDMAAUD_STAT0_BUFFEMPTY = 0x01,

/* IH_MUTE field values */
    HDMI_IH_MUTE_MUTE_WAKEUP_INTERRUPT = 0x2,
    HDMI_IH_MUTE_MUTE_ALL_INTERRUPT = 0x1,

/* TX_INVID0 field values */
    HDMI_TX_INVID0_INTERNAL_DE_GENERATOR_MASK = 0x80,
    HDMI_TX_INVID0_INTERNAL_DE_GENERATOR_ENABLE = 0x80,
    HDMI_TX_INVID0_INTERNAL_DE_GENERATOR_DISABLE = 0x00,
    HDMI_TX_INVID0_VIDEO_MAPPING_MASK = 0x1F,
    HDMI_TX_INVID0_VIDEO_MAPPING_OFFSET = 0,

/* TX_INSTUFFING field values */
    HDMI_TX_INSTUFFING_BDBDATA_STUFFING_MASK = 0x4,
    HDMI_TX_INSTUFFING_BDBDATA_STUFFING_ENABLE = 0x4,
    HDMI_TX_INSTUFFING_BDBDATA_STUFFING_DISABLE = 0x0,
    HDMI_TX_INSTUFFING_RCRDATA_STUFFING_MASK = 0x2,
    HDMI_TX_INSTUFFING_RCRDATA_STUFFING_ENABLE = 0x2,
    HDMI_TX_INSTUFFING_RCRDATA_STUFFING_DISABLE = 0x0,
    HDMI_TX_INSTUFFING_GYDATA_STUFFING_MASK = 0x1,
    HDMI_TX_INSTUFFING_GYDATA_STUFFING_ENABLE = 0x1,
    HDMI_TX_INSTUFFING_GYDATA_STUFFING_DISABLE = 0x0,

/* VP_PR_CD field values */
    HDMI_VP_PR_CD_COLOR_DEPTH_MASK = 0xF0,
    HDMI_VP_PR_CD_COLOR_DEPTH_OFFSET = 4,
    HDMI_VP_PR_CD_DESIRED_PR_FACTOR_MASK = 0x0F,
    HDMI_VP_PR_CD_DESIRED_PR_FACTOR_OFFSET = 0,

/* VP_STUFF field values */
    HDMI_VP_STUFF_IDEFAULT_PHASE_MASK = 0x20,
    HDMI_VP_STUFF_IDEFAULT_PHASE_OFFSET = 5,
    HDMI_VP_STUFF_IFIX_PP_TO_LAST_MASK = 0x10,
    HDMI_VP_STUFF_IFIX_PP_TO_LAST_OFFSET = 4,
    HDMI_VP_STUFF_ICX_GOTO_P0_ST_MASK = 0x8,
    HDMI_VP_STUFF_ICX_GOTO_P0_ST_OFFSET = 3,
    HDMI_VP_STUFF_YCC422_STUFFING_MASK = 0x4,
    HDMI_VP_STUFF_YCC422_STUFFING_STUFFING_MODE = 0x4,
    HDMI_VP_STUFF_YCC422_STUFFING_DIRECT_MODE = 0x0,
    HDMI_VP_STUFF_PP_STUFFING_MASK = 0x2,
    HDMI_VP_STUFF_PP_STUFFING_STUFFING_MODE = 0x2,
    HDMI_VP_STUFF_PP_STUFFING_DIRECT_MODE = 0x0,
    HDMI_VP_STUFF_PR_STUFFING_MASK = 0x1,
    HDMI_VP_STUFF_PR_STUFFING_STUFFING_MODE = 0x1,
    HDMI_VP_STUFF_PR_STUFFING_DIRECT_MODE = 0x0,

/* VP_CONF field values */
    HDMI_VP_CONF_BYPASS_EN_MASK = 0x40,
    HDMI_VP_CONF_BYPASS_EN_ENABLE = 0x40,
    HDMI_VP_CONF_BYPASS_EN_DISABLE = 0x00,
    HDMI_VP_CONF_PP_EN_ENMASK = 0x20,
    HDMI_VP_CONF_PP_EN_ENABLE = 0x20,
    HDMI_VP_CONF_PP_EN_DISABLE = 0x00,
    HDMI_VP_CONF_PR_EN_MASK = 0x10,
    HDMI_VP_CONF_PR_EN_ENABLE = 0x10,
    HDMI_VP_CONF_PR_EN_DISABLE = 0x00,
    HDMI_VP_CONF_YCC422_EN_MASK = 0x8,
    HDMI_VP_CONF_YCC422_EN_ENABLE = 0x8,
    HDMI_VP_CONF_YCC422_EN_DISABLE = 0x0,
    HDMI_VP_CONF_BYPASS_SELECT_MASK = 0x4,
    HDMI_VP_CONF_BYPASS_SELECT_VID_PACKETIZER = 0x4,
    HDMI_VP_CONF_BYPASS_SELECT_PIX_REPEATER = 0x0,
    HDMI_VP_CONF_OUTPUT_SELECTOR_MASK = 0x3,
    HDMI_VP_CONF_OUTPUT_SELECTOR_BYPASS = 0x3,
    HDMI_VP_CONF_OUTPUT_SELECTOR_YCC422 = 0x1,
    HDMI_VP_CONF_OUTPUT_SELECTOR_PP = 0x0,

/* VP_REMAP field values */
    HDMI_VP_REMAP_MASK = 0x3,
    HDMI_VP_REMAP_YCC422_24bit = 0x2,
    HDMI_VP_REMAP_YCC422_20bit = 0x1,
    HDMI_VP_REMAP_YCC422_16bit = 0x0,

/* FC_INVIDCONF field values */
    HDMI_FC_INVIDCONF_HDCP_KEEPOUT_MASK = 0x80,
    HDMI_FC_INVIDCONF_HDCP_KEEPOUT_ACTIVE = 0x80,
    HDMI_FC_INVIDCONF_HDCP_KEEPOUT_INACTIVE = 0x00,
    HDMI_FC_INVIDCONF_VSYNC_IN_POLARITY_MASK = 0x40,
    HDMI_FC_INVIDCONF_VSYNC_IN_POLARITY_ACTIVE_HIGH = 0x40,
    HDMI_FC_INVIDCONF_VSYNC_IN_POLARITY_ACTIVE_LOW = 0x00,
    HDMI_FC_INVIDCONF_HSYNC_IN_POLARITY_MASK = 0x20,
    HDMI_FC_INVIDCONF_HSYNC_IN_POLARITY_ACTIVE_HIGH = 0x20,
    HDMI_FC_INVIDCONF_HSYNC_IN_POLARITY_ACTIVE_LOW = 0x00,
    HDMI_FC_INVIDCONF_DE_IN_POLARITY_MASK = 0x10,
    HDMI_FC_INVIDCONF_DE_IN_POLARITY_ACTIVE_HIGH = 0x10,
    HDMI_FC_INVIDCONF_DE_IN_POLARITY_ACTIVE_LOW = 0x00,
    HDMI_FC_INVIDCONF_DVI_MODEZ_MASK = 0x8,
    HDMI_FC_INVIDCONF_DVI_MODEZ_HDMI_MODE = 0x8,
    HDMI_FC_INVIDCONF_DVI_MODEZ_DVI_MODE = 0x0,
    HDMI_FC_INVIDCONF_R_V_BLANK_IN_OSC_MASK = 0x2,
    HDMI_FC_INVIDCONF_R_V_BLANK_IN_OSC_ACTIVE_HIGH = 0x2,
    HDMI_FC_INVIDCONF_R_V_BLANK_IN_OSC_ACTIVE_LOW = 0x0,
    HDMI_FC_INVIDCONF_IN_I_P_MASK = 0x1,
    HDMI_FC_INVIDCONF_IN_I_P_INTERLACED = 0x1,
    HDMI_FC_INVIDCONF_IN_I_P_PROGRESSIVE = 0x0,

/* FC_AUDICONF0 field values */
    HDMI_FC_AUDICONF0_CC_OFFSET = 4,
    HDMI_FC_AUDICONF0_CC_MASK = 0x70,
    HDMI_FC_AUDICONF0_CT_OFFSET = 0,
    HDMI_FC_AUDICONF0_CT_MASK = 0xF,

/* FC_AUDICONF1 field values */
    HDMI_FC_AUDICONF1_SS_OFFSET = 3,
    HDMI_FC_AUDICONF1_SS_MASK = 0x18,
    HDMI_FC_AUDICONF1_SF_OFFSET = 0,
    HDMI_FC_AUDICONF1_SF_MASK = 0x7,

/* FC_AUDICONF3 field values */
    HDMI_FC_AUDICONF3_LFEPBL_OFFSET = 5,
    HDMI_FC_AUDICONF3_LFEPBL_MASK = 0x60,
    HDMI_FC_AUDICONF3_DM_INH_OFFSET = 4,
    HDMI_FC_AUDICONF3_DM_INH_MASK = 0x10,
    HDMI_FC_AUDICONF3_LSV_OFFSET = 0,
    HDMI_FC_AUDICONF3_LSV_MASK = 0xF,

/* FC_AUDSCHNLS0 field values */
    HDMI_FC_AUDSCHNLS0_CGMSA_OFFSET = 4,
    HDMI_FC_AUDSCHNLS0_CGMSA_MASK = 0x30,
    HDMI_FC_AUDSCHNLS0_COPYRIGHT_OFFSET = 0,
    HDMI_FC_AUDSCHNLS0_COPYRIGHT_MASK = 0x01,

/* FC_AUDSCHNLS3-6 field values */
    HDMI_FC_AUDSCHNLS3_OIEC_CH0_OFFSET = 0,
    HDMI_FC_AUDSCHNLS3_OIEC_CH0_MASK = 0x0f,
    HDMI_FC_AUDSCHNLS3_OIEC_CH1_OFFSET = 4,
    HDMI_FC_AUDSCHNLS3_OIEC_CH1_MASK = 0xf0,
    HDMI_FC_AUDSCHNLS4_OIEC_CH2_OFFSET = 0,
    HDMI_FC_AUDSCHNLS4_OIEC_CH2_MASK = 0x0f,
    HDMI_FC_AUDSCHNLS4_OIEC_CH3_OFFSET = 4,
    HDMI_FC_AUDSCHNLS4_OIEC_CH3_MASK = 0xf0,

    HDMI_FC_AUDSCHNLS5_OIEC_CH0_OFFSET = 0,
    HDMI_FC_AUDSCHNLS5_OIEC_CH0_MASK = 0x0f,
    HDMI_FC_AUDSCHNLS5_OIEC_CH1_OFFSET = 4,
    HDMI_FC_AUDSCHNLS5_OIEC_CH1_MASK = 0xf0,
    HDMI_FC_AUDSCHNLS6_OIEC_CH2_OFFSET = 0,
    HDMI_FC_AUDSCHNLS6_OIEC_CH2_MASK = 0x0f,
    HDMI_FC_AUDSCHNLS6_OIEC_CH3_OFFSET = 4,
    HDMI_FC_AUDSCHNLS6_OIEC_CH3_MASK = 0xf0,

/* HDMI_FC_AUDSCHNLS7 field values */
    HDMI_FC_AUDSCHNLS7_ACCURACY_OFFSET = 4,
    HDMI_FC_AUDSCHNLS7_ACCURACY_MASK = 0x30,

/* HDMI_FC_AUDSCHNLS8 field values */
    HDMI_FC_AUDSCHNLS8_ORIGSAMPFREQ_MASK = 0xf0,
    HDMI_FC_AUDSCHNLS8_ORIGSAMPFREQ_OFFSET = 4,
    HDMI_FC_AUDSCHNLS8_WORDLEGNTH_MASK = 0x0f,
    HDMI_FC_AUDSCHNLS8_WORDLEGNTH_OFFSET = 0,

/* FC_AUDSCONF field values */
    HDMI_FC_AUDSCONF_AUD_PACKET_SAMPFIT_MASK = 0xF0,
    HDMI_FC_AUDSCONF_AUD_PACKET_SAMPFIT_OFFSET = 4,
    HDMI_FC_AUDSCONF_AUD_PACKET_LAYOUT_MASK = 0x1,
    HDMI_FC_AUDSCONF_AUD_PACKET_LAYOUT_OFFSET = 0,
    HDMI_FC_AUDSCONF_AUD_PACKET_LAYOUT_LAYOUT1 = 0x1,
    HDMI_FC_AUDSCONF_AUD_PACKET_LAYOUT_LAYOUT0 = 0x0,

/* FC_STAT2 field values */
    HDMI_FC_STAT2_OVERFLOW_MASK = 0x03,
    HDMI_FC_STAT2_LOW_PRIORITY_OVERFLOW = 0x02,
    HDMI_FC_STAT2_HIGH_PRIORITY_OVERFLOW = 0x01,

/* FC_INT2 field values */
    HDMI_FC_INT2_OVERFLOW_MASK = 0x03,
    HDMI_FC_INT2_LOW_PRIORITY_OVERFLOW = 0x02,
    HDMI_FC_INT2_HIGH_PRIORITY_OVERFLOW = 0x01,

/* FC_MASK2 field values */
    HDMI_FC_MASK2_OVERFLOW_MASK = 0x03,
    HDMI_FC_MASK2_LOW_PRIORITY_OVERFLOW = 0x02,
    HDMI_FC_MASK2_HIGH_PRIORITY_OVERFLOW = 0x01,

/* FC_PRCONF field values */
    HDMI_FC_PRCONF_INCOMING_PR_FACTOR_MASK = 0xF0,
    HDMI_FC_PRCONF_INCOMING_PR_FACTOR_OFFSET = 4,
    HDMI_FC_PRCONF_OUTPUT_PR_FACTOR_MASK = 0x0F,
    HDMI_FC_PRCONF_OUTPUT_PR_FACTOR_OFFSET = 0,

/* FC_AVICONF0-FC_AVICONF3 field values */
    HDMI_FC_AVICONF0_PIX_FMT_MASK = 0x03,
    HDMI_FC_AVICONF0_PIX_FMT_RGB = 0x00,
    HDMI_FC_AVICONF0_PIX_FMT_YCBCR422 = 0x01,
    HDMI_FC_AVICONF0_PIX_FMT_YCBCR444 = 0x02,
    HDMI_FC_AVICONF0_ACTIVE_FMT_MASK = 0x40,
    HDMI_FC_AVICONF0_ACTIVE_FMT_INFO_PRESENT = 0x40,
    HDMI_FC_AVICONF0_ACTIVE_FMT_NO_INFO = 0x00,
    HDMI_FC_AVICONF0_BAR_DATA_MASK = 0x0C,
    HDMI_FC_AVICONF0_BAR_DATA_NO_DATA = 0x00,
    HDMI_FC_AVICONF0_BAR_DATA_VERT_BAR = 0x04,
    HDMI_FC_AVICONF0_BAR_DATA_HORIZ_BAR = 0x08,
    HDMI_FC_AVICONF0_BAR_DATA_VERT_HORIZ_BAR = 0x0C,
    HDMI_FC_AVICONF0_SCAN_INFO_MASK = 0x30,
    HDMI_FC_AVICONF0_SCAN_INFO_OVERSCAN = 0x10,
    HDMI_FC_AVICONF0_SCAN_INFO_UNDERSCAN = 0x20,
    HDMI_FC_AVICONF0_SCAN_INFO_NODATA = 0x00,

    HDMI_FC_AVICONF1_ACTIVE_ASPECT_RATIO_MASK = 0x0F,
    HDMI_FC_AVICONF1_ACTIVE_ASPECT_RATIO_USE_CODED = 0x08,
    HDMI_FC_AVICONF1_ACTIVE_ASPECT_RATIO_4_3 = 0x09,
    HDMI_FC_AVICONF1_ACTIVE_ASPECT_RATIO_16_9 = 0x0A,
    HDMI_FC_AVICONF1_ACTIVE_ASPECT_RATIO_14_9 = 0x0B,
    HDMI_FC_AVICONF1_CODED_ASPECT_RATIO_MASK = 0x30,
    HDMI_FC_AVICONF1_CODED_ASPECT_RATIO_NO_DATA = 0x00,
    HDMI_FC_AVICONF1_CODED_ASPECT_RATIO_4_3 = 0x10,
    HDMI_FC_AVICONF1_CODED_ASPECT_RATIO_16_9 = 0x20,
    HDMI_FC_AVICONF1_COLORIMETRY_MASK = 0xC0,
    HDMI_FC_AVICONF1_COLORIMETRY_NO_DATA = 0x00,
    HDMI_FC_AVICONF1_COLORIMETRY_SMPTE = 0x40,
    HDMI_FC_AVICONF1_COLORIMETRY_ITUR = 0x80,
    HDMI_FC_AVICONF1_COLORIMETRY_EXTENDED_INFO = 0xC0,

    HDMI_FC_AVICONF2_SCALING_MASK = 0x03,
    HDMI_FC_AVICONF2_SCALING_NONE = 0x00,
    HDMI_FC_AVICONF2_SCALING_HORIZ = 0x01,
    HDMI_FC_AVICONF2_SCALING_VERT = 0x02,
    HDMI_FC_AVICONF2_SCALING_HORIZ_VERT = 0x03,
    HDMI_FC_AVICONF2_RGB_QUANT_MASK = 0x0C,
    HDMI_FC_AVICONF2_RGB_QUANT_DEFAULT = 0x00,
    HDMI_FC_AVICONF2_RGB_QUANT_LIMITED_RANGE = 0x04,
    HDMI_FC_AVICONF2_RGB_QUANT_FULL_RANGE = 0x08,
    HDMI_FC_AVICONF2_EXT_COLORIMETRY_MASK = 0x70,
    HDMI_FC_AVICONF2_EXT_COLORIMETRY_XVYCC601 = 0x00,
    HDMI_FC_AVICONF2_EXT_COLORIMETRY_XVYCC709 = 0x10,
    HDMI_FC_AVICONF2_EXT_COLORIMETRY_SYCC601 = 0x20,
    HDMI_FC_AVICONF2_EXT_COLORIMETRY_ADOBE_YCC601 = 0x30,
    HDMI_FC_AVICONF2_EXT_COLORIMETRY_ADOBE_RGB = 0x40,
    HDMI_FC_AVICONF2_IT_CONTENT_MASK = 0x80,
    HDMI_FC_AVICONF2_IT_CONTENT_NO_DATA = 0x00,
    HDMI_FC_AVICONF2_IT_CONTENT_VALID = 0x80,

    HDMI_FC_AVICONF3_IT_CONTENT_TYPE_MASK = 0x03,
    HDMI_FC_AVICONF3_IT_CONTENT_TYPE_GRAPHICS = 0x00,
    HDMI_FC_AVICONF3_IT_CONTENT_TYPE_PHOTO = 0x01,
    HDMI_FC_AVICONF3_IT_CONTENT_TYPE_CINEMA = 0x02,
    HDMI_FC_AVICONF3_IT_CONTENT_TYPE_GAME = 0x03,
    HDMI_FC_AVICONF3_QUANT_RANGE_MASK = 0x0C,
    HDMI_FC_AVICONF3_QUANT_RANGE_LIMITED = 0x00,
    HDMI_FC_AVICONF3_QUANT_RANGE_FULL = 0x04,

/* FC_DBGFORCE field values */
    HDMI_FC_DBGFORCE_FORCEAUDIO = 0x10,
    HDMI_FC_DBGFORCE_FORCEVIDEO = 0x1,

/* PHY_CONF0 field values */
    HDMI_PHY_CONF0_PDZ_MASK = 0x80,
    HDMI_PHY_CONF0_PDZ_OFFSET = 7,
    HDMI_PHY_CONF0_ENTMDS_MASK = 0x40,
    HDMI_PHY_CONF0_ENTMDS_OFFSET = 6,
    HDMI_PHY_CONF0_SPARECTRL = 0x20,
    HDMI_PHY_CONF0_GEN2_PDDQ_MASK = 0x10,
    HDMI_PHY_CONF0_GEN2_PDDQ_OFFSET = 4,
    HDMI_PHY_CONF0_GEN2_TXPWRON_MASK = 0x8,
    HDMI_PHY_CONF0_GEN2_TXPWRON_OFFSET = 3,
    HDMI_PHY_CONF0_GEN2_ENHPDRXSENSE_MASK = 0x4,
    HDMI_PHY_CONF0_GEN2_ENHPDRXSENSE_OFFSET = 2,
    HDMI_PHY_CONF0_SELDATAENPOL_MASK = 0x2,
    HDMI_PHY_CONF0_SELDATAENPOL_OFFSET = 1,
    HDMI_PHY_CONF0_SELDIPIF_MASK = 0x1,
    HDMI_PHY_CONF0_SELDIPIF_OFFSET = 0,

/* PHY_TST0 field values */
    HDMI_PHY_TST0_TSTCLR_MASK = 0x20,
    HDMI_PHY_TST0_TSTCLR_OFFSET = 5,
    HDMI_PHY_TST0_TSTEN_MASK = 0x10,
    HDMI_PHY_TST0_TSTEN_OFFSET = 4,
    HDMI_PHY_TST0_TSTCLK_MASK = 0x1,
    HDMI_PHY_TST0_TSTCLK_OFFSET = 0,

/* PHY_STAT0 field values */
    HDMI_PHY_RX_SENSE3 = 0x80,
    HDMI_PHY_RX_SENSE2 = 0x40,
    HDMI_PHY_RX_SENSE1 = 0x20,
    HDMI_PHY_RX_SENSE0 = 0x10,
    HDMI_PHY_HPD = 0x02,
    HDMI_PHY_TX_PHY_LOCK = 0x01,

/* PHY_I2CM_SLAVE_ADDR field values */
    HDMI_PHY_I2CM_SLAVE_ADDR_PHY_GEN2 = 0x69,
    HDMI_PHY_I2CM_SLAVE_ADDR_HEAC_PHY = 0x49,

/* PHY_I2CM_OPERATION_ADDR field values */
    HDMI_PHY_I2CM_OPERATION_ADDR_WRITE = 0x10,
    HDMI_PHY_I2CM_OPERATION_ADDR_READ = 0x1,

/* HDMI_PHY_I2CM_INT_ADDR */
    HDMI_PHY_I2CM_INT_ADDR_DONE_POL = 0x08,
    HDMI_PHY_I2CM_INT_ADDR_DONE_MASK = 0x04,

/* HDMI_PHY_I2CM_CTLINT_ADDR */
    HDMI_PHY_I2CM_CTLINT_ADDR_NAC_POL = 0x80,
    HDMI_PHY_I2CM_CTLINT_ADDR_NAC_MASK = 0x40,
    HDMI_PHY_I2CM_CTLINT_ADDR_ARBITRATION_POL = 0x08,
    HDMI_PHY_I2CM_CTLINT_ADDR_ARBITRATION_MASK = 0x04,

/* AUD_CTS3 field values */
    HDMI_AUD_CTS3_N_SHIFT_OFFSET = 5,
    HDMI_AUD_CTS3_N_SHIFT_MASK = 0xe0,
    HDMI_AUD_CTS3_N_SHIFT_1 = 0,
    HDMI_AUD_CTS3_N_SHIFT_16 = 0x20,
    HDMI_AUD_CTS3_N_SHIFT_32 = 0x40,
    HDMI_AUD_CTS3_N_SHIFT_64 = 0x60,
    HDMI_AUD_CTS3_N_SHIFT_128 = 0x80,
    HDMI_AUD_CTS3_N_SHIFT_256 = 0xa0,
    /* note that the CTS3 MANUAL bit has been removed
       from our part. Can't set it, will read as 0. */
    HDMI_AUD_CTS3_CTS_MANUAL = 0x10,
    HDMI_AUD_CTS3_AUDCTS19_16_MASK = 0x0f,

/* AHB_DMA_CONF0 field values */
    HDMI_AHB_DMA_CONF0_SW_FIFO_RST_OFFSET = 7,
    HDMI_AHB_DMA_CONF0_SW_FIFO_RST_MASK = 0x80,
    HDMI_AHB_DMA_CONF0_HBR = 0x10,
    HDMI_AHB_DMA_CONF0_EN_HLOCK_OFFSET = 3,
    HDMI_AHB_DMA_CONF0_EN_HLOCK_MASK = 0x08,
    HDMI_AHB_DMA_CONF0_INCR_TYPE_OFFSET = 1,
    HDMI_AHB_DMA_CONF0_INCR_TYPE_MASK = 0x06,
    HDMI_AHB_DMA_CONF0_INCR4 = 0x0,
    HDMI_AHB_DMA_CONF0_INCR8 = 0x2,
    HDMI_AHB_DMA_CONF0_INCR16 = 0x4,
    HDMI_AHB_DMA_CONF0_BURST_MODE = 0x1,

/* HDMI_AHB_DMA_START field values */
    HDMI_AHB_DMA_START_START_OFFSET = 0,
    HDMI_AHB_DMA_START_START_MASK = 0x01,

/* HDMI_AHB_DMA_STOP field values */
    HDMI_AHB_DMA_STOP_STOP_OFFSET = 0,
    HDMI_AHB_DMA_STOP_STOP_MASK = 0x01,

/* AHB_DMA_STAT, AHB_DMA_INT, AHB_DMA_MASK, AHB_DMA_POL field values */
    HDMI_AHB_DMA_DONE = 0x80,
    HDMI_AHB_DMA_RETRY_SPLIT = 0x40,
    HDMI_AHB_DMA_LOSTOWNERSHIP = 0x20,
    HDMI_AHB_DMA_ERROR = 0x10,
    HDMI_AHB_DMA_FIFO_THREMPTY = 0x04,
    HDMI_AHB_DMA_FIFO_FULL = 0x02,
    HDMI_AHB_DMA_FIFO_EMPTY = 0x01,

/* AHB_DMA_BUFFSTAT, AHB_DMA_BUFFINT, AHB_DMA_BUFFMASK, AHB_DMA_BUFFPOL field values */
    HDMI_AHB_DMA_BUFFSTAT_FULL = 0x02,
    HDMI_AHB_DMA_BUFFSTAT_EMPTY = 0x01,

/* MC_CLKDIS field values */
    HDMI_MC_CLKDIS_HDCPCLK_DISABLE = 0x40,
    HDMI_MC_CLKDIS_CECCLK_DISABLE = 0x20,
    HDMI_MC_CLKDIS_CSCCLK_DISABLE = 0x10,
    HDMI_MC_CLKDIS_AUDCLK_DISABLE = 0x8,
    HDMI_MC_CLKDIS_PREPCLK_DISABLE = 0x4,
    HDMI_MC_CLKDIS_TMDSCLK_DISABLE = 0x2,
    HDMI_MC_CLKDIS_PIXELCLK_DISABLE = 0x1,

/* MC_SWRSTZ field values */
    HDMI_MC_SWRSTZ_CECSWRST_REQ = 0x40,
    HDMI_MC_SWRSTZ_TMDSSWRST_REQ = 0x02,

/* MC_FLOWCTRL field values */
    HDMI_MC_FLOWCTRL_FEED_THROUGH_OFF_MASK = 0x1,
    HDMI_MC_FLOWCTRL_FEED_THROUGH_OFF_CSC_IN_PATH = 0x1,
    HDMI_MC_FLOWCTRL_FEED_THROUGH_OFF_CSC_BYPASS = 0x0,

/* MC_PHYRSTZ field values */
    HDMI_MC_PHYRSTZ_ASSERT = 0x0,
    HDMI_MC_PHYRSTZ_DEASSERT = 0x1,

/* MC_HEACPHY_RST field values */
    HDMI_MC_HEACPHY_RST_ASSERT = 0x1,
    HDMI_MC_HEACPHY_RST_DEASSERT = 0x0,

/* CSC_CFG field values */
    HDMI_CSC_CFG_INTMODE_MASK = 0x30,
    HDMI_CSC_CFG_INTMODE_OFFSET = 4,
    HDMI_CSC_CFG_INTMODE_DISABLE = 0x00,
    HDMI_CSC_CFG_INTMODE_CHROMA_INT_FORMULA1 = 0x10,
    HDMI_CSC_CFG_INTMODE_CHROMA_INT_FORMULA2 = 0x20,
    HDMI_CSC_CFG_DECMODE_MASK = 0x3,
    HDMI_CSC_CFG_DECMODE_OFFSET = 0,
    HDMI_CSC_CFG_DECMODE_DISABLE = 0x0,
    HDMI_CSC_CFG_DECMODE_CHROMA_INT_FORMULA1 = 0x1,
    HDMI_CSC_CFG_DECMODE_CHROMA_INT_FORMULA2 = 0x2,
    HDMI_CSC_CFG_DECMODE_CHROMA_INT_FORMULA3 = 0x3,

/* CSC_SCALE field values */
    HDMI_CSC_SCALE_CSC_COLORDE_PTH_MASK = 0xF0,
    HDMI_CSC_SCALE_CSC_COLORDE_PTH_24BPP = 0x00,
    HDMI_CSC_SCALE_CSC_COLORDE_PTH_30BPP = 0x50,
    HDMI_CSC_SCALE_CSC_COLORDE_PTH_36BPP = 0x60,
    HDMI_CSC_SCALE_CSC_COLORDE_PTH_48BPP = 0x70,
    HDMI_CSC_SCALE_CSCSCALE_MASK = 0x03,

/* A_HDCPCFG0 field values */
    HDMI_A_HDCPCFG0_ELVENA_MASK = 0x80,
    HDMI_A_HDCPCFG0_ELVENA_ENABLE = 0x80,
    HDMI_A_HDCPCFG0_ELVENA_DISABLE = 0x00,
    HDMI_A_HDCPCFG0_I2CFASTMODE_MASK = 0x40,
    HDMI_A_HDCPCFG0_I2CFASTMODE_ENABLE = 0x40,
    HDMI_A_HDCPCFG0_I2CFASTMODE_DISABLE = 0x00,
    HDMI_A_HDCPCFG0_BYPENCRYPTION_MASK = 0x20,
    HDMI_A_HDCPCFG0_BYPENCRYPTION_ENABLE = 0x20,
    HDMI_A_HDCPCFG0_BYPENCRYPTION_DISABLE = 0x00,
    HDMI_A_HDCPCFG0_SYNCRICHECK_MASK = 0x10,
    HDMI_A_HDCPCFG0_SYNCRICHECK_ENABLE = 0x10,
    HDMI_A_HDCPCFG0_SYNCRICHECK_DISABLE = 0x00,
    HDMI_A_HDCPCFG0_AVMUTE_MASK = 0x8,
    HDMI_A_HDCPCFG0_AVMUTE_ENABLE = 0x8,
    HDMI_A_HDCPCFG0_AVMUTE_DISABLE = 0x0,
    HDMI_A_HDCPCFG0_RXDETECT_MASK = 0x4,
    HDMI_A_HDCPCFG0_RXDETECT_ENABLE = 0x4,
    HDMI_A_HDCPCFG0_RXDETECT_DISABLE = 0x0,
    HDMI_A_HDCPCFG0_EN11FEATURE_MASK = 0x2,
    HDMI_A_HDCPCFG0_EN11FEATURE_ENABLE = 0x2,
    HDMI_A_HDCPCFG0_EN11FEATURE_DISABLE = 0x0,
    HDMI_A_HDCPCFG0_HDMIDVI_MASK = 0x1,
    HDMI_A_HDCPCFG0_HDMIDVI_HDMI = 0x1,
    HDMI_A_HDCPCFG0_HDMIDVI_DVI = 0x0,

/* A_HDCPCFG1 field values */
    HDMI_A_HDCPCFG1_DISSHA1CHECK_MASK = 0x8,
    HDMI_A_HDCPCFG1_DISSHA1CHECK_DISABLE = 0x8,
    HDMI_A_HDCPCFG1_DISSHA1CHECK_ENABLE = 0x0,
    HDMI_A_HDCPCFG1_PH2UPSHFTENC_MASK = 0x4,
    HDMI_A_HDCPCFG1_PH2UPSHFTENC_ENABLE = 0x4,
    HDMI_A_HDCPCFG1_PH2UPSHFTENC_DISABLE = 0x0,
    HDMI_A_HDCPCFG1_ENCRYPTIONDISABLE_MASK = 0x2,
    HDMI_A_HDCPCFG1_ENCRYPTIONDISABLE_DISABLE = 0x2,
    HDMI_A_HDCPCFG1_ENCRYPTIONDISABLE_ENABLE = 0x0,
    HDMI_A_HDCPCFG1_SWRESET_MASK = 0x1,
    HDMI_A_HDCPCFG1_SWRESET_ASSERT = 0x0,

/* A_VIDPOLCFG field values */
    HDMI_A_VIDPOLCFG_UNENCRYPTCONF_MASK = 0x60,
    HDMI_A_VIDPOLCFG_UNENCRYPTCONF_OFFSET = 5,
    HDMI_A_VIDPOLCFG_DATAENPOL_MASK = 0x10,
    HDMI_A_VIDPOLCFG_DATAENPOL_ACTIVE_HIGH = 0x10,
    HDMI_A_VIDPOLCFG_DATAENPOL_ACTIVE_LOW = 0x0,
    HDMI_A_VIDPOLCFG_VSYNCPOL_MASK = 0x8,
    HDMI_A_VIDPOLCFG_VSYNCPOL_ACTIVE_HIGH = 0x8,
    HDMI_A_VIDPOLCFG_VSYNCPOL_ACTIVE_LOW = 0x0,
    HDMI_A_VIDPOLCFG_HSYNCPOL_MASK = 0x2,
    HDMI_A_VIDPOLCFG_HSYNCPOL_ACTIVE_HIGH = 0x2,
    HDMI_A_VIDPOLCFG_HSYNCPOL_ACTIVE_LOW = 0x0,


/* I2CM_OPERATION field values */
    HDMI_I2CM_OPERATION_WRITE = 0x10,
    HDMI_I2CM_OPERATION_READ_EXT = 0x2,
    HDMI_I2CM_OPERATION_READ = 0x1,

/* HDMI_I2CM_INT */
    HDMI_I2CM_INT_DONE_POL = 0x08,
    HDMI_I2CM_INT_DONE_MASK = 0x04,

/* HDMI_I2CM_CTLINT */
    HDMI_I2CM_CTLINT_NAC_POL = 0x80,
    HDMI_I2CM_CTLINT_NAC_MASK = 0x40,
    HDMI_I2CM_CTLINT_ARBITRATION_POL = 0x08,
    HDMI_I2CM_CTLINT_ARBITRATION_MASK = 0x04,

};

#endif /* __DW_HDMI_H__ */
