/* Module: sfcdi.dll
   Function: FUN_5bf33b00
   Address: 5bf33b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf33b00(LPCSTR param_1,undefined4 param_2,LPSTR param_3,int param_4)

{
  DWORD dwBytes;
  HGLOBAL pvVar1;
  LPVOID lpData;
  BOOL BVar2;
  undefined4 uVar3;
  uint local_90;
  LPCSTR local_8c;
  LPVOID local_88;
  DWORD local_84;
  uchar local_80 [128];
  
  dwBytes = GetFileVersionInfoSizeA(param_1,&local_84);
  if (dwBytes == 0) {
    return 0x8004e00a;
  }
  uVar3 = 0x8004e00a;
  pvVar1 = GlobalAlloc(0x42,dwBytes);
  lpData = GlobalLock(pvVar1);
  if (lpData != (LPVOID)0x0) {
    BVar2 = GetFileVersionInfoA(param_1,0,dwBytes,lpData);
    if (BVar2 != 0) {
      BVar2 = VerQueryValueA(lpData,"\\VarFileInfo\\Translation",&local_88,&local_90);
      if ((BVar2 != 0) && (local_90 != 0)) {
        FUN_5bf25750(local_80,(BYTE *)"\\StringFileInfo\\%04hX%04hX\\%s");
        BVar2 = VerQueryValueA(lpData,(LPCSTR)local_80,&local_8c,&local_90);
        if (BVar2 != 0) {
          uVar3 = 0;
          lstrcpynA(param_3,local_8c,param_4);
          param_3[param_4 + -1] = '\0';
        }
      }
    }
    pvVar1 = GlobalHandle(lpData);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(lpData);
    GlobalFree(pvVar1);
  }
  return uVar3;
}


