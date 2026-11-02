/* Module: vidcap30.exe
   Function: FUN_00424c80
   Address: 00424c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00424c80(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 == 7) {
    if (((param_1[0x52] & 4U) != 0) && ((param_1[0x52] & 0x8000U) != 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


