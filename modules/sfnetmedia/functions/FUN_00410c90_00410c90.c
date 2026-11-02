/* Module: sfnetmedia.dll
   Function: FUN_00410c90
   Address: 00410c90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00410c90(int *param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  uchar *lpString1;
  int iVar4;
  int iVar5;
  uint local_8;
  int local_4;
  
  iVar5 = 0;
  local_4 = -1;
  local_8 = 0;
  iVar2 = FUN_00410760((uchar *)0x0,&local_8);
  if (iVar2 == -0x7ffb1fc4) {
    pvVar3 = GlobalAlloc(0x42,local_8 + 1);
    lpString1 = GlobalLock(pvVar3);
    if (lpString1 != (uchar *)0x0) {
      iVar4 = FUN_00410760(lpString1,&local_8);
      iVar2 = -1;
      iVar1 = local_4;
      if ((iVar4 != 1) && (-1 < iVar4)) {
        while( true ) {
          if (param_1 == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *param_1;
          }
          iVar2 = local_4;
          iVar1 = local_4;
          if ((iVar4 <= iVar5) ||
             (iVar4 = lstrcmpiA((LPCSTR)lpString1,*(LPCSTR *)(*(int *)(param_1[2] + iVar5 * 4) + 4))
             , iVar2 = iVar5, iVar1 = iVar5, iVar4 == 0)) break;
          iVar5 = iVar5 + 1;
        }
      }
      local_4 = iVar1;
      pvVar3 = GlobalHandle(lpString1);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(lpString1);
      GlobalFree(pvVar3);
      return iVar2;
    }
  }
  return -1;
}


