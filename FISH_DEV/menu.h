#ifndef MENU_H
#define MENU_H

#include <Arduino.h>

const uint8_t PROGMEM TEAMarg2[] = {
  //         ########                                                                                       ########                 
  //         ###########                                                                                   ##      ##                
  //         ####    ##################                                                                   ##  #### ###               
  //         #### ##    ################ ####################           #############         ######     ##  ##  # ####              
  //         #### #####                #######################       ##################      ########   ##  ###  # #####             
  //         #### ##  ######  ######## ##                   ###     ####            ####     ##     ## ##  ####### #  ###            
  // ####### ####  #  ####### #####  #  # #################  ##    ###   ##########   ###   ##  ###  ###  ###  ### #   ### ##########
  //         ##### ##########  ####  ## #  ################# ##   ###  ##############   ##  ## #####  #  ###    ## ##  ###           
  //         ##### ########### ######## #   ################  #   ##  #################  ####  ######   ####    ## ########          
  // ##### # #####             ########     ################# #  ##  #######    ######## #### ######## ######  ### ########  # # ####
  // #  #    ###### ####################    ################# #  ## #######      #######  ##  #################### ########      #  #
  // #  # #  ###### ####################     #######          # ##  ######       ####  ## ## #################  ## ######## # #  #  #
  // ####    ######  #  ################     ##############   # ## #######       ####  ## #  #################  ## ########      ####
  // ####  # ####### #  #################  # ##############   ###  ######       ######### # ###################### ########  # # ####
  // ####    ####### ####################  # ###############  ### #######       ########    #####################  ########      ####
  // #### #   ######        #########      # ###############  ##  ######       #########   ###################### ######### # #  ####
  // ####     #####          ########     ##  ############## ### ######################    ###################### #########     #####
  // ##### #  #####          #########    ### ########        #  ######################   ####################### ########   #  #####
  // #####     ###            ########    ### ###############   ######################    ####################### ########      #####
  // ###### #  ###         #  #########  #### ################  #######      #########   ######## ############### ########  # # #####
  // ######    ##          #   ########  ####  ################  ######      ########    #######  ############### ########      #####
  // ####### #  #         ###  ######### ##### ################# #####       ########   ########   ###### ####### ######## # # ######
  // #######    #         ###   ########  #### #  ############## #####      ########    #######    #####  ####### ########     ######
  // ######## # ######## #####  ##  ##### #### #  ########                  ###  ###    #######     ###   ######  ########  #  ######
  // ########          # #####   #  ##### #### #####             #         ####  ##                 ##    ###  # #########     ######
  // #  ###### # # # # ########  #####    ####                ## #         ########           ##          ###  # ######### # # ###  #
  // #  ######          #######           ####                ## #     ###                     #            #### #########     ###  #
  // ########## # # # # #########         # ##                   #     ###             ##      ##             ## #########  # #######
  //                    ########         ## ##                   #    ####             ##       #                ########            
  //         ###         #######         #  ##              ######    ####            ####      ##  #    #       ########            
  // ######### ######    ######         ##   #       #####################            # ##       #  ##  ####      #######   #########
  //       ##   ##       ######         #    ################            ############## ######################     ######            
  //      ##     ##   ## #####         ## ## #########                   ############    #######################    #####            
  //     ## ##    ##  ##  ####         #  ##                                                  ##     #############   #### ##         
  //     #  ##     #      ###         ##          ########    ##########      #########       ##     ##### #########  ### ##         
  //     ##       ##      ###     #####          ##########   ###########    ###########           ######      ##########            
  //      ##   # ##       #############         ############  ############   ###########          ####            #######   ###      
  //       ##   ##   ###  ########  ####        ############  #####  #####  #####   ####       ## ####    ###               # #      
  //        ## ##    # #            ####        #####   ####  #####   ####  ####               ##  ##     # #               ###      
  //         ###     ###             ##         #####   ####  #####   ###   ####   ######                 ###                        
  //                                            ############  ##########    #####  ######                                            
  //                                            ###########      ########      ########                                              
  //                                            ########### #### ## ##### #### ######## ####                                         
  //                                            #####   ### #  # ##  #### #  # ######## #  #                                         
  //                                            #####   ### #### ##   ### #### ######## ####                                         
  //                                                                                                                                 
  //                                                                                                                                 
  //                                                                                                                                 
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0x3B, 0xFB, 0x93, 0x96, 0xF6, 0xE6, 0xEC, 0xEC, 0xEC, 0xEC, 0xCC, 0x0C, 0x6C, 0xEC, 0xEC, 0xEC, 0xEC, 0x2C, 0x2C, 0xEC, 0x8C, 0x38, 0xF0, 0x18, 0x58, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0x98, 0x38, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x30, 0xB0, 0x98, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0x98, 0xB8, 0x30, 0x70, 0x60, 0xC0, 0x80, 0x00, 0x00, 0xC0, 0xF0, 0x38, 0x98, 0xD8, 0xD8, 0xD8, 0x98, 0x30, 0x60, 0xC0, 0x60, 0x30, 0x98, 0xCC, 0xE6, 0x73, 0x39, 0x3D, 0x65, 0xE5, 0xFD, 0x01, 0xFF, 0x9E, 0x1C, 0x38, 0xF0, 0xE0, 0xC0, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
  0xFE, 0xF2, 0xF2, 0xFE, 0x02, 0x88, 0x22, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xE1, 0x0D, 0x7D, 0x4D, 0x4D, 0x7D, 0x7D, 0x7D, 0x7D, 0xFD, 0xFD, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x7C, 0x61, 0x00, 0x00, 0xE0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xC7, 0x06, 0x00, 0xFF, 0xE0, 0x78, 0x1E, 0xC7, 0xF1, 0xFC, 0xFE, 0xFF, 0xFF, 0x7F, 0x1F, 0x07, 0x03, 0x01, 0x01, 0x01, 0x81, 0xE3, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xFE, 0x38, 0x03, 0x3F, 0x8F, 0xE3, 0xF8, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xE4, 0xE6, 0xFF, 0x3F, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x88, 0x22, 0x88, 0x22, 0x00, 0xFE, 0xF2, 0xF2, 0xFE, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF8, 0xE2, 0x88, 0x20, 0x83, 0x1F, 0xFF, 0x8F, 0x83, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0xE0, 0xF8, 0xE0, 0x83, 0x0F, 0x3F, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFE, 0xF8, 0xE0, 0x80, 0x38, 0xFF, 0xFF, 0xFE, 0xE0, 0x0F, 0xFF, 0x3F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFD, 0xFD, 0xFD, 0x7D, 0x7D, 0x7C, 0x79, 0x73, 0x61, 0x0C, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x1F, 0x07, 0x07, 0x07, 0x07, 0x07, 0xC7, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0x3F, 0x0F, 0x03, 0x00, 0xE0, 0xF8, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x0F, 0x07, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x20, 0x88, 0x22, 0x08, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x4F, 0x49, 0x49, 0x4F, 0x4F, 0x4F, 0xCF, 0xCF, 0x6E, 0x28, 0x62, 0xC8, 0xC2, 0x48, 0x42, 0x48, 0x02, 0x08, 0x03, 0x1E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x38, 0x08, 0x03, 0x02, 0x02, 0x03, 0x03, 0x01, 0x01, 0xC1, 0x70, 0x1F, 0x07, 0x3F, 0xFF, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0x60, 0x66, 0x66, 0x60, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x70, 0x7C, 0x7C, 0xFC, 0x80, 0x83, 0x83, 0x83, 0x83, 0x82, 0x82, 0x83, 0x83, 0x80, 0x80, 0x80, 0xE0, 0x38, 0xF8, 0xE0, 0x80, 0x80, 0x80, 0x80, 0x82, 0x8E, 0xB8, 0xE0, 0x80, 0x80, 0xE1, 0xC1, 0x80, 0x80, 0xC0, 0xE0, 0xC3, 0xC3, 0x87, 0x84, 0x0C, 0x0F, 0x00, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x02, 0x48, 0x42, 0x48, 0x4F, 0x4F, 0x4F, 0x49, 0x49, 0x4F, 
  0x00, 0x00, 0x00, 0x00, 0x0E, 0x1B, 0x31, 0x66, 0xC6, 0x80, 0xD0, 0x60, 0x31, 0x1B, 0x0E, 0x00, 0xE0, 0xA3, 0xE3, 0x00, 0x01, 0x3F, 0x3F, 0x3F, 0x33, 0x30, 0x30, 0x30, 0x30, 0x18, 0x18, 0x78, 0xF8, 0xFC, 0x67, 0x01, 0x00, 0x03, 0x03, 0x00, 0x01, 0x01, 0x01, 0xF1, 0xF9, 0xFD, 0xFD, 0xFD, 0x3D, 0x3C, 0x3C, 0xFC, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x1C, 0x1C, 0x3C, 0xFC, 0xFC, 0xF8, 0x71, 0x01, 0x01, 0xE1, 0xF9, 0xFD, 0xFD, 0x3D, 0x1D, 0x1D, 0x9D, 0xBD, 0xBC, 0xBC, 0xB8, 0x80, 0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x67, 0x61, 0x01, 0x31, 0x79, 0x79, 0x3F, 0x0F, 0x0F, 0x0F, 0x07, 0xE3, 0xA7, 0xE7, 0x07, 0x07, 0x0F, 0x0E, 0x0E, 0x1C, 0x1C, 0x19, 0x1B, 0x1F, 0x1F, 0x1F, 0x00, 0x06, 0x06, 0x70, 0x50, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x07, 0x07, 0x07, 0x1F, 0x1F, 0x1F, 0x01, 0x1C, 0x14, 0x15, 0x1D, 0x01, 0x1F, 0x1F, 0x03, 0x07, 0x0F, 0x1F, 0x1F, 0x1E, 0x00, 0x1C, 0x14, 0x15, 0x1D, 0x01, 0x1F, 0x1F, 0x1E, 0x1E, 0x1F, 0x1F, 0x1F, 0x1F, 0x01, 0x1D, 0x14, 0x14, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

PROGMEM const unsigned char qrcode[] = {
// width, height, 64, 64,
0xFF, 0xFF, 0xFF, 0x07, 0x07, 0xE7, 0xE7, 0x67, 0x67, 0x67, 0x67, 0x67, 0x67, 0xE7, 0xE7, 0x07, 0x07, 0xFF, 0xFF, 0x1F, 0x1F, 0x67, 0x67, 0x7F, 0x7F, 0x1F, 0x1F, 0x07, 0x07, 0xE7, 0xE7, 0xE7, 0xE7, 0x07, 0x07, 0x9F, 0x9F, 0x7F, 0x7F, 0x87, 0x87, 0x67, 0x67, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x07, 0xE7, 0xE7, 0x67, 0x67, 0x67, 0x67, 0x67, 0x67, 0xE7, 0xE7, 0x07, 0x07, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x7F, 0x7F, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7F, 0x7F, 0x00, 0x00, 0xFF, 0xFF, 0x06, 0x06, 0x98, 0x98, 0x78, 0x78, 0x98, 0x98, 0x7E, 0x7E, 0x87, 0x87, 0x79, 0x79, 0x86, 0x86, 0x7F, 0x7F, 0x86, 0x86, 0x07, 0x07, 0x98, 0x98, 0x79, 0x79, 0xFF, 0xFF, 0x00, 0x00, 0x7F, 0x7F, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7F, 0x7F, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x66, 0x66, 0x86, 0x86, 0x7E, 0x7E, 0xE6, 0xE6, 0x7E, 0x7E, 0x1E, 0x1E, 0x66, 0x66, 0xE7, 0xE7, 0x98, 0x98, 0x79, 0x79, 0x06, 0x06, 0x9F, 0x9F, 0xF8, 0xF8, 0x67, 0x67, 0xE6, 0xE6, 0xE1, 0xE1, 0x06, 0x06, 0x19, 0x19, 0xF8, 0xF8, 0x61, 0x61, 0x18, 0x18, 0x1F, 0x1F, 0x86, 0x86, 0xE6, 0xE6, 0x66, 0x66, 0x1E, 0x1E, 0x66, 0x66, 0x66, 0x66, 0x9E, 0x9E, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x9E, 0x9E, 0x61, 0x61, 0x18, 0x18, 0x67, 0x67, 0x60, 0x60, 0x06, 0x06, 0x66, 0x66, 0xE1, 0xE1, 0x19, 0x19, 0xFE, 0xFE, 0x9E, 0x9E, 0x9F, 0x9F, 0x07, 0x07, 0x80, 0x80, 0x7F, 0x7F, 0xF9, 0xF9, 0xE6, 0xE6, 0x66, 0x66, 0x7F, 0x7F, 0x86, 0x86, 0x66, 0x66, 0x86, 0x86, 0x67, 0x67, 0x61, 0x61, 0xFE, 0xFE, 0xE0, 0xE0, 0x18, 0x18, 0x60, 0x60, 0x67, 0x67, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x67, 0x67, 0xE6, 0xE6, 0xF8, 0xF8, 0x18, 0x18, 0x78, 0x78, 0x60, 0x60, 0x66, 0x66, 0x01, 0x01, 0x7E, 0x7E, 0xFF, 0xFF, 0x99, 0x99, 0xE7, 0xE7, 0xF8, 0xF8, 0x61, 0x61, 0x86, 0x86, 0xF9, 0xF9, 0x01, 0x01, 0x60, 0x60, 0x18, 0x18, 0xE7, 0xE7, 0x60, 0x60, 0x07, 0x07, 0x9E, 0x9E, 0x7E, 0x7E, 0xF9, 0xF9, 0x61, 0x61, 0xFE, 0xFE, 0x60, 0x60, 0x1E, 0x1E, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x66, 0x66, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x66, 0x66, 0x78, 0x78, 0x66, 0x66, 0xE6, 0xE6, 0x18, 0x18, 0x81, 0x81, 0xFF, 0xFF, 0x01, 0x01, 0x07, 0x07, 0x18, 0x18, 0x67, 0x67, 0xE7, 0xE7, 0x06, 0x06, 0xF8, 0xF8, 0x78, 0x78, 0xF9, 0xF9, 0x06, 0x06, 0xE6, 0xE6, 0x61, 0x61, 0xE6, 0xE6, 0x07, 0x07, 0xFE, 0xFE, 0x87, 0x87, 0x18, 0x18, 0x98, 0x98, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0x00, 0x00, 0xFF, 0xFF, 0x9E, 0x9E, 0x81, 0x81, 0x01, 0x01, 0x00, 0x00, 0xF8, 0xF8, 0x18, 0x18, 0x06, 0x06, 0xF9, 0xF9, 0xE6, 0xE6, 0x67, 0x67, 0xE6, 0xE6, 0x9F, 0x9F, 0xE0, 0xE0, 0x87, 0x87, 0x86, 0x86, 0xE7, 0xE7, 0x00, 0x00, 0x07, 0x07, 0x79, 0x79, 0x98, 0x98, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xE7, 0xE7, 0xE6, 0xE6, 0xE6, 0xE6, 0xE6, 0xE6, 0xE7, 0xE7, 0xE0, 0xE0, 0xFF, 0xFF, 0xE1, 0xE1, 0xE7, 0xE7, 0xFE, 0xFE, 0xF8, 0xF8, 0xE7, 0xE7, 0xE6, 0xE6, 0xFE, 0xFE, 0xE1, 0xE1, 0xF9, 0xF9, 0xE0, 0xE0, 0xF9, 0xF9, 0xF9, 0xF9, 0xE1, 0xE1, 0xE7, 0xE7, 0xF9, 0xF9, 0xE7, 0xE7, 0xE0, 0xE0, 0xFE, 0xFE, 0xFE, 0xFE, 0xE1, 0xE1, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF

};

const unsigned char PROGMEM info_bitmap[] = //96,24
{
  //                         ####################################  ###########                       
  //                         #   ##    #    #    #     #    #   ## #    # ## #                       
  //                         # #### ## # #### ## ### ### #### ## # # ## # ## #                       
  //                         # #  # ## #   ## ## # # # #   ## ## # # # ##    #                       
  //                         # ####   ## ####    # # # # #### ## # # ## ### ##                       
  //                         #    # ## #    # ## # # # #    #   ## #    # # #                        
  //                         ##################### ### ##########  ###### ###                        
  //                                                                                                 
  //       ###### ################## #############  ###  ##########  ### #######################     
  //       #    # #    # #    # ## # #   ##    # #  # #  #    #   ## # # # #    # ## #   ##    #     
  //       # ## # # #### # #### ## # # #### ## # #  # #  # #### ## # # # # # ## #  # # ## # ## #     
  //       # ## # #   ## #    #    # # #  # ## # #  # #  #   ## ## # # ### # ## # #  # ## # ## #     
  //       #    # # #### #### # ## # # ####    # #### #### #### ## # # # # #    # ## # ## #    #     
  //       # ## # # #  # #    # ## # #    # ## #    #    #    #   ## #  #  # ## # ## #   ## ## #     
  //       ###### ###  ############# ##############################  ###########################     
  //                                                                                                 
  //  ###############  ###################### ###################### ################################
  //  #    # ## #   ## #  #  #    # ## # ## # #  #  #    # ## # ## # #    #     # ## #    #    #    #
  //  # ## #  # # ## # # # # # ## #  # # ## # # # # # ## #  # # ## # # ## ### ### ## # #### ## # ####
  //  # ## # #  # ## # # # # # ## # #  #    # # # # # ## # #  #    # # ## # # # #    #   ## ## #    #
  //  #    # ## # ## # # ### #    # ## ### ## # ### #    # ## ### ## # ## # # # # ## # ####   ##### #
  //  # ## # ## #   ## # # # # ## # ## # # #  # # # # ## # ## # # #  #    # # # # ## #    # ## #    #
  //  ###############  ### ############# ###  ### ############# ###  ###### ### #####################
  //                                                                                                 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x41, 0x5D, 0x55, 0x57, 0x7F, 0x41, 0x6D, 0x6D, 0x51, 0x7F, 0x41, 0x55, 0x55, 0x5D, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x05, 0x7D, 0x41, 0x7D, 0x05, 0x7F, 0x41, 0x55, 0x55, 0x5D, 0x7F, 0x41, 0x5D, 0x5D, 0x63, 0x3E, 0x00, 0x7F, 0x41, 0x5D, 0x55, 0x49, 0x7F, 0x11, 0x77, 0x47, 0x71, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x00, 0x7F, 0x41, 0x75, 0x15, 0x1D, 0x7F, 0x41, 0x7F, 0x51, 0x55, 0x55, 0x45, 0x7F, 0x41, 0x77, 0x77, 0x41, 0x7F, 0x00, 0x7F, 0x41, 0x5D, 0x55, 0x57, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x41, 0x5F, 0x50, 0x50, 0x7F, 0x41, 0x5F, 0x50, 0x50, 0x7F, 0x41, 0x55, 0x55, 0x5D, 0x7F, 0x41, 0x5D, 0x5D, 0x63, 0x3E, 0x00, 0x7F, 0x41, 0x5F, 0x68, 0x5F, 0x41, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x41, 0x5D, 0x5D, 0x63, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x41, 0x5D, 0x5D, 0x63, 0x3E, 0x00, 0x7F, 0x41, 0x7D, 0x13, 0x7D, 0x41, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x11, 0x77, 0x47, 0x71, 0x1F, 0x00, 0x7F, 0x41, 0x7D, 0x13, 0x7D, 0x41, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x41, 0x7B, 0x77, 0x41, 0x7F, 0x11, 0x77, 0x47, 0x71, 0x1F, 0x00, 0x7F, 0x41, 0x5D, 0x5D, 0x41, 0x7F, 0x05, 0x7D, 0x41, 0x7D, 0x05, 0x7F, 0x41, 0x77, 0x77, 0x41, 0x7F, 0x41, 0x55, 0x55, 0x5D, 0x7F, 0x41, 0x6D, 0x6D, 0x51, 0x7F, 0x51, 0x55, 0x55, 0x45, 0x7F, 
};


PROGMEM const unsigned char titleScreen[] = {
// width, height 128, 64,
0x00, 0x00, 0x00, 0xF0, 0xE0, 0x80, 0x00, 0x18, 0x18, 0x00, 0x00, 0x40, 0x00, 0x00, 0xE0, 0xF0, 0xD0, 0x90, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x40, 0xE0, 0xB0, 0xF0, 0x50, 0x70, 0x30, 0x18, 0x18, 0x18, 0x48, 0x64, 0x64, 0x64, 0x72, 0x72, 0xF2, 0xC2, 0x82, 0x3C, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x1C, 0x08, 0x00, 0x00, 0x98, 0x18, 0x00, 0x00, 0x30, 0x78, 0x68, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x07, 0x2F, 0x7E, 0x78, 0xE0, 0xC0, 0x00, 0x00, 0x40, 0x80, 0x80, 0xC1, 0x61, 0xF1, 0xB8, 0xEC, 0x7E, 0x3A, 0x9F, 0x0D, 0x27, 0xC3, 0xF1, 0x39, 0x0C, 0xC6, 0xF2, 0x39, 0x0C, 0xC6, 0xF3, 0x39, 0x0C, 0xC6, 0xE3, 0xF1, 0xF8, 0x7C, 0xBE, 0xDE, 0xDE, 0x5F, 0x5F, 0xBE, 0x78, 0x39, 0xC2, 0x46, 0x9C, 0x3C, 0xE8, 0xF8, 0xE8, 0xF8, 0xAC, 0xFC, 0x54, 0xFC, 0x54, 0xFC, 0xD8, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x1F, 0x1D, 0x19, 0x0E, 0x80, 
0x60, 0xF0, 0x50, 0xF8, 0x58, 0xF0, 0xC1, 0x05, 0x0D, 0x4F, 0x4F, 0x4E, 0x4C, 0x59, 0xF1, 0xE3, 0xE7, 0x67, 0x63, 0x70, 0x04, 0xE1, 0xF8, 0x1E, 0x07, 0xE1, 0xF8, 0x1E, 0x07, 0xE1, 0xF8, 0x1E, 0x07, 0xE1, 0xF8, 0xFC, 0xFF, 0xFF, 0xFF, 0x7F, 0xBF, 0xB8, 0xB7, 0xAF, 0xAC, 0xAC, 0xAD, 0xB7, 0x58, 0x5C, 0x5B, 0x9A, 0x8A, 0x00, 0x61, 0xFF, 0xFF, 0x0F, 0xF7, 0xFB, 0xFD, 0xFD, 0xFD, 0xF5, 0xE4, 0xC8, 0xF0, 0x08, 0xAC, 0xFC, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0xF7, 0x5D, 
0xFD, 0xE3, 0xDD, 0xBE, 0x3A, 0x32, 0x1D, 0x40, 0xD0, 0xF2, 0x7A, 0x1E, 0x8E, 0xC7, 0xE3, 0xF1, 0x98, 0x6C, 0x6E, 0x9C, 0xF0, 0xE3, 0xCF, 0x40, 0x00, 0x8F, 0xDF, 0xD0, 0xC0, 0xCF, 0xDF, 0xD0, 0xC0, 0x8F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFB, 0xF4, 0xE8, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0x50, 0xA8, 0x08, 0x87, 0x60, 0x78, 0x7F, 0x3F, 0x3E, 0x1D, 0x9B, 0x17, 0x37, 0x37, 0x77, 0x77, 0x7B, 0x3D, 0x3C, 0x3F, 0x3A, 0x3F, 0x3D, 0x3F, 0x7A, 0x7E, 0xD4, 0xFC, 0xAC, 0xF8, 0xA8, 0xF8, 0xD8, 0x70, 0x4E, 0x5F, 0x5D, 0x59, 0x6E, 0x60, 0x70, 0xD0, 0xF0, 0x50, 0xB8, 0xC9, 0x5F, 0x56, 0xBC, 0x54, 0xFC, 0xA8, 0xF8, 0xB0, 0xE0, 0xA0, 0xE0, 0x40, 0xC0, 0x40, 0xC0, 0x40, 0x80, 0x7C, 0xFE, 0xFF, 0xFF, 0xFF, 0xFD, 0xF9, 0xF2, 0x7C, 0x80, 0x58, 0xF8, 0xA8, 0xFC, 0x57, 0xFD, 
0x7F, 0x3F, 0x1F, 0x83, 0x40, 0xA4, 0xA3, 0xD3, 0xD3, 0xD0, 0xD0, 0xD2, 0xD3, 0x23, 0xA3, 0xD3, 0xF1, 0x89, 0x01, 0x71, 0x79, 0xF9, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0x07, 0xF8, 0xFD, 0xFE, 0xFE, 0xFE, 0xFA, 0xF2, 0xE5, 0xFB, 0x07, 0xC7, 0xCB, 0x4D, 0xCE, 0x9F, 0x9F, 0x98, 0x80, 0x84, 0x78, 0x04, 0xFA, 0xFD, 0x9D, 0x6E, 0x6D, 0x9D, 0xFA, 0x04, 0x08, 0xFC, 0xC2, 0x3D, 0xFD, 0xFD, 0xFD, 0xFD, 0xFA, 0x72, 0x0C, 0x08, 0x70, 0x41, 0x21, 0x91, 0xE8, 0xF4, 0xF4, 0xFA, 0xFA, 0xFA, 0xFA, 0x3A, 0xDA, 0xD4, 0x34, 0xE8, 0xC8, 0xAB, 0x67, 0xF7, 0xF6, 0xEB, 0xE8, 0xE9, 0xE9, 0xD3, 0x23, 0x53, 0xD1, 0xE9, 0xE9, 0x69, 0xA9, 0xA9, 0x69, 0xD3, 0xA2, 0x26, 0xA5, 0xA5, 0x45, 0x8D, 0x45, 0xA6, 0xA6, 0xA7, 0xA5, 0x47, 0x8E, 0x1F, 0x35, 0x7F, 
0xC0, 0x80, 0x1F, 0x20, 0x1F, 0x4F, 0xC7, 0x03, 0xFF, 0xFF, 0xE3, 0x07, 0xC1, 0xFE, 0x3F, 0xC7, 0xFF, 0xFF, 0xC1, 0xC2, 0xFE, 0xFC, 0xFC, 0xFC, 0x04, 0xFC, 0xFC, 0xFC, 0x3C, 0x0C, 0xC4, 0x26, 0x13, 0x17, 0xE7, 0x1E, 0x05, 0xFB, 0xFB, 0xFB, 0xFB, 0x7B, 0x01, 0x00, 0xF8, 0xE7, 0x1F, 0xC0, 0xFF, 0xFF, 0xFF, 0x3F, 0x01, 0x80, 0x7C, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0xBC, 0x83, 0xE3, 0xFC, 0xC3, 0xFF, 0x83, 0x7D, 0xFE, 0xFF, 0xFF, 0xFF, 0xFD, 0xF9, 0xF2, 0x7D, 0x83, 0xFF, 0xFF, 0xFE, 0xC1, 0xB9, 0xE9, 0x8B, 0x52, 0x66, 0xAF, 0xCF, 0x07, 0xC3, 0xE0, 0xFF, 0xFF, 0x03, 0x07, 0xEF, 0x0F, 0xCF, 0xC3, 0xC0, 0xC3, 0x83, 0x63, 0x52, 0x55, 0x55, 0xEE, 0x07, 0x43, 0xE0, 0xF0, 0xFF, 0xC0, 0xC0, 0xA0, 0xDF, 0xFF, 0xFF, 0xC1, 0x00, 0x78, 0x87, 0x00, 0x30, 
0xFF, 0xFF, 0x3F, 0xC3, 0xE0, 0xF0, 0xF7, 0xF0, 0xD7, 0x97, 0x2F, 0xC6, 0x00, 0x63, 0x9C, 0x7F, 0x7F, 0x7F, 0x01, 0x39, 0xFB, 0x47, 0x3E, 0xDE, 0xE8, 0xA7, 0x2F, 0xDF, 0x3E, 0xF8, 0xF7, 0xF4, 0xF4, 0xFB, 0x7C, 0x7F, 0x20, 0x1F, 0xBF, 0x7F, 0xFF, 0xFC, 0x78, 0x77, 0x74, 0xFB, 0xE0, 0xDF, 0xBF, 0xFF, 0xFF, 0xF8, 0xF0, 0xF7, 0xF4, 0xF4, 0x3B, 0xDA, 0xD9, 0x3B, 0xFB, 0xF7, 0x07, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x03, 0xE3, 0x11, 0x10, 0x89, 0xC5, 0xE1, 0x01, 0x01, 0xFC, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0x07, 0xE7, 0x23, 0x51, 0xB0, 0x7D, 0x7D, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x78, 0x78, 0x3B, 0x0D, 0x74, 0xF8, 0xE9, 0xC9, 0x71, 0x0B, 0x7B, 0x7F, 0x3F, 0x3E, 0x01, 0x80, 0xBF, 0x3F, 0x3F, 0x39, 0x01, 0xC1, 0xB9, 0x3F, 0x3F, 0x1F, 0x00, 0x80, 0x7F, 0x00, 0x00, 
0xFF, 0xFF, 0xF8, 0xF7, 0xEF, 0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 0xEF, 0xF7, 0xF8, 0xFC, 0xF8, 0xF9, 0xF1, 0xF2, 0xF2, 0xF1, 0x98, 0x6C, 0x68, 0x99, 0xF3, 0xF3, 0xF3, 0xF1, 0xF0, 0xF2, 0xE2, 0xE4, 0xE4, 0xE4, 0xE4, 0xE4, 0xE2, 0xF1, 0xF0, 0xF1, 0xE0, 0xEE, 0xDF, 0xDD, 0xD9, 0xCE, 0xC1, 0xC9, 0xC9, 0xC8, 0xC5, 0xC9, 0xC9, 0x8B, 0x93, 0x93, 0x93, 0x92, 0x92, 0x93, 0x91, 0x91, 0x88, 0xC5, 0xCB, 0x8B, 0x93, 0x93, 0x91, 0x90, 0x89, 0xC6, 0xE0, 0xC0, 0xBB, 0x7D, 0x74, 0x64, 0xB8, 0xC1, 0xE4, 0xC5, 0xC9, 0xC9, 0xC8, 0xC8, 0xC4, 0xE3, 0xF0, 0xF8, 0xF1, 0xF2, 0xE2, 0xE4, 0xE4, 0xE4, 0xE4, 0xE4, 0xE4, 0xE2, 0xF2, 0x91, 0x68, 0x68, 0x90, 0xF2, 0xF2, 0xF2, 0xF2, 0xF2, 0xF2, 0xF9, 0xF8, 0xF8, 0xF9, 0xF9, 0xF9, 0xF9, 0xF0, 0xEE, 0xDF, 0xDD, 0xD9, 0xEE, 0xF0, 0xFC, 0xFE, 0xFF,
};

PROGMEM const unsigned char titleMenu[] = {
// width, height 49, 24,
0x7F, 0x41, 0x77, 0x77, 0x41, 0x7F, 0x41, 0x55, 0x55, 0x5D, 0x7F, 0x41, 0x5F, 0x50, 0x50, 0x7F, 0x41, 0x75, 0x15, 0x11, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x41, 0x75, 0x15, 0x11, 0x7F, 0x41, 0x5F, 0x50, 0x50, 0x7F, 0x41, 0x6D, 0x6D, 0x41, 0x7F, 0x11, 0x77, 0x47, 0x71, 0x1F, 0x00, 
0x70, 0xD0, 0x10, 0xD0, 0xF0, 0x10, 0xB0, 0x60, 0xF0, 0x10, 0xF0, 0x10, 0x50, 0x50, 0xD0, 0xF0, 0x10, 0xD0, 0xD0, 0x10, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x10, 0xD0, 0x50, 0x70, 0xF0, 0x10, 0xD0, 0xD0, 0x10, 0xF0, 0x10, 0xB0, 0x60, 0xF0, 0x10, 0xF0, 0x10, 0x50, 0x50, 0xD0, 0x70, 
0x07, 0x05, 0x04, 0x05, 0x07, 0x04, 0x07, 0x03, 0x06, 0x04, 0x07, 0x04, 0x07, 0x01, 0x01, 0x07, 0x04, 0x05, 0x05, 0x04, 0x07, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x04, 0x05, 0x05, 0x05, 0x07, 0x04, 0x05, 0x05, 0x04, 0x07, 0x04, 0x07, 0x03, 0x06, 0x04, 0x07, 0x04, 0x07, 0x01, 0x01, 0x00
};

PROGMEM const unsigned char soundMenu[] = {
// width, height 33, 24,
0x00, 0x00, 0x00, 0x7F, 0x51, 0x55, 0x55, 0x45, 0x7F, 0x41, 0x5D, 0x5D, 0x41, 0x7F, 0x41, 0x5F, 0x5F, 0x41, 0x7F, 0x41, 0x7B, 0x36, 0x6F, 0x41, 0x7F, 0x41, 0x5D, 0x5D, 0x63, 0x3E, 0x00, 0x00, 0x00, 
0xF8, 0x08, 0xE8, 0xE8, 0x08, 0xF8, 0x08, 0xA8, 0xA8, 0xE8, 0xF8, 0x08, 0xA8, 0xA8, 0xE8, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x08, 0xE8, 0xE8, 0x08, 0xF8, 0x08, 0xD8, 0xB0, 0x78, 0x08, 0xF8, 
0x03, 0x02, 0x02, 0x02, 0x02, 0x03, 0x02, 0x03, 0x00, 0x00, 0x03, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x03, 0x02, 0x03, 0x01, 0x03, 0x02, 0x03
};


PROGMEM const unsigned char bubbles_plus_mask[] = {
// width, height
21, 8,
// frame 0
0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0x80, 0xC1, 0x01, 0x83, 0x00, 0x21, 0x20, 0x70, 0x00, 0x20, 0x00, 0x00, 0x00, 0x80, 0x00, 
0x84, 0x04, 0x0E, 0x00, 0x04, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0x00, 0x80, 0x00, 0x18, 0x18, 0x3C, 0x18, 0x3C, 0x00, 0x18, 

// frame 1
0x00, 0x00, 0x00, 0xC0, 0xC0, 0xE0, 0xC0, 0xE0, 0x00, 0xC1, 0x00, 0x10, 0x10, 0x38, 0x00, 0x10, 0x00, 0x80, 0x80, 0xC0, 0x80, 
0xC2, 0x02, 0x87, 0x00, 0x02, 0x00, 0x00, 0x00, 0x40, 0x40, 0xE0, 0x00, 0x40, 0x00, 0x0C, 0x0C, 0x1E, 0x0C, 0x1E, 0x00, 0x0C, 

// frame 2
0x00, 0x00, 0x00, 0x60, 0x60, 0xF0, 0x60, 0xF0, 0x00, 0x60, 0x00, 0x08, 0x08, 0x1C, 0x00, 0x88, 0x80, 0xC0, 0xC0, 0xE0, 0x40, 
0xE1, 0x81, 0xC3, 0x00, 0x81, 0x00, 0x00, 0x00, 0x20, 0x20, 0x70, 0x00, 0x20, 0x00, 0x06, 0x06, 0x0F, 0x06, 0x8F, 0x00, 0x06, 

// frame 3
0x00, 0x00, 0x00, 0x30, 0x30, 0x78, 0x30, 0x78, 0x00, 0x30, 0x00, 0x04, 0x04, 0x0E, 0x00, 0xC4, 0xC0, 0xE0, 0xE0, 0xF0, 0xA0, 
0xF0, 0xC0, 0xE1, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x10, 0x10, 0x38, 0x00, 0x10, 0x00, 0x03, 0x03, 0x87, 0x83, 0xC7, 0x00, 0x83, 

// frame 4
0x00, 0x00, 0x00, 0x18, 0x18, 0x3C, 0x18, 0x3C, 0x00, 0x18, 0x00, 0x02, 0x02, 0x07, 0x00, 0x62, 0x60, 0xF0, 0xF0, 0xF8, 0xD0, 
0xF8, 0x60, 0xF0, 0x00, 0x60, 0x00, 0x00, 0x00, 0x08, 0x08, 0x1C, 0x00, 0x08, 0x00, 0x01, 0x01, 0x43, 0x41, 0xE3, 0x00, 0x41, 

// frame 5
0x00, 0x00, 0x00, 0x0C, 0x0C, 0x1E, 0x0C, 0x1E, 0x00, 0x8C, 0x00, 0x01, 0x01, 0x03, 0x00, 0x31, 0x30, 0x78, 0x78, 0xFC, 0x68, 
0xFC, 0x30, 0x78, 0x00, 0x30, 0x00, 0x00, 0x00, 0x04, 0x04, 0x0E, 0x00, 0x04, 0x00, 0x00, 0x00, 0x21, 0x20, 0x71, 0x00, 0x20, 

// frame 6
0x00, 0x00, 0x00, 0x06, 0x06, 0x0F, 0x06, 0x8F, 0x80, 0xC6, 0x00, 0x80, 0x00, 0x01, 0x00, 0x18, 0x18, 0x3C, 0x3C, 0x7E, 0x34, 
0x7E, 0x18, 0x3C, 0x00, 0x18, 0x00, 0x00, 0x00, 0x02, 0x02, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x10, 0x38, 0x00, 0x10, 

// frame 7
0x00, 0x00, 0x00, 0x03, 0x03, 0x07, 0x03, 0x47, 0x40, 0xE3, 0x00, 0x40, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x1E, 0x1E, 0x3F, 0x1A, 
0x3F, 0x0C, 0x9E, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x08, 0x1C, 0x00, 0x08, 

// frame 8
0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x01, 0x23, 0x20, 0x71, 0x00, 0x20, 0x00, 0x00, 0x00, 0x06, 0x06, 0x0F, 0x0F, 0x1F, 0x0D, 
0x9F, 0x86, 0xCF, 0x00, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x04, 0x8E, 0x00, 0x04, 

// frame 9
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x11, 0x10, 0x38, 0x00, 0x10, 0x00, 0x00, 0x00, 0x03, 0x03, 0x07, 0x07, 0x0F, 0x06, 
0x4F, 0x43, 0xE7, 0x00, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC2, 0x82, 0xC7, 0x00, 0x82, 

// frame 10
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x1C, 0x00, 0x08, 0x00, 0x80, 0x00, 0x01, 0x01, 0x03, 0x03, 0x07, 0x03, 
0x27, 0x21, 0x73, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xE1, 0xC1, 0xE3, 0x00, 0xC1, 

// frame 11
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x0E, 0x00, 0x84, 0x80, 0xC0, 0x00, 0x80, 0x00, 0x01, 0x01, 0x03, 0x01, 
0x13, 0x10, 0x39, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0xF0, 0x60, 0xF1, 0x00, 0x60, 

// frame 12
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x82, 0x02, 0x07, 0x00, 0x42, 0x40, 0xE0, 0x00, 0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 
0x09, 0x08, 0x1C, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x30, 0x30, 0x78, 0x30, 0x78, 0x00, 0x30, 
};

PROGMEM const unsigned char gameOver[] = {
// width, height
//118, 24,
0xE0, 0x10, 0xE8, 0xF4, 0xFA, 0xFA, 0x7D, 0x3D, 0x7D, 0xFD, 0xFD, 0xFA, 0xFA, 0x34, 0xC8, 0xF4, 0xFA, 0xFA, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFA, 0xF4, 0xEC, 0x02, 0xFA, 0xFD, 0xFD, 0xFD, 0xFA, 0x04, 0x38, 0xFC, 0x02, 0xFD, 0xFD, 0xFD, 0xFD, 0x0A, 0x74, 0xFA, 0xFA, 0xFD, 0x3D, 0x3D, 0x7D, 0x7D, 0xFD, 0xFA, 0xFA, 0xF4, 0x08, 0x10, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x30, 0xC8, 0xF4, 0xFA, 0xFA, 0xFD, 0xFD, 0x7D, 0x7D, 0xFD, 0xFA, 0xF4, 0xEC, 0xD2, 0x3D, 0xFD, 0xFD, 0xFA, 0xF4, 0x0E, 0xE1, 0x1D, 0xFD, 0xFA, 0xFA, 0xF4, 0xF4, 0x04, 0x0A, 0x8A, 0xFD, 0x3D, 0x3D, 0x7D, 0x7D, 0xFD, 0xFA, 0xFA, 0xF4, 0x0A, 0x1A, 0xFD, 0x3D, 0x3D, 0x3D, 0xFD, 0xFD, 0xFA, 0xFA, 0xF4, 0xE8, 0x10, 0x60, 0x80, 
0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x1C, 0xE4, 0xEB, 0xE7, 0xF7, 0xE7, 0x00, 0xFF, 0xFF, 0xFF, 0xC7, 0x81, 0x70, 0x48, 0x79, 0x87, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFB, 0xE7, 0x1F, 0xBF, 0x78, 0x71, 0x3E, 0x0F, 0xF3, 0xFF, 0xFF, 0x0F, 0xF0, 0xFF, 0xFF, 0xFF, 0x78, 0x78, 0x7B, 0x32, 0x0E, 0x0D, 0x7D, 0x49, 0x88, 0x88, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x83, 0x01, 0xF0, 0x08, 0x84, 0x7C, 0x81, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0x03, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0xFF, 0xFF, 0x78, 0x78, 0x7B, 0x32, 0x0E, 0x0D, 0x7D, 0x49, 0xF8, 0xF8, 0xFF, 0x70, 0x70, 0x73, 0xFC, 0xFF, 0xBF, 0xBF, 0x1F, 0x87, 0x40, 0x20, 0x1F, 
0x01, 0x06, 0x09, 0x17, 0x2F, 0x4F, 0x5E, 0x9C, 0x9C, 0x9E, 0x9E, 0x8F, 0x47, 0x50, 0x2F, 0x5F, 0x9F, 0x83, 0x83, 0x73, 0x13, 0x13, 0x23, 0x5F, 0x9F, 0x8F, 0x90, 0x6F, 0x5F, 0x5F, 0x9F, 0x9E, 0x80, 0x87, 0x62, 0x5C, 0x5F, 0x9F, 0x9F, 0x9F, 0x90, 0x6F, 0x5F, 0x5F, 0x5F, 0x9C, 0x9C, 0x9C, 0x9E, 0x9E, 0x9F, 0x4F, 0x47, 0x40, 0x20, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x0B, 0x17, 0x2F, 0x5E, 0x9D, 0x9D, 0x9E, 0x9F, 0x8F, 0x47, 0x43, 0x20, 0x18, 0x16, 0x2F, 0x5F, 0x5F, 0x9E, 0x9E, 0x9F, 0x8F, 0x87, 0x43, 0x40, 0x30, 0x28, 0x5F, 0x5F, 0x5F, 0x9C, 0x9C, 0x9C, 0x9E, 0x9E, 0x9F, 0x4F, 0x47, 0x40, 0x60, 0x9F, 0x9C, 0x80, 0x4E, 0x3E, 0x11, 0x2F, 0x5F, 0x5F, 0x9E, 0x81, 0x42, 0x3C
};


#endif
