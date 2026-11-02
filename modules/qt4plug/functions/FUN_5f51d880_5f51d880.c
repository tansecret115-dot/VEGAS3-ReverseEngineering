/* Module: qt4plug.dll
   Function: FUN_5f51d880
   Address: 5f51d880
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f51d880(void *this,int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_c;
  int iStack_8;
  
  iVar3 = 0;
  FUN_5f576790();
  iVar1 = 1;
  if (1 < *(int *)((int)this + 0x7c)) {
    piVar2 = *(int **)((int)this + 0x78);
    do {
      piVar2 = piVar2 + 1;
      if (param_1 < *piVar2) break;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x7c));
  }
  iVar1 = *(int *)(*(int *)((int)this + 0x78) + -4 + iVar1 * 4);
  if (param_1 != iVar1) {
    iVar3 = *(int *)((int)this + 0x198);
    if ((iVar1 < iVar3) && (iVar3 < param_1)) {
      iVar1 = *(int *)((int)this + 0x19c) + iVar3;
    }
    FUN_5f576790();
    iVar3 = local_c - iStack_8;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return iVar3;
}


