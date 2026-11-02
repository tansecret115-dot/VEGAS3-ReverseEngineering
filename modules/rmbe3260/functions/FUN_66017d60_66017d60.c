/* Module: rmbe3260.dll
   Function: FUN_66017d60
   Address: 66017d60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66017d60(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  iVar3 = 0;
  iVar2 = -1;
  if (0 < *(int *)((int)this + 0x50)) {
    do {
      if (bVar1) {
        return iVar2;
      }
      if (*(int *)(*(int *)((int)this + 0x4c) + iVar3 * 4) == param_1) {
        bVar1 = true;
        iVar2 = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x50));
  }
  return iVar2;
}


