/* Module: vidcap30.exe
   Function: FUN_00425e50
   Address: 00425e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00425e50(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*param_1 == 8) && ((param_1[0x52] & 0x80000U) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}


