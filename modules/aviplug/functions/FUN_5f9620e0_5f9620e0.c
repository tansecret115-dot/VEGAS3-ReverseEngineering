/* Module: aviplug.dll
   Function: FUN_5f9620e0
   Address: 5f9620e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9620e0(undefined4 *param_1,uchar *param_2)

{
  HGLOBAL hMem;
  DWORD *pDVar1;
  int iVar2;
  
  *param_1 = 0;
  hMem = GlobalAlloc(0x42,0x1e8);
  pDVar1 = GlobalLock(hMem);
  if (pDVar1 != (DWORD *)0x0) {
    iVar2 = FUN_5f9797b0((int *)(pDVar1 + 1),4,-1,-1,0);
    if (-1 < iVar2) {
      _mbscpy((uchar *)(pDVar1 + 0x36),param_2);
      pDVar1[4] = 2;
      pDVar1[3] = 0x30;
      pDVar1[0x2d] = 1;
      pDVar1[0x2e] = 1;
      FUN_5f961f30((uint)pDVar1);
      *param_1 = pDVar1;
      return iVar2;
    }
  }
  FUN_5f9623f0(pDVar1);
  *param_1 = 0;
  return -0x7ffbbf99;
}


