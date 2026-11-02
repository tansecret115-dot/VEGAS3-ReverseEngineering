/* Module: extmondrv.dll
   Function: FUN_00407280
   Address: 00407280
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00407280(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,uint param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  LPCRITICAL_SECTION p_Var4;
  
  p_Var4 = (LPCRITICAL_SECTION)(param_1 + 0x70);
  EnterCriticalSection(p_Var4);
  if (*(int *)(param_1 + 0x3c) == 0) {
    LeaveCriticalSection(p_Var4);
    return -0x7fff0001;
  }
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = FUN_00406f40((int)piVar1,param_2);
  if (iVar2 != 0) {
    iVar2 = -0x7ffb2000;
LAB_00407355:
    LeaveCriticalSection(p_Var4);
    return iVar2;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))
                      (piVar1,(undefined4 *)(param_1 + 0x50),&param_4,param_2,param_3,param_4,
                       param_5,param_6);
    if (iVar2 < 0) goto LAB_00407355;
    param_3 = *(undefined4 *)(param_1 + 0x50);
  }
  uVar3 = 6;
  if ((param_7 & 1) != 0) {
    uVar3 = 7;
  }
  p_Var4 = (LPCRITICAL_SECTION)0x0;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 0x40))
                    (*(int **)(param_1 + 0x48),param_3,param_4,uVar3,0,0,0,0,0,0);
  LeaveCriticalSection(p_Var4);
  return iVar2;
}


