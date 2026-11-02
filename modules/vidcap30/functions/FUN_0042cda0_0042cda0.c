/* Module: vidcap30.exe
   Function: FUN_0042cda0
   Address: 0042cda0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042cda0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 == 8) {
    if (((param_1[0x52] & 0x8000000U) != 0) && ((param_1[0x52] & 0x8000U) != 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


