/* Module: extmondrv.dll
   Function: FUN_00407190
   Address: 00407190
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00407190(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,uint param_7)

{
  int *piVar1;
  int iVar2;
  LPCRITICAL_SECTION p_Var3;
  
  p_Var3 = (LPCRITICAL_SECTION)(param_1 + 0x70);
  EnterCriticalSection(p_Var3);
  if (*(int *)(param_1 + 0x3c) == 0) {
    LeaveCriticalSection(p_Var3);
    return -0x7fff0001;
  }
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = FUN_00406f40((int)piVar1,param_2);
  if (iVar2 == 0) {
    if (*(int *)(param_2 + 0x10) == 0) {
      iVar2 = (**(code **)(*piVar1 + 0x28))
                        (piVar1,(undefined4 *)(param_1 + 0x50),&param_4,param_2,param_3,param_4,
                         param_5,param_6);
      if (iVar2 < 0) goto LAB_00407262;
      param_3 = *(undefined4 *)(param_1 + 0x50);
    }
    p_Var3 = (LPCRITICAL_SECTION)0x0;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 0x40))
                      (*(int **)(param_1 + 0x48),param_3,param_4,(param_7 & 1) != 0,0,0,0,0,0,0);
    LeaveCriticalSection(p_Var3);
    return iVar2;
  }
  iVar2 = -0x7ffb2000;
LAB_00407262:
  LeaveCriticalSection(p_Var3);
  return iVar2;
}


