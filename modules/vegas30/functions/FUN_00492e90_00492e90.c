/* Module: vegas30.exe
   Function: FUN_00492e90
   Address: 00492e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00492e90(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 < *param_1) {
    param_1[2] = *param_1;
    *param_1 = iVar1;
  }
  iVar1 = param_1[1];
  if (param_1[3] < iVar1) {
    param_1[1] = param_1[3];
    param_1[3] = iVar1;
  }
  return;
}


