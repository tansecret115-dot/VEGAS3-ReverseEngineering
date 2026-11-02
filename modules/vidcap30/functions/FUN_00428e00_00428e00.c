/* Module: vidcap30.exe
   Function: FUN_00428e00
   Address: 00428e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00428e00(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 == 8) {
    if (((param_1[0x52] & 0x8000000U) != 0) && ((param_1[0x52] & 0x10000000U) != 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


