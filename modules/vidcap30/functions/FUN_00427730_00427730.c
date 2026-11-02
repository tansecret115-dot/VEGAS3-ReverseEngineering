/* Module: vidcap30.exe
   Function: FUN_00427730
   Address: 00427730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00427730(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 == 8) {
    if (((param_1[0x53] & 0x40U) != 0) && ((param_1[0x53] & 0x200U) != 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


