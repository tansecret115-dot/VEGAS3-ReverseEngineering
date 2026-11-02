/* Module: vidcap30.exe
   Function: FUN_0042b820
   Address: 0042b820
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0042b820(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 == 7) {
    uVar1 = __aullshr();
    uVar1 = uVar1 & 1;
  }
  return uVar1;
}


