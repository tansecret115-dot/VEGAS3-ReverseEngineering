/* Module: mp3rw.dll
   Function: FUN_00475950
   Address: 00475950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 *
FUN_00475950(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 < 1) {
    return param_1;
  }
  do {
    *param_1 = 1;
    param_1[1] = iVar1;
    param_1[5] = param_3;
    param_1[6] = param_4;
    param_1[7] = param_5;
    param_1[8] = param_6;
    param_1 = param_1 + 9;
    iVar1 = iVar1 + 1;
  } while (iVar1 < param_2);
  return param_1;
}


