/* Module: vidcap30.exe
   Function: FUN_004264b0
   Address: 004264b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004264b0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 == 8) {
    if (((param_1[0x53] & 0x40U) != 0) && ((param_1[0x53] & 0x100U) != 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


