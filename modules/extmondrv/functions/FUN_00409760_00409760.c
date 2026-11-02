/* Module: extmondrv.dll
   Function: FUN_00409760
   Address: 00409760
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00409760(void *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 != 1) {
    if (param_2 == 0) {
      *(undefined4 *)((int)param_1 + 0x20) = 0;
      iVar1 = FUN_00409a40((int)param_1);
      return iVar1;
    }
    return -0x7fff0001;
  }
  if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
    *(undefined4 *)((int)param_1 + 0x20) = 1;
    iVar1 = FUN_004099e0(param_1,(undefined4 *)*param_3);
    return iVar1;
  }
  return -0x7fffbffd;
}


