/* Module: Setup.exe
   Function: _SfSelfRegister_IsSupported@4
   Address: 00424b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfSelfRegister_IsSupported_4(LPCSTR param_1)

{
  DWORD dwBytes;
  HGLOBAL pvVar1;
  LPVOID lpData;
  BOOL BVar2;
  undefined4 uVar3;
  uint *local_8c;
  uint local_88;
  DWORD local_84;
  CHAR local_80 [128];
  
                    /* 0x24b10  320  _SfSelfRegister_IsSupported@4 */
  dwBytes = GetFileVersionInfoSizeA(param_1,&local_84);
  if (dwBytes == 0) {
    return 0x80004005;
  }
  uVar3 = 0x80004001;
  pvVar1 = GlobalAlloc(0x42,dwBytes);
  lpData = GlobalLock(pvVar1);
  if (lpData != (LPVOID)0x0) {
    BVar2 = GetFileVersionInfoA(param_1,0,dwBytes,lpData);
    if (BVar2 != 0) {
      BVar2 = VerQueryValueA(lpData,"\\VarFileInfo\\Translation",&local_8c,&local_88);
      if ((BVar2 != 0) && (local_88 != 0)) {
        wsprintfA(local_80,"\\StringFileInfo\\%04hX%04hX\\OLESelfRegister",(uint)(ushort)*local_8c,
                  *local_8c >> 0x10);
        BVar2 = VerQueryValueA(lpData,local_80,&local_8c,&local_88);
        if (BVar2 != 0) {
          uVar3 = 0;
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


