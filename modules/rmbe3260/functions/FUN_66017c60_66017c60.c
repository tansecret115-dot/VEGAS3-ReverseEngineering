/* Module: rmbe3260.dll
   Function: FUN_66017c60
   Address: 66017c60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66017c60(void *this,void *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  bVar1 = false;
  if (param_1 == (void *)0x0) {
    return iVar2;
  }
  iVar3 = -1;
  if (0 < *(int *)((int)this + 0x40)) {
    do {
      if (bVar1) goto LAB_66017cbd;
      if (*(void **)(*(int *)((int)this + 0x3c) + iVar2 * 4) == param_1) {
        bVar1 = true;
        iVar3 = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x40));
  }
  if (!bVar1) {
    return -0x7ff8ffa9;
  }
LAB_66017cbd:
  FUN_6605d000((void *)((int)this + 0x3c),iVar3,1);
  operator_delete(param_1);
  return 0;
}


