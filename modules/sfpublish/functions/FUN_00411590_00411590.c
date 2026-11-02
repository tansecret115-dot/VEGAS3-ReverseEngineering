/* Module: sfpublish.dll
   Function: FUN_00411590
   Address: 00411590
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00411590(void *this,LPCSTR param_1)

{
  undefined4 *pMem;
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int iVar4;
  int local_4;
  
  iVar4 = 0;
  iVar2 = -0x7ffb1ff6;
  if (*(int **)((int)this + 0x2c) == (int *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = **(int **)((int)this + 0x2c);
  }
  if (0 < local_4) {
    while( true ) {
      pMem = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x2c) + 8) + iVar4 * 4);
      iVar2 = lstrcmpiA(param_1,(LPCSTR)*pMem);
      if (iVar2 == 0) break;
      iVar4 = iVar4 + 1;
      if (local_4 <= iVar4) {
        return -0x7ffb1ff6;
      }
    }
    iVar2 = FUN_0041dd10(*(int **)((int)this + 0x2c),iVar4,1,0);
    if (-1 < iVar2) {
      if (pMem != (undefined4 *)0x0) {
        FUN_00410a80(pMem);
        pvVar3 = GlobalHandle(pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pMem);
        GlobalFree(pvVar3);
      }
      iVar1 = *(int *)((int)this + 0x30);
      if ((iVar4 <= iVar1) && (0 < iVar1)) {
        *(int *)((int)this + 0x30) = iVar1 + -1;
      }
      if (**(int **)((int)this + 0x2c) == 0) {
        *(undefined4 *)((int)this + 0x30) = 0xffffffff;
      }
    }
  }
  return iVar2;
}


