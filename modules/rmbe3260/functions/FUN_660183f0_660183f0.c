/* Module: rmbe3260.dll
   Function: FUN_660183f0
   Address: 660183f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660183f0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_66017d60((void *)(param_1 + -0x14),(int)param_2);
  if (iVar1 < 0) {
    return 0x80070057;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return 0;
}


