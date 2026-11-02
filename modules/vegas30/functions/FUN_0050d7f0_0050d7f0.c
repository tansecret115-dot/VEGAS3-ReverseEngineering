/* Module: vegas30.exe
   Function: FUN_0050d7f0
   Address: 0050d7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050d7f0(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  
  if (((DAT_00647e50 == 0) && ((*(uint *)(param_3 + 4) & 0x1000) != 0)) ||
     ((*(int *)(param_3 + 0x80) == 0 && (*(int *)(param_3 + 0x84) == 0x3ff00000)))) {
    iVar1 = ftol();
  }
  else {
    iVar1 = ftol();
  }
  *param_1 = iVar1 + *param_4;
  iVar1 = ftol();
  param_1[1] = iVar1 + param_4[1];
  return 1;
}


