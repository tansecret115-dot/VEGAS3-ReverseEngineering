/* Module: sfcdi.dll
   Function: FUN_5bf0d630
   Address: 5bf0d630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5bf0d630(HANDLE param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  byte bVar2;
  DWORD dwBytes;
  HGLOBAL pvVar3;
  byte *lpBuffer;
  LPVOID pMem;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  DWORD local_18;
  undefined4 local_14;
  LONG local_10;
  byte local_c;
  byte local_b;
  undefined1 local_a;
  
  *param_2 = 0;
  *param_3 = 0;
  local_14 = 0;
  local_10 = 0;
  dwBytes = SetFilePointer(param_1,0,&local_10,2);
  local_14 = 0;
  local_10 = 0;
  SetFilePointer(param_1,0,&local_10,0);
  pvVar3 = GlobalAlloc(0x42,dwBytes);
  lpBuffer = GlobalLock(pvVar3);
  pvVar3 = GlobalAlloc(0x42,dwBytes);
  pMem = GlobalLock(pvVar3);
  puVar5 = param_2;
  if ((lpBuffer == (byte *)0x0) || (pMem == (LPVOID)0x0)) {
    puVar7 = (undefined4 *)0x8007000e;
  }
  else {
    ReadFile(param_1,lpBuffer,dwBytes,&local_18,(LPOVERLAPPED)0x0);
    if (dwBytes == local_18) {
      puVar5 = (undefined4 *)0x0;
      pbVar6 = lpBuffer;
      bVar2 = local_c;
      for (; puVar7 = param_2, local_c = bVar2, dwBytes != 0; dwBytes = dwBytes + iVar1) {
        local_c = *pbVar6;
        if ((((local_c < 0x30) || (0x39 < local_c)) && ((local_c < 0x61 || (0x66 < local_c)))) &&
           ((local_c < 0x41 || (0x46 < local_c)))) {
          pbVar6 = pbVar6 + 1;
          iVar1 = -1;
          local_c = bVar2;
        }
        else {
          local_b = pbVar6[1];
          pbVar6 = pbVar6 + 2;
          iVar1 = -2;
          local_a = 0;
          iVar4 = FUN_5bf2d450((LPCSTR)&local_c,(undefined4 *)0x0);
          *(char *)((int)pMem + (int)puVar5) = (char)iVar4;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        bVar2 = local_c;
      }
    }
    else {
      puVar7 = (undefined4 *)0x8004e008;
    }
  }
  if (lpBuffer != (byte *)0x0) {
    pvVar3 = GlobalHandle(lpBuffer);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(lpBuffer);
    GlobalFree(pvVar3);
  }
  if ((int)puVar7 < 0) {
    if (pMem != (LPVOID)0x0) {
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
      return puVar7;
    }
  }
  else {
    *param_2 = pMem;
    *param_3 = puVar5;
  }
  return puVar7;
}


