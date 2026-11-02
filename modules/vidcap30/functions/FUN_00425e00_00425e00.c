/* Module: vidcap30.exe
   Function: FUN_00425e00
   Address: 00425e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00425e00(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 == 8) {
    if (((param_1[0x52] & 0x100000U) != 0) && ((param_1[0x52] & 0x200000U) != 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


