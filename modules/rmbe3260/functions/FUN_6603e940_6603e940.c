/* Module: rmbe3260.dll
   Function: FUN_6603e940
   Address: 6603e940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603e940(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 == 0) {
    return 0xfff9;
  }
  if ((*(int *)((int)this + 0x18) != 0) &&
     (piVar1 = *(int **)((int)this + 0x1c), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 4))(piVar1,param_1);
  }
  if (*(int *)((int)this + 0x20) != 0) {
    if (iVar2 < 0) {
      return 0xfff2;
    }
    piVar1 = *(int **)((int)this + 0x24);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 4))(piVar1,param_1);
    }
  }
  if (iVar2 < 0) {
    return 0xfff2;
  }
  return 0;
}


