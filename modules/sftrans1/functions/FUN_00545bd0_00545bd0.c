/* Module: sftrans1.dll
   Function: FUN_00545bd0
   Address: 00545bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_00545bd0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  if (-1 < *(int *)(iVar1 + -0xc)) {
    *param_1 = iVar1;
    InterlockedIncrement((LONG *)(iVar1 + -0xc));
    return param_1;
  }
  piVar2 = (int *)FUN_00545bb0();
  *param_1 = *piVar2;
  FUN_00545f80(*param_2);
  return param_1;
}


