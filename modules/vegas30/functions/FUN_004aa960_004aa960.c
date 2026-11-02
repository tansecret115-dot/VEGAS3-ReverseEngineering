/* Module: vegas30.exe
   Function: FUN_004aa960
   Address: 004aa960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004aa960(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (0 < *param_1) {
    uVar1 = *(undefined4 *)(param_1[2] + -4 + *param_1 * 4);
  }
  return uVar1;
}


