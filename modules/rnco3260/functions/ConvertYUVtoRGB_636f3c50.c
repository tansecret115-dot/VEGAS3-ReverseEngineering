/* Module: rnco3260.dll
   Function: ConvertYUVtoRGB
   Address: 636f3c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void ConvertYUVtoRGB(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    short param_9,short param_10)

{
  int iVar1;
  
                    /* 0x3c50  5  ConvertYUVtoRGB */
  iVar1 = param_9 + -7;
  if ((-1 < iVar1) && (iVar1 < 3)) {
    if (param_10 != 0) {
      iVar1 = param_9 + -4;
    }
    (*(code *)(&PTR_FUN_63766240)[iVar1])
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}


