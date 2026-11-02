/* Module: rnco3260.dll
   Function: _ConvertYUVtoMacRGB32@40
   Address: 636f3ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _ConvertYUVtoMacRGB32_40
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,short param_10)

{
  code *pcVar1;
  
                    /* 0x3ca0  4  _ConvertYUVtoMacRGB32@40 */
  pcVar1 = FUN_6375dd10;
  if (param_10 == 0) {
    pcVar1 = FUN_6375db10;
  }
  (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


