/* Module: mp3plug.dll
   Function: FUN_5f713c90
   Address: 5f713c90
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_5f713c90(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    return this;
  }
  iVar2 = *(int *)this;
  if (*(int *)((int)this + 4) < iVar2) {
    *(int *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 4) * 4) = param_1;
    iVar2 = *(int *)this;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      if ((*(char *)(iVar1 + *(int *)((int)this + 8)) == '\0') &&
         (param_1 !=
          *(int *)(*(int *)((int)this + 0xc) + (*(int *)((int)this + 4) % (iVar1 + 1)) * 4))) {
        *(undefined1 *)(iVar1 + *(int *)((int)this + 8)) = 1;
        iVar2 = *(int *)this;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return this;
}


