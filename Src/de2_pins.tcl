;# look in my book(s) or www.amos.eguru-il.com
;#####################################################
;# A template script for the assigning the DE2 board #
;# Choosing: device, pins, and making design safer ! #
;# Written by: Amos Zaslavsky (C)copyright - Ver 3.0 #
;#####################################################
puts \n
if {![is_project_open]} {
   puts "========================================"
   puts " ERROR: Assignments can not be done,    "
   puts " because there isn't any project open ! "
   puts "========================================"		
   } else {	     
   puts "================================="
   puts " Assigning the DE2 device & pins "
   puts " ...                             "
   ;#################
   ;# Clock Signals #
   ;#################
#   set_location_assignment  PIN_N2  -to CLK
    set_location_assignment  PIN_N2  -to clk
   ;# To use the 27 MHz clock,the TD_RESET pin (PIN_C4)
   ;# must be asserted to a high logic level
   ;# TD_RESET is also the TV-Decoder reset pin.
#   set_location_assignment  PIN_D13 -to CLOCK_27
#   set_location_assignment  PIN_C4  -to TD_RESET
   ;# External (SMA) clock input
#   set_location_assignment  PIN_P26 -to EXT_CLOCK

   ;#############################################
   ;# Debounced Push-Buttons ('0' when pressed) #
   ;#############################################

    set_location_assignment PIN_G26  -to notBoom  ;# KEY0
    set_location_assignment PIN_N23  -to boom  ;# KEY1
#   set_location_assignment PIN_P23  -to KEY2  ;# KEY2
    set_location_assignment PIN_W26  -to resetN  ;# KEY3

   ;################################
   ;# Slide Switches ('1' when up) #
   ;################################

    set_location_assignment PIN_N25  -to continueAfterWrong   ;# SW[0]
    set_location_assignment PIN_N26  -to autoRun   ;# SW[1]
#   set_location_assignment PIN_P25  -to SW[2]   ;# SW[2]
#   set_location_assignment PIN_AE14 -to SW[3]   ;# SW[3]
#   set_location_assignment PIN_AF14 -to SW[4]   ;# SW[4]
#   set_location_assignment PIN_AD13 -to SW[5]   ;# SW[5]
#   set_location_assignment PIN_AC13 -to SW[6]   ;# SW[6]
#   set_location_assignment PIN_C13  -to SW[7]   ;# SW[7]
#   set_location_assignment PIN_B13  -to SW[8]   ;# SW[8]
#   set_location_assignment PIN_A13  -to SW[9]   ;# SW[9]
#   set_location_assignment PIN_N1   -to SW[10]  ;# SW[10]
#   set_location_assignment PIN_P1   -to SW[11]  ;# SW[11]
#   set_location_assignment PIN_P2   -to SW[12]  ;# SW[12]
#   set_location_assignment PIN_T7   -to SW[13]  ;# SW[13]
#   set_location_assignment PIN_U3   -to SW[14]  ;# SW[14]
#   set_location_assignment PIN_U4   -to SW[15]  ;# SW[15]
#   set_location_assignment PIN_V1   -to SW[16]  ;# SW[16]
#   set_location_assignment PIN_V2   -to SW[17]  ;# SW[17] on the left side

   ;#########################################################
   ;# 8 + 1 Green LEDs                                      #
   ;# 8 LEDs are placed above the pushbuttons on the right  #
   ;# 1 LED (ninth) placed in the middle of the 7-s egments #
   ;# Active High - ON wnen '1'                             #
   ;#########################################################

#   set_location_assignment PIN_AE22  -to LEDG[0] ;# LEDG[0] on the right side
#   set_location_assignment PIN_AF22  -to LEDG[1] ;# LEDG[1]
#   set_location_assignment PIN_W19   -to LEDG[2] ;# LEDG[2]
#   set_location_assignment PIN_V18   -to LEDG[3] ;# LEDG[3]
#   set_location_assignment PIN_U18   -to LEDG[4] ;# LEDG[4]
#   set_location_assignment PIN_U17   -to LEDG[5] ;# LEDG[5]
#   set_location_assignment PIN_AA20  -to LEDG[6] ;# LEDG[6]
    set_location_assignment PIN_Y18   -to greenLed ;# LEDG[7]
#   set_location_assignment PIN_Y12   -to LEDG[8] ;# LEDG[8] Between 7-Segments


   ;#################################################
   ;# 18 red LEDs                                   #
   ;# placed above the 18 slide switches onthe left #
   ;# Active High - ON wnen '1                      #
   ;#################################################

     set_location_assignment PIN_AE23  -to redLed   ;# LEDR[0]
#    set_location_assignment PIN_AF23  -to q[1]   ;# LEDR[1]
#    set_location_assignment PIN_AB21  -to q[2]   ;# LEDR[2]
#    set_location_assignment PIN_AC22  -to q[3]   ;# LEDR[3]
#   set_location_assignment PIN_AD22  -to LEDR[4]   ;# LEDR[4]
#   set_location_assignment PIN_AD23  -to LEDR[5]   ;# LEDR[5]
#   set_location_assignment PIN_AD21  -to LEDR[6]   ;# LEDR[6]
#   set_location_assignment PIN_AC21  -to LEDR[7]   ;# LEDR[7]
#   set_location_assignment PIN_AA14  -to LEDR[8]   ;# LEDR[8]
#   set_location_assignment PIN_Y13   -to LEDR[9]   ;# LEDR[9]
#   set_location_assignment PIN_AA13  -to LEDR[10]  ;# LEDR[10]
#   set_location_assignment PIN_AC14  -to LEDR[11]  ;# LEDR[11]
#   set_location_assignment PIN_AD15  -to LEDR[12]  ;# LEDR[12]
#   set_location_assignment PIN_AE15  -to LEDR[13]  ;# LEDR[13]
#   set_location_assignment PIN_AF13  -to LEDR[14]  ;# LEDR[14]
#   set_location_assignment PIN_AE13  -to LEDR[15]  ;# LEDR[15]
#   set_location_assignment PIN_AE12  -to LEDR[16]  ;# LEDR[16]
#   set_location_assignment PIN_AD12  -to LEDR[17]  ;# LEDR[17] on the left side


   ;###############################
   ;# 7 * Seven Segments          #
   ;# a=6 b=5 c=4 d=3 e=2 f=1 g=0 #
   ;# DP is not connected !       #
   ;# Active low (ON when '0')    #
   ;###############################

  ;# the group of 4 seven segments on the right

    set_location_assignment PIN_AF10 -to HEX0S[6]   ;# a HEX0S[6]
    set_location_assignment PIN_AB12 -to HEX0S[5]   ;# b HEX0S[5]
    set_location_assignment PIN_AC12 -to HEX0S[4]   ;# c HEX0S[4]
    set_location_assignment PIN_AD11 -to HEX0S[3]   ;# d HEX0S[3]
    set_location_assignment PIN_AE11 -to HEX0S[2]   ;# e HEX0S[2]
    set_location_assignment PIN_V14  -to HEX0S[1]   ;# f HEX0S[1]
    set_location_assignment PIN_V13  -to HEX0S[0]   ;# g HEX0S[0]

   set_location_assignment PIN_V20  -to HEX1S[6]   ;# a HEX1S[6]
   set_location_assignment PIN_V21  -to HEX1S[5]   ;# b HEX1S[5]
   set_location_assignment PIN_W21  -to HEX1S[4]   ;# c HEX1S[4]
   set_location_assignment PIN_Y22  -to HEX1S[3]   ;# d HEX1S[3]
   set_location_assignment PIN_AA24 -to HEX1S[2]   ;# e HEX1S[2]
   set_location_assignment PIN_AA23 -to HEX1S[1]   ;# f HEX1S[1]
   set_location_assignment PIN_AB24 -to HEX1S[0]   ;# g HEX1S[0]

   set_location_assignment PIN_AB23 -to HEX2S[6]   ;# a HEX2S[6]
   set_location_assignment PIN_V22  -to HEX2S[5]   ;# b HEX2S[5]
   set_location_assignment PIN_AC25 -to HEX2S[4]   ;# c HEX2S[4]
   set_location_assignment PIN_AC26 -to HEX2S[3]   ;# d HEX2S[3]
   set_location_assignment PIN_AB26 -to HEX2S[2]   ;# e HEX2S[2]
   set_location_assignment PIN_AB25 -to HEX2S[1]   ;# f HEX2S[1]
   set_location_assignment PIN_Y24  -to HEX2S[0]   ;# g HEX2S[0]

   set_location_assignment PIN_Y23  -to HEX3S[6]   ;# a HEX3S[6]
   set_location_assignment PIN_AA25 -to HEX3S[5]   ;# b HEX3S[5]
   set_location_assignment PIN_AA26 -to HEX3S[4]   ;# c HEX3S[4]
   set_location_assignment PIN_Y26  -to HEX3S[3]   ;# d HEX3S[3]
   set_location_assignment PIN_Y25  -to HEX3S[2]   ;# e HEX3S[2]
   set_location_assignment PIN_U22  -to HEX3S[1]   ;# f HEX3S[1]
   set_location_assignment PIN_W24  -to HEX3S[0]   ;# g HEX3S[0]

  ;# the group of 2 seven segments in the middle

#   set_location_assignment PIN_U9   -to HEX4S[6]   ;# a HEX4S[6]
#   set_location_assignment PIN_U1   -to HEX4S[5]   ;# b HEX4S[5]
#   set_location_assignment PIN_U2   -to HEX4S[4]   ;# c HEX4S[4]
#   set_location_assignment PIN_T4   -to HEX4S[3]   ;# d HEX4S[3]
#   set_location_assignment PIN_R7   -to HEX4S[2]   ;# e HEX4S[2]
#   set_location_assignment PIN_R6   -to HEX4S[1]   ;# f HEX4S[1]
#   set_location_assignment PIN_T3   -to HEX4S[0]   ;# g HEX4S[0]

#   set_location_assignment PIN_T2   -to HEX5S[6]   ;# a HEX5S[6]
#   set_location_assignment PIN_P6   -to HEX5S[5]   ;# b HEX5S[5]
#   set_location_assignment PIN_P7   -to HEX5S[4]   ;# c HEX5S[4]
#   set_location_assignment PIN_T9   -to HEX5S[3]   ;# d HEX5S[3]
#   set_location_assignment PIN_R5   -to HEX5S[2]   ;# e HEX5S[2]
#   set_location_assignment PIN_R4   -to HEX5S[1]   ;# f HEX5S[1]
#   set_location_assignment PIN_R3   -to HEX5S[0]   ;# g HEX5S[0]

  ;# the group of 2 seven segments on the left

#   set_location_assignment PIN_R2   -to HEX6S[6]   ;# a HEX6S[6]
#   set_location_assignment PIN_P4   -to HEX6S[5]   ;# b HEX6S[5]
#   set_location_assignment PIN_P3   -to HEX6S[4]   ;# c HEX6S[4]
#   set_location_assignment PIN_M2   -to HEX6S[3]   ;# d HEX6S[3]
#   set_location_assignment PIN_M3   -to HEX6S[2]   ;# e HEX6S[2]
#   set_location_assignment PIN_M5   -to HEX6S[1]   ;# f HEX6S[1]
#   set_location_assignment PIN_M4   -to HEX6S[0]   ;# g HEX6S[0]

#   set_location_assignment PIN_L3   -to HEX7S[6]   ;# a HEX7S[6]
#   set_location_assignment PIN_L2   -to HEX7S[5]   ;# b HEX7S[5]
#   set_location_assignment PIN_L9   -to HEX7S[4]   ;# c HEX7S[4]
#   set_location_assignment PIN_L6   -to HEX7S[3]   ;# d HEX7S[3]
#   set_location_assignment PIN_L7   -to HEX7S[2]   ;# e HEX7S[2]
#   set_location_assignment PIN_P9   -to HEX7S[1]   ;# f HEX7S[1]
#   set_location_assignment PIN_N9   -to HEX7S[0]   ;# g HEX7S[0]

   ;##################################
   ;# UART (serial port) pin signals #
   ;##################################
   ;# Using on board MAX232 transceiver
#   set_location_assignment PIN_C25  -to RX
#   set_location_assignment PIN_B25  -to TX


   ;##################################
   ;# IrDA (serial port) pin signals #
   ;##################################
   ;# using the Agilent HSDL-3201 low power infrared transceiver
   ;# http://techtrain.microchip.com/webseminars/documents/IrDA_BW.pdf

#   the TXD pin is also a configuration pin so uncomment this line
#   set_global_assignment -name CYCLONEII_RESERVE_NCEO_AFTER_CONFIGURATION "USE AS REGULAR IO"
#   set_location_assignment PIN_AE24 -to IRDA_TXD

#   set_location_assignment PIN_AE25 -to IRDA_RXD

   ;########################
   ;## 24-bit Audio CODEC ##
   ;########################

#   set_location_assignment PIN_B4 -to AUD_BCLK
#   set_location_assignment PIN_C5 -to AUD_ADCLRCK
#   set_location_assignment PIN_B5 -to AUD_ADCDAT
#   set_location_assignment PIN_C6 -to AUD_DACLRCK
#   set_location_assignment PIN_A4 -to AUD_DACDAT
#   set_location_assignment PIN_A5 -to AUD_XCK

   ;#####################
   ;# I2C control lines #
   ;#####################
   ;# They control:
   ;#  1.  24-bit Audio CODEC
   ;#  2.  The TV Decoder
   ;#  3.  The Camera
   ;# they are also connected to:
   ;#      2K Pull-Up resistors

   ;# I2C control line: SCLK input (output if Cyclone)
#   set_location_assignment PIN_A6 -to I2C_SCLK
   ;# I2C control line: SDAT I/O
#   set_location_assignment PIN_B6 -to I2C_SDAT


   ;#################
   ;# VGA interface #
   ;#################

   ;# red video
#   set_location_assignment PIN_C8   -to RED[0]
#   set_location_assignment PIN_F10  -to RED[1]
#   set_location_assignment PIN_G10  -to RED[2]
#   set_location_assignment PIN_D9   -to RED[3]
#   set_location_assignment PIN_C9   -to RED[4]
#   set_location_assignment PIN_A8   -to RED[5]
#   set_location_assignment PIN_H11  -to RED[6]
#   set_location_assignment PIN_H12  -to RED[7]
#   set_location_assignment PIN_F11  -to RED[8]
#   set_location_assignment PIN_E10  -to RED[9]
   ;# green video
#   set_location_assignment PIN_B9   -to GREEN[0]
#   set_location_assignment PIN_A9   -to GREEN[1]
#   set_location_assignment PIN_C10  -to GREEN[2]
#   set_location_assignment PIN_D10  -to GREEN[3]
#   set_location_assignment PIN_B10  -to GREEN[4]
#   set_location_assignment PIN_A10  -to GREEN[5]
#   set_location_assignment PIN_G11  -to GREEN[6]
#   set_location_assignment PIN_D11  -to GREEN[7]
#   set_location_assignment PIN_E12  -to GREEN[8]
#   set_location_assignment PIN_D12  -to GREEN[9]
   ;# blue video
#   set_location_assignment PIN_J13  -to BLUE[0]
#   set_location_assignment PIN_J14  -to BLUE[1]
#   set_location_assignment PIN_F12  -to BLUE[2]
#   set_location_assignment PIN_G12  -to BLUE[3]
#   set_location_assignment PIN_J10  -to BLUE[4]
#   set_location_assignment PIN_J11  -to BLUE[5]
#   set_location_assignment PIN_C11  -to BLUE[6]
#   set_location_assignment PIN_B11  -to BLUE[7]
#   set_location_assignment PIN_C12  -to BLUE[8]
#   set_location_assignment PIN_B12  -to BLUE[9]

   ;# control signals
#   set_location_assignment PIN_A7   -to HORIZ_SYNC
#   set_location_assignment PIN_D8   -to VERT_SYNC
   ;# connect this shit (VGA_CLK) to the colok of sync !
#   set_location_assignment PIN_B8   -to VGA_CLK
   ;# connect this shit to video (paint) with -1 latency !
#   set_location_assignment PIN_D6   -to VGA_BLANK
   ;# this shit seems not to be important (0 on demos) ?!
#   set_location_assignment PIN_B7   -to VGA_SYNC

   ;##############
   ;# TV Decoder #
   ;##############

#   set_location_assignment TD_DATA[0] -to  PIN_J9
#   set_location_assignment TD_DATA[1] -to  PIN_E8
#   set_location_assignment TD_DATA[2] -to  PIN_H8
#   set_location_assignment TD_DATA[3] -to  PIN_H10
#   set_location_assignment TD_DATA[4] -to  PIN_G9
#   set_location_assignment TD_DATA[5] -to  PIN_F9
#   set_location_assignment TD_DATA[6] -to  PIN_D7
#   set_location_assignment TD_DATA[7] -to  PIN_C7
#   set_location_assignment TD_HS      -to  PIN_D5
#   set_location_assignment TD_VS      -to  PIN_K9

   ;#################
   ;# PS2 interface #
   ;#################

#   set_location_assignment PIN_D26 -to PS2_CLK
#   set_location_assignment PIN_C24 -to PS2_DAT


   ;#####################
   ;# SD Card interface #
   ;#####################

#   set_location_assignment PIN_AD24 -to SD_SO
#   set_location_assignment PIN_AD24 -to SD_DO
#   set_location_assignment PIN_AD24 -to SD_DAT

#   set_location_assignment PIN_AC23 -to SD_ssN
#   set_location_assignment PIN_AC23 -to SD_csN
#   set_location_assignment PIN_AC23 -to SD_DAT3

#   set_location_assignment PIN_Y21  -to SD_SI
#   set_location_assignment PIN_Y21  -to SD_DI
#   set_location_assignment PIN_Y21  -to SD_CMD

#   set_location_assignment PIN_AD25 -to SD_SCLK
#   set_location_assignment PIN_AD25 -to SD_CLK


   ;##############################################
   ;# Alfanumeric LCD display not including data #
   ;##############################################
   ;# read_writeN
#   set_location_assignment PIN_K4 -to LCD_RW
   ;# Enable
#   set_location_assignment PIN_K3 -to LCD_EN
   ;# register select
#   set_location_assignment PIN_K1 -to LCD_RS
   ;# data BUS
#   set_location_assignment PIN_J1 -to LCD_DATA[0]
#   set_location_assignment PIN_J2 -to LCD_DATA[1]
#   set_location_assignment PIN_H1 -to LCD_DATA[2]
#   set_location_assignment PIN_H2 -to LCD_DATA[3]
#   set_location_assignment PIN_J4 -to LCD_DATA[4]
#   set_location_assignment PIN_J3 -to LCD_DATA[5]
#   set_location_assignment PIN_H4 -to LCD_DATA[6]
#   set_location_assignment PIN_H3 -to LCD_DATA[7]
   ;# LCD Power ON/OFF
#   set_location_assignment PIN_L4 -to LCD_ON
   ;# LCD Back Light ON/OFF
#   set_location_assignment PIN_K2 -to LCD_BLON

   ;####################################
   ;# Fast Ethernet Network Controller #
   ;####################################

#   set_location_assignment PIN_D17 -to ENET_DATA[0]
#   set_location_assignment PIN_C17 -to ENET_DATA[1]
#   set_location_assignment PIN_B18 -to ENET_DATA[2]
#   set_location_assignment PIN_A18 -to ENET_DATA[3]
#   set_location_assignment PIN_B17 -to ENET_DATA[4]
#   set_location_assignment PIN_A17 -to ENET_DATA[5]
#   set_location_assignment PIN_B16 -to ENET_DATA[6]
#   set_location_assignment PIN_B15 -to ENET_DATA[7]
#   set_location_assignment PIN_B20 -to ENET_DATA[8]
#   set_location_assignment PIN_A20 -to ENET_DATA[9]
#   set_location_assignment PIN_C19 -to ENET_DATA[10]
#   set_location_assignment PIN_D19 -to ENET_DATA[11]
#   set_location_assignment PIN_B19 -to ENET_DATA[12]
#   set_location_assignment PIN_A19 -to ENET_DATA[13]
#   set_location_assignment PIN_E18 -to ENET_DATA[14]
#   set_location_assignment PIN_D18 -to ENET_DATA[15]
#   set_location_assignment PIN_B24 -to ENET_CLK
#   set_location_assignment PIN_A21 -to ENET_CMD
#   set_location_assignment PIN_A23 -to ENET_CS_N
#   set_location_assignment PIN_B21 -to ENET_INT
#   set_location_assignment PIN_A22 -to ENET_RD_N
#   set_location_assignment PIN_B22 -to ENET_WR_N
#   set_location_assignment PIN_B23 -to ENET_RST_N

   ;##################
   ;# 512-Kbyte SRAM #
   ;##################

      ;# SRAM address
#   set_location_assignment PIN_AE4  -to SRAM_ADDR[0]
#   set_location_assignment PIN_AF4  -to SRAM_ADDR[1]
#   set_location_assignment PIN_AC5  -to SRAM_ADDR[2]
#   set_location_assignment PIN_AC6  -to SRAM_ADDR[3]
#   set_location_assignment PIN_AD4  -to SRAM_ADDR[4]
#   set_location_assignment PIN_AD5  -to SRAM_ADDR[5]
#   set_location_assignment PIN_AE5  -to SRAM_ADDR[6]
#   set_location_assignment PIN_AF5  -to SRAM_ADDR[7]
#   set_location_assignment PIN_AD6  -to SRAM_ADDR[8]
#   set_location_assignment PIN_AD7  -to SRAM_ADDR[9]
#   set_location_assignment PIN_V10  -to SRAM_ADDR[10]
#   set_location_assignment PIN_V9   -to SRAM_ADDR[11]
#   set_location_assignment PIN_AC7  -to SRAM_ADDR[12]
#   set_location_assignment PIN_W8   -to SRAM_ADDR[13]
#   set_location_assignment PIN_W10  -to SRAM_ADDR[14]
#   set_location_assignment PIN_Y10  -to SRAM_ADDR[15]
#   set_location_assignment PIN_AB8  -to SRAM_ADDR[16]
#   set_location_assignment PIN_AC8  -to SRAM_ADDR[17]
   ;# SRAM data
#   set_location_assignment PIN_AD8  -to SRAM_DQ[0]
#   set_location_assignment PIN_AE6  -to SRAM_DQ[1]
#   set_location_assignment PIN_AF6  -to SRAM_DQ[2]
#   set_location_assignment PIN_AA9  -to SRAM_DQ[3]
#   set_location_assignment PIN_AA10 -to SRAM_DQ[4]
#   set_location_assignment PIN_AB10 -to SRAM_DQ[5]
#   set_location_assignment PIN_AA11 -to SRAM_DQ[6]
#   set_location_assignment PIN_Y11  -to SRAM_DQ[7]
#   set_location_assignment PIN_AE7  -to SRAM_DQ[8]
#   set_location_assignment PIN_AF7  -to SRAM_DQ[9]
#   set_location_assignment PIN_AE8  -to SRAM_DQ[10]
#   set_location_assignment PIN_AF8  -to SRAM_DQ[11]
#   set_location_assignment PIN_W11  -to SRAM_DQ[12]
#   set_location_assignment PIN_W12  -to SRAM_DQ[13]
#   set_location_assignment PIN_AC9  -to SRAM_DQ[14]
#   set_location_assignment PIN_AC10 -to SRAM_DQ[15]
   ;# SRAM Write Enable
#   set_location_assignment PIN_AE10 -to SRAM_WE_N
   ;# SRAM Output Enable
#   set_location_assignment PIN_AD10 -to SRAM_OE_N
   ;# SRAM High-Byte & Low-Byte data mask
#   set_location_assignment PIN_AF9  -to SRAM_UB_N
#   set_location_assignment PIN_AE9  -to SRAM_LB_N
   ;# SRAM Chip Enable
#   set_location_assignment PIN_AC11 -to SRAM_CE_N

   ;#################
   ;# 8-Mbyte SDRAM #
   ;#################

   ;# SDRASM address
#   set_location_assignment PIN_T6   -to DRAM_ADDR[0]
#   set_location_assignment PIN_V4   -to DRAM_ADDR[1]
#   set_location_assignment PIN_V3   -to DRAM_ADDR[2]
#   set_location_assignment PIN_W2   -to DRAM_ADDR[3]
#   set_location_assignment PIN_W1   -to DRAM_ADDR[4]
#   set_location_assignment PIN_U6   -to DRAM_ADDR[5]
#   set_location_assignment PIN_U7   -to DRAM_ADDR[6]
#   set_location_assignment PIN_U5   -to DRAM_ADDR[7]
#   set_location_assignment PIN_W4   -to DRAM_ADDR[8]
#   set_location_assignment PIN_W3   -to DRAM_ADDR[9]
#   set_location_assignment PIN_Y1   -to DRAM_ADDR[10]
#   set_location_assignment PIN_V5   -to DRAM_ADDR[11]
   ;# SDRAM data
#   set_location_assignment PIN_V6   -to DRAM_DQ[0]
#   set_location_assignment PIN_AA2  -to DRAM_DQ[1]
#   set_location_assignment PIN_AA1  -to DRAM_DQ[2]
#   set_location_assignment PIN_Y3   -to DRAM_DQ[3]
#   set_location_assignment PIN_Y4   -to DRAM_DQ[4]
#   set_location_assignment PIN_R8   -to DRAM_DQ[5]
#   set_location_assignment PIN_T8   -to DRAM_DQ[6]
#   set_location_assignment PIN_V7   -to DRAM_DQ[7]
#   set_location_assignment PIN_W6   -to DRAM_DQ[8]
#   set_location_assignment PIN_AB2  -to DRAM_DQ[9]
#   set_location_assignment PIN_AB1  -to DRAM_DQ[10]
#   set_location_assignment PIN_AA4  -to DRAM_DQ[11]
#   set_location_assignment PIN_AA3  -to DRAM_DQ[12]
#   set_location_assignment PIN_AC2  -to DRAM_DQ[13]
#   set_location_assignment PIN_AC1  -to DRAM_DQ[14]
#   set_location_assignment PIN_AA5  -to DRAM_DQ[15]
   ;# SDRAM Bank Address
#   set_location_assignment PIN_AE2  -to DRAM_BA_0
#   set_location_assignment PIN_AE3  -to DRAM_BA_1
   ;# SDRAM Low byte & High byte data mask
#   set_location_assignment PIN_AD2  -to DRAM_LDQM
#   set_location_assignment PIN_Y5   -to DRAM_UDQM
   ;# SDRAM Row Address Strobe & Column Address Strobe
#   set_location_assignment PIN_AB4  -to DRAM_RAS_N
#   set_location_assignment PIN_AB3  -to DRAM_CAS_N
   ;# ClocK Enable
#   set_location_assignment PIN_AA6  -to DRAM_CKE
   ;# SDRAM CLocK
#   set_location_assignment PIN_AA7  -to DRAM_CLK
   ;# SDRAM Write Enable
#   set_location_assignment PIN_AD3  -to DRAM_WE_N
   ;# SDRAM Chip Select
#   set_location_assignment PIN_AC3  -to DRAM_CS_N

   ;################
   ;# FLASH Memory #
   ;################

   ;# FLASH address
#   set_location_assignment PIN_AC18 -to FL_ADDR[0]
#   set_location_assignment PIN_AB18 -to FL_ADDR[1]
#   set_location_assignment PIN_AE19 -to FL_ADDR[2]
#   set_location_assignment PIN_AF19 -to FL_ADDR[3]
#   set_location_assignment PIN_AE18 -to FL_ADDR[4]
#   set_location_assignment PIN_AF18 -to FL_ADDR[5]
#   set_location_assignment PIN_Y16  -to FL_ADDR[6]
#   set_location_assignment PIN_AA16 -to FL_ADDR[7]
#   set_location_assignment PIN_AD17 -to FL_ADDR[8]
#   set_location_assignment PIN_AC17 -to FL_ADDR[9]
#   set_location_assignment PIN_AE17 -to FL_ADDR[10]
#   set_location_assignment PIN_AF17 -to FL_ADDR[11]
#   set_location_assignment PIN_W16  -to FL_ADDR[12]
#   set_location_assignment PIN_W15  -to FL_ADDR[13]
#   set_location_assignment PIN_AC16 -to FL_ADDR[14]
#   set_location_assignment PIN_AD16 -to FL_ADDR[15]
#   set_location_assignment PIN_AE16 -to FL_ADDR[16]
#   set_location_assignment PIN_AC15 -to FL_ADDR[17]
#   set_location_assignment PIN_AB15 -to FL_ADDR[18]
#   set_location_assignment PIN_AA15 -to FL_ADDR[19]
#   set_location_assignment PIN_Y15  -to FL_ADDR[20]
#   set_location_assignment PIN_Y14  -to FL_ADDR[21]
   ;# FLASH data
#   set_location_assignment PIN_AD19 -to FL_DQ[0]
#   set_location_assignment PIN_AC19 -to FL_DQ[1]
#   set_location_assignment PIN_AF20 -to FL_DQ[2]
#   set_location_assignment PIN_AE20 -to FL_DQ[3]
#   set_location_assignment PIN_AB20 -to FL_DQ[4]
#   set_location_assignment PIN_AC20 -to FL_DQ[5]
#   set_location_assignment PIN_AF21 -to FL_DQ[6]
#   set_location_assignment PIN_AE21 -to FL_DQ[7]
   ;# FLASH Chip Enable
#   set_location_assignment PIN_V17  -to FL_CE_N
   ;# FLASH Output Enable
#   set_location_assignment PIN_W17  -to FL_OE_N
   ;# FLASH Rset
#   set_location_assignment PIN_AA18 -to FL_RST_N
   ;# FLASH Write Enable
#   set_location_assignment PIN_AA17 -to FL_WE_N

   ;#####################################
   ;# JP1 - the left connector (GPIO 0) #
   ;#####################################

#   set_location_assignment PIN_D25  -to GPIO_0[0]
#   set_location_assignment PIN_J22  -to GPIO_0[1]
#   set_location_assignment PIN_E26  -to GPIO_0[2]
#   set_location_assignment PIN_E25  -to GPIO_0[3]
#   set_location_assignment PIN_F24  -to GPIO_0[4]
#   set_location_assignment PIN_F23  -to GPIO_0[5]
#   set_location_assignment PIN_J21  -to GPIO_0[6]
#   set_location_assignment PIN_J20  -to GPIO_0[7]
#   set_location_assignment PIN_F25  -to GPIO_0[8]
#   set_location_assignment PIN_F26  -to GPIO_0[9]
#   set_location_assignment PIN_N18  -to GPIO_0[10]
#   set_location_assignment PIN_P18  -to GPIO_0[11]
#   set_location_assignment PIN_G23  -to GPIO_0[12]
#   set_location_assignment PIN_G24  -to GPIO_0[13]
#   set_location_assignment PIN_K22  -to GPIO_0[14]
#   set_location_assignment PIN_G25  -to GPIO_0[15]
#   set_location_assignment PIN_H23  -to GPIO_0[16]
#   set_location_assignment PIN_H24  -to GPIO_0[17]
#   set_location_assignment PIN_J23  -to GPIO_0[18]
#   set_location_assignment PIN_J24  -to GPIO_0[19]
#   set_location_assignment PIN_H25  -to GPIO_0[20]
#   set_location_assignment PIN_H26  -to GPIO_0[21]
#   set_location_assignment PIN_H19  -to GPIO_0[22]
#   set_location_assignment PIN_K18  -to GPIO_0[23]
#   set_location_assignment PIN_K19  -to GPIO_0[24]
#   set_location_assignment PIN_K21  -to GPIO_0[25]
#   set_location_assignment PIN_K23  -to GPIO_0[26]
#   set_location_assignment PIN_K24  -to GPIO_0[27]
#   set_location_assignment PIN_L21  -to GPIO_0[28]
#   set_location_assignment PIN_L20  -to GPIO_0[29]
#   set_location_assignment PIN_J25  -to GPIO_0[30]
#   set_location_assignment PIN_J26  -to GPIO_0[31]
#   set_location_assignment PIN_L23  -to GPIO_0[32]
#   set_location_assignment PIN_L24  -to GPIO_0[33]
#   set_location_assignment PIN_L25  -to GPIO_0[34]
#   set_location_assignment PIN_L19  -to GPIO_0[35]

   ;######################################
   ;# JP2 - the right connector (GPIO 1) #
   ;######################################

#   set_location_assignment PIN_K25  -to GPIO_1[0]
#   set_location_assignment PIN_K26  -to GPIO_1[1]
#   set_location_assignment PIN_M22  -to GPIO_1[2]
#   set_location_assignment PIN_M23  -to GPIO_1[3]
#   set_location_assignment PIN_M19  -to GPIO_1[4]
#   set_location_assignment PIN_M20  -to GPIO_1[5]
#   set_location_assignment PIN_N20  -to GPIO_1[6]
#   set_location_assignment PIN_M21  -to GPIO_1[7]
#   set_location_assignment PIN_M24  -to GPIO_1[8]
#   set_location_assignment PIN_M25  -to GPIO_1[9]
#   set_location_assignment PIN_N24  -to GPIO_1[10]
#   set_location_assignment PIN_P24  -to GPIO_1[11]
#   set_location_assignment PIN_R25  -to GPIO_1[12]
#   set_location_assignment PIN_R24  -to GPIO_1[13]
#   set_location_assignment PIN_R20  -to GPIO_1[14]
#   set_location_assignment PIN_T22  -to GPIO_1[15]
#   set_location_assignment PIN_T23  -to GPIO_1[16]
#   set_location_assignment PIN_T24  -to GPIO_1[17]
#   set_location_assignment PIN_T25  -to GPIO_1[18]
#   set_location_assignment PIN_T18  -to GPIO_1[19]
#   set_location_assignment PIN_T21  -to GPIO_1[20]
#   set_location_assignment PIN_T20  -to GPIO_1[21]
#   set_location_assignment PIN_U26  -to GPIO_1[22]
#   set_location_assignment PIN_U25  -to GPIO_1[23]
#   set_location_assignment PIN_U23  -to GPIO_1[24]
#   set_location_assignment PIN_U24  -to GPIO_1[25]
#   set_location_assignment PIN_R19  -to GPIO_1[26]
#   set_location_assignment PIN_T19  -to GPIO_1[27]
#   set_location_assignment PIN_U20  -to GPIO_1[28]
#   set_location_assignment PIN_U21  -to GPIO_1[29]
#   set_location_assignment PIN_V26  -to GPIO_1[30]
#   set_location_assignment PIN_V25  -to GPIO_1[31]
#   set_location_assignment PIN_V24  -to GPIO_1[32]
#   set_location_assignment PIN_V23  -to GPIO_1[33]
#   set_location_assignment PIN_W25  -to GPIO_1[34]
#   set_location_assignment PIN_W23  -to GPIO_1[35]


   ;######################################################
   ;# USB USB Host and Device                            #
   ;# (Using Philips ISP1362 single-chip USB controller) #
   ;######################################################

#   set_location_assignment PIN_K7   -to OTG_ADDR[0]
#   set_location_assignment PIN_F2   -to OTG_ADDR[1]
#   set_location_assignment PIN_F1   -to OTG_CS_N
#   set_location_assignment PIN_G2   -to OTG_RD_N
#   set_location_assignment PIN_G1   -to OTG_WR_N
#   set_location_assignment PIN_G5   -to OTG_RST_N
#   set_location_assignment PIN_F4   -to OTG_DATA[0]
#   set_location_assignment PIN_D2   -to OTG_DATA[1]
#   set_location_assignment PIN_D1   -to OTG_DATA[2]
#   set_location_assignment PIN_F7   -to OTG_DATA[3]
#   set_location_assignment PIN_J5   -to OTG_DATA[4]
#   set_location_assignment PIN_J8   -to OTG_DATA[5]
#   set_location_assignment PIN_J7   -to OTG_DATA[6]
#   set_location_assignment PIN_H6   -to OTG_DATA[7]
#   set_location_assignment PIN_E2   -to OTG_DATA[8]
#   set_location_assignment PIN_E1   -to OTG_DATA[9]
#   set_location_assignment PIN_K6   -to OTG_DATA[10]
#   set_location_assignment PIN_K5   -to OTG_DATA[11]
#   set_location_assignment PIN_G4   -to OTG_DATA[12]
#   set_location_assignment PIN_G3   -to OTG_DATA[13]
#   set_location_assignment PIN_J6   -to OTG_DATA[14]
#   set_location_assignment PIN_K8   -to OTG_DATA[15]
#   set_location_assignment PIN_B3   -to OTG_INT0
#   set_location_assignment PIN_C3   -to OTG_INT1
#   set_location_assignment PIN_C2   -to OTG_DACK0_N
#   set_location_assignment PIN_B2   -to OTG_DACK1_N
#   set_location_assignment PIN_F6   -to OTG_DREQ0
#   set_location_assignment PIN_E5   -to OTG_DREQ1
#   set_location_assignment PIN_F3   -to OTG_FSPEED
#   set_location_assignment PIN_G6   -to OTG_LSPEED

   ;#############
   ;# JTAG pins #
   ;#############

#   set_location_assignment PIN_B14  -to TDI
#   set_location_assignment PIN_A14  -to TCS
#   set_location_assignment PIN_D14  -to TCK
#   set_location_assignment PIN_F14  -to TDO


   ;##############################################
   ;# Device selection & Making connections safe #
   ;##############################################
   ;# Analysis & Synthesis Assignments
   set_global_assignment -name FAMILY "Cyclone II"
   set_global_assignment -name DEVICE_FILTER_PACKAGE FBGA
   set_global_assignment -name DEVICE_FILTER_PIN_COUNT 672
   set_global_assignment -name DEVICE_FILTER_SPEED_GRADE 6
   ;# fitter assignments
   set_global_assignment -name DEVICE "EP2C35F672C6"

   set_global_assignment -name RESERVE_ALL_UNUSED_PINS "AS INPUT TRI-STATED"
#   set_global_assignment -name RESERVE_ALL_UNUSED_PINS "AS INPUT TRI-STATED WITH WEAK PULL-UP"

   ;# for EDA tools (post synthesis gate level simulation)
   set_global_assignment -name EDA_SIMULATION_TOOL "ModelSim-Altera (VHDL)"
   set_global_assignment -name EDA_OUTPUT_DATA_FORMAT VHDL -section_id eda_simulation

   puts " And making the design safer !   "
   puts "================================="
   
   ;# run compilation after pin assignment
#   load_package flow
#   execute_flow -compile

}