/* Module: rmbe3260.dll
   Function: FUN_66017ce0
   Address: 66017ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66017ce0(void *this,void *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = 0;
  bVar1 = false;
  if (param_1 == (void *)0x0) {
    return iVar2;
  }
  iVar3 = -1;
  if (0 < *(int *)((int)this + 0x60)) {
    do {
      bVar4 = !bVar1;
      if (!bVar4) goto LAB_66017d28;
      if (*(void **)(*(int *)((int)this + 0x5c) + iVar2 * 4) == param_1) {
        bVar1 = true;
        iVar3 = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x60));
  }
  bVar4 = !bVar1;
LAB_66017d28:
  if (bVar4) {
    return -0x7ff8ffa9;
  }
  FUN_6605d000((void *)((int)this + 0x5c),iVar3,1);
  operator_delete(param_1);
  return 0;
}


