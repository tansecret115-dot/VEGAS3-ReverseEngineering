/* Module: mp3rw.dll
   Function: FUN_004027d0
   Address: 004027d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004027d0(void *this,LPCSTR param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((*(int **)((int)this + 0x144) != (int *)0x0) &&
      (iVar1 = **(int **)((int)this + 0x144), iVar1 != 0)) && (iVar4 = 0, 0 < iVar1)) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)((int)this + 0x144) + 8) + iVar4 * 4);
      iVar3 = lstrcmpiA(param_1,(LPCSTR)(iVar2 + 0x108));
      if (iVar3 == 0) {
        return iVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}


