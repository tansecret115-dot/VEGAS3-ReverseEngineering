/* Module: mp3plug.dll
   Function: FUN_5f692940
   Address: 5f692940
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f692940(void *this,int param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID this_00;
  undefined4 *pMem;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = param_1 * 0x28;
  if (*(int *)(iVar3 + *(int *)((int)this + 0x1080)) == 1) {
    pvVar2 = GlobalAlloc(0x40,0xed8);
    this_00 = GlobalLock(pvVar2);
    if (this_00 != (LPVOID)0x0) {
      pMem = FUN_5f692f50(this_00,this);
      if (pMem != (undefined4 *)0x0) {
        iVar1 = FUN_5f693120((int)pMem,*(int **)((int)this + 0x14),
                             *(undefined4 *)(iVar3 + 8 + *(int *)((int)this + 0x1080)),
                             *(undefined4 **)(iVar3 + 0xc + *(int *)((int)this + 0x1080)));
        if (-1 < iVar1) {
          *(undefined4 **)(iVar3 + 0x20 + *(int *)((int)this + 0x1080)) = pMem;
          return iVar1;
        }
        FUN_5f692fd0(pMem);
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
        *(undefined4 *)(iVar3 + 0x20 + *(int *)((int)this + 0x1080)) = 0;
        return iVar1;
      }
    }
    iVar1 = -0x7ff8fff2;
  }
  return iVar1;
}


