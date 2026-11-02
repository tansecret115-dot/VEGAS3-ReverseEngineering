/* Module: sftrans1.dll
   Function: FUN_00545f20
   Address: 00545f20
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_00545f20(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (iVar1 != iVar2) {
    if (((*(int *)(iVar1 + -0xc) < 0) && ((undefined *)(iVar1 + -0xc) != PTR_DAT_005771f8)) ||
       (*(int *)(iVar2 + -0xc) < 0)) {
      FUN_00545ee0(*(undefined4 *)(iVar2 + -8),iVar2);
      return param_1;
    }
    FUN_00545c60();
    iVar1 = *param_2;
    *param_1 = iVar1;
    InterlockedIncrement((LONG *)(iVar1 + -0xc));
  }
  return param_1;
}


