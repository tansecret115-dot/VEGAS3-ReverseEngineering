/* Module: vfplugs.dll
   Function: FUN_00437820
   Address: 00437820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00437820(int param_1,RECT *param_2,int param_3,undefined4 *param_4,int param_5,RECT *param_6
                ,uint param_7,undefined4 *param_8,int param_9)

{
  int iVar1;
  int in_stack_00000040;
  int local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  if ((param_1 != 0) && (param_2 != (RECT *)0x0)) {
    if ((param_9 != 2) && (param_9 != 3)) {
      return -0x7fffbfff;
    }
    if ((param_5 != 0) && (param_6 != (RECT *)0x0)) {
      iVar1 = FUN_00430fa0(&local_14,&local_18,&local_10,local_c,param_1,param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,in_stack_00000040);
      if (iVar1 < 0) {
        return iVar1;
      }
      if (param_9 != 2) {
        FUN_004371c0(local_c[0],param_3,local_10,param_7,local_14,local_18);
        return 0;
      }
      return -0x7fffbfff;
    }
  }
  return -0x7fffbffd;
}


