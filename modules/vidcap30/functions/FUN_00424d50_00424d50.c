/* Module: vidcap30.exe
   Function: FUN_00424d50
   Address: 00424d50
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00424d50(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 == 7) {
    uVar1 = __aullshr();
    uVar1 = uVar1 & 1;
  }
  return uVar1;
}


