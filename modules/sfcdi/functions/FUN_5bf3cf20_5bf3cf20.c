/* Module: sfcdi.dll
   Function: FUN_5bf3cf20
   Address: 5bf3cf20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3cf20(void *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int unaff_retaddr;
  
  FUN_5bf3ce50((int)param_3,(LPCSTR)0x0);
  if ((param_1 == (void *)0x0) || (param_2 == -1)) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    if ((param_3[0x13] != 0) && (iVar1 = FUN_5bf3ceb0(param_3), iVar1 < 0)) {
      return iVar1;
    }
    iVar1 = (**(code **)((int)param_1 + 8))(param_3 + 0x13,param_4);
    if (-1 < iVar1) {
      memmove(param_3 + 8,param_1,0x28);
      param_3[0x12] = unaff_retaddr;
      param_3[0x14] = param_4;
      iVar1 = FUN_5bf3ed80((int)param_3,*param_3);
      return iVar1;
    }
  }
  return iVar1;
}


