/* Module: vidcap30.exe
   Function: FUN_004261a0
   Address: 004261a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004261a0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*param_1 == 8) && ((param_1[0x52] & 0x400000U) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}


