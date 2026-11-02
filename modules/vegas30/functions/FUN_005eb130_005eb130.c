/* Module: vegas30.exe
   Function: FUN_005eb130
   Address: 005eb130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005eb130(int *param_1,int *param_2,int param_3,int param_4,undefined4 *param_5,
                undefined4 *param_6)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_3;
  piVar1 = param_2;
  if (param_2 == (int *)0x0) {
    return -0x7ffcfff7;
  }
  if ((param_3 == -1) && (param_4 == 0x7fffffff)) {
    return -0x7fff0001;
  }
  FUN_0060ac30();
  if (&stack0x00000000 == (undefined1 *)0x10) {
    return -0x7ff8fff2;
  }
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&stack0xfffffff0,iVar2,&param_2);
  if (-1 < iVar2) {
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = param_2;
      param_5[1] = 0;
    }
    iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,&stack0xfffffff0,param_2,&param_1);
    if ((-1 < iVar2) && (param_6 != (undefined4 *)0x0)) {
      *param_6 = param_1;
      param_6[1] = 0;
    }
  }
  return iVar2;
}


