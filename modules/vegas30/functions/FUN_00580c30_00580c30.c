/* Module: vegas30.exe
   Function: FUN_00580c30
   Address: 00580c30
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_00580c30(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (iVar1 != iVar2) {
    if (((*(int *)(iVar1 + -0xc) < 0) && ((undefined *)(iVar1 + -0xc) != PTR_DAT_00645cc0)) ||
       (*(int *)(iVar2 + -0xc) < 0)) {
      FUN_00580bf0(*(undefined4 *)(iVar2 + -8),iVar2);
      return param_1;
    }
    FUN_00580970();
    iVar1 = *param_2;
    *param_1 = iVar1;
    InterlockedIncrement((LONG *)(iVar1 + -0xc));
  }
  return param_1;
}


