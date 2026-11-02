/* Module: vegas30.exe
   Function: FUN_005b9ca0
   Address: 005b9ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_005b9ca0(void)

{
  HGLOBAL pvVar1;
  int *pMem;
  DWORD DVar2;
  int iVar3;
  
  if (DAT_0064762c != 0) {
    if (*(int *)(DAT_0064762c + 0xa0) != 0) {
      SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa0) + 8),0x10,0,0);
    }
    if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa4) != 0)) {
      SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa4) + 8),0x10,0,0);
    }
  }
  pvVar1 = GlobalAlloc(0x40,0xc68);
  pMem = GlobalLock(pvVar1);
  if (pMem != (int *)0x0) {
    FUN_005eb9e0();
    pMem[0x1a7] = -1;
    FUN_005b7c60();
    pMem[0x1a6] = (int)&PTR_FUN_0061b9cc;
    DVar2 = GetCurrentThreadId();
    pMem[2] = DVar2;
    pMem[3] = 10000;
    pMem[4] = 10;
    InitializeCriticalSection((LPCRITICAL_SECTION)(pMem + 5));
    *pMem = (int)(pMem + 1);
    pMem[0x80] = (int)pMem;
    iVar3 = FUN_005c6720();
    pMem[0x7c] = iVar3;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0xc) = iVar3;
      *(int *)(pMem[0x7c] + 0x10) = pMem[0x7c];
      *(int *)(pMem[0x7c] + 0x14) = pMem[0x7c];
      *(byte *)(pMem[0x7c] + 0x18) = *(byte *)(pMem[0x7c] + 0x18) | 2;
      *(byte *)(pMem[0x7c] + 0x18) = *(byte *)(pMem[0x7c] + 0x18) & 0xfe ^ 1;
      pMem[0x7b] = pMem[0x7c];
      *(undefined1 *)(pMem + 0x79) = 1;
      iVar3 = FUN_005b3b60(pMem,&DAT_006479a0);
      if (-1 < iVar3) {
        iVar3 = FUN_005b9640(pMem);
        if (-1 < iVar3) {
          iVar3 = FUN_005b9af0(pMem);
          if (-1 < iVar3) {
            iVar3 = FUN_005b9320(pMem);
            if (iVar3 == 0) {
              pMem[0x71] = 1;
              _SfLoadString_16(DAT_00647204,0x5264,pMem + 0x2e,0x104);
              return pMem;
            }
            if (-1 < iVar3) {
              return pMem;
            }
          }
          FUN_005b95b0(pMem);
          if (-1 < iVar3) {
            return pMem;
          }
        }
        FUN_005b3cc0(pMem);
        if (-1 < iVar3) {
          return pMem;
        }
      }
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(pMem + 5));
    pMem[0x1a6] = (int)&PTR_FUN_0061b9cc;
    FUN_005b7c80();
    FUN_005eba10();
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  return (int *)0x0;
}


