/* Module: sfpublish.dll
   Function: FUN_004131b0
   Address: 004131b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004131b0(int *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  uchar *lpString1;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_6c;
  int local_68;
  uchar local_64 [100];
  
  iVar5 = 0;
  iVar4 = -1;
  local_68 = -1;
  local_6c = 0;
  iVar1 = FUN_00412a30((uchar *)0x0,&local_6c);
  if (iVar1 == -0x7ffb1fc4) {
    pvVar2 = GlobalAlloc(0x42,local_6c + 1);
    lpString1 = GlobalLock(pvVar2);
    if (lpString1 != (uchar *)0x0) {
      iVar3 = FUN_00412a30(lpString1,&local_6c);
      iVar1 = local_68;
      if (((iVar3 != 1) && (-1 < iVar3)) && (0 < *param_1)) {
        do {
          _mbscpy(local_64,(uchar *)**(undefined4 **)(param_1[2] + iVar5 * 4));
          iVar3 = lstrcmpiA((LPCSTR)lpString1,(LPCSTR)local_64);
          iVar4 = iVar5;
          iVar1 = iVar5;
          if (iVar3 == 0) break;
          iVar5 = iVar5 + 1;
          iVar4 = local_68;
          iVar1 = local_68;
        } while (iVar5 < *param_1);
      }
      local_68 = iVar1;
      pvVar2 = GlobalHandle(lpString1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(lpString1);
      GlobalFree(pvVar2);
      return iVar4;
    }
  }
  return -1;
}


