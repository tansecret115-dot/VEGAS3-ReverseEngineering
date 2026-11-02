/* Module: vegas30.exe
   Function: FUN_004aa940
   Address: 004aa940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004aa940(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (-1 < param_2) {
    if (param_2 < *param_1) {
      uVar1 = *(undefined4 *)(param_1[2] + param_2 * 4);
    }
  }
  return uVar1;
}


