/* Module: vegas30.exe
   Function: FUN_004b17e0
   Address: 004b17e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004b17e0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  SIZE_T dwBytes;
  LPCSTR lpString;
  int iVar2;
  int iVar3;
  HGLOBAL pvVar4;
  undefined4 *pMem;
  int local_10;
  SIZE_T local_c;
  
  puVar1 = (undefined4 *)(param_1 + 0x24);
  FUN_004b12a0(*(undefined4 *)(param_1 + 0x24));
  *puVar1 = 0;
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar2 = _SfList_CreateExZ_32(puVar1,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
  if (-1 < iVar2) {
    pMem = (undefined4 *)0x0;
    local_c = 0;
    local_10 = 0;
    if (0 < *param_2) {
      do {
        lpString = *(LPCSTR *)(param_2[1] + 4 + local_10 * 8);
        if ((lpString != (LPCSTR)0x0) && (iVar3 = lstrlenA(lpString), iVar3 != 0)) {
          iVar2 = iVar3 + 1;
          dwBytes = iVar3 + 0xd + iVar2;
          if ((int)local_c < (int)dwBytes) {
            if (pMem != (undefined4 *)0x0) {
              pvVar4 = GlobalHandle(pMem);
              GlobalUnlock(pvVar4);
              pvVar4 = GlobalHandle(pMem);
              GlobalFree(pvVar4);
            }
            pvVar4 = GlobalAlloc(0x42,dwBytes);
            pMem = GlobalLock(pvVar4);
            local_c = dwBytes;
            if (pMem == (undefined4 *)0x0) {
              return -0x7ff8fff2;
            }
          }
          *pMem = 0xc;
          pMem[1] = *(undefined4 *)(param_2[1] + local_10 * 8);
          pMem[2] = iVar2 * 2;
          MultiByteToWideChar(0,1,*(LPCSTR *)(param_2[1] + 4 + local_10 * 8),-1,(LPWSTR)(pMem + 3),
                              iVar2);
          *(WCHAR *)((int)(pMem + 3) + iVar3 * 2) = L'\0';
          iVar2 = _SfList_AllocAndInsertItem_20(*puVar1,pMem,dwBytes,0xffffffff,0);
          if (iVar2 < 0) {
            pvVar4 = GlobalHandle(pMem);
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle(pMem);
            GlobalFree(pvVar4);
            return -0x7ff8fff2;
          }
        }
        local_10 = local_10 + 1;
      } while (local_10 < *param_2);
      if (pMem != (undefined4 *)0x0) {
        pvVar4 = GlobalHandle(pMem);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(pMem);
        GlobalFree(pvVar4);
      }
    }
  }
  return iVar2;
}


