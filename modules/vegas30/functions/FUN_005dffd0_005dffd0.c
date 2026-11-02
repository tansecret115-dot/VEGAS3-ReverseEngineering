/* Module: vegas30.exe
   Function: FUN_005dffd0
   Address: 005dffd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005dffd0(HANDLE param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  DWORD dwNumberOfBytesToMap;
  HANDLE hFileMappingObject;
  LPVOID lpBaseAddress;
  undefined4 uVar2;
  char *_Memory;
  int iVar3;
  LPCSTR lpsz;
  char *pcVar4;
  LPVOID local_14;
  int local_10;
  undefined4 local_c;
  HANDLE local_8;
  LPVOID local_4;
  
  local_10 = 0;
  FUN_005b83b0(param_2,1);
  dwNumberOfBytesToMap = GetFileSize(param_1,(LPDWORD)0x0);
  if (dwNumberOfBytesToMap == 0) {
    param_1 = (HANDLE)0x1;
  }
  else {
    hFileMappingObject = CreateFileMappingA(param_1,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0);
    local_8 = hFileMappingObject;
    lpBaseAddress = MapViewOfFile(hFileMappingObject,4,0,0,dwNumberOfBytesToMap);
    if (lpBaseAddress == (LPVOID)0x0) {
      param_1 = (HANDLE)0x8007000e;
    }
    else {
      local_c = FUN_005e3d70(lpBaseAddress,dwNumberOfBytesToMap);
      uVar2 = _SfGetFileNamePtrA_4(param_3 + 0x30);
      FUN_004e9f70(param_2,0x224,uVar2);
      FUN_004eb0f0(param_2,0x26,0);
      param_1 = (HANDLE)FUN_005df010(param_2);
      local_14 = lpBaseAddress;
      while (local_4 = local_14, (uint)((int)local_14 - (int)lpBaseAddress) < dwNumberOfBytesToMap)
      {
        _Memory = (char *)FUN_005dee80(&local_14,local_c);
        if (_Memory == (char *)0x0) goto LAB_005e01b1;
        local_10 = local_10 + 1;
        iVar3 = _SfTextToLongToken_8(_Memory,0);
        if (iVar3 == 0) {
          iVar3 = _ismbcspace((int)*_Memory);
          lpsz = _Memory;
          while (iVar3 != 0) {
            lpsz = CharNextA(lpsz);
            iVar3 = _ismbcspace((int)*lpsz);
          }
          cVar1 = *lpsz;
          if (((cVar1 != '\0') && (cVar1 != '\"')) && (cVar1 != '#')) {
LAB_005e015c:
            if (_Memory != (char *)0x0) {
              free(_Memory);
            }
            _Memory = (char *)FUN_005dee80(&local_4,local_c);
            iVar3 = local_10;
            pcVar4 = _Memory;
            uVar2 = _SfGetString_8(DAT_00647204,0x5262);
            SfErrorHandler_DetailsAddString(0x8004e00b,uVar2,iVar3,pcVar4);
            param_1 = (HANDLE)0x4e000;
            goto LAB_005e01b1;
          }
        }
        else {
          iVar3 = FUN_005dfab0(param_2,_Memory);
          if (iVar3 == 0) goto LAB_005e015c;
        }
        if ((*(byte *)(param_3 + 0x1c) & 1) != 0) {
          param_1 = (HANDLE)0x8004e00c;
          goto LAB_005e01b1;
        }
        FUN_004e7320(param_3,(uint)((int)local_14 * 100 + (int)lpBaseAddress * -100) /
                             dwNumberOfBytesToMap);
        free(_Memory);
      }
      _Memory = (char *)0x0;
LAB_005e01b1:
      FUN_004eb2b0(param_2);
      FUN_004ea040(param_2,0);
      hFileMappingObject = local_8;
      if (_Memory != (char *)0x0) {
        free(_Memory);
        hFileMappingObject = local_8;
      }
    }
    if (lpBaseAddress != (LPVOID)0x0) {
      UnmapViewOfFile(lpBaseAddress);
    }
    if (hFileMappingObject != (HANDLE)0x0) {
      CloseHandle(hFileMappingObject);
    }
  }
  FUN_004a4560(DAT_00647630);
  FUN_004692e0(DAT_00647630);
  FUN_005b84d0(param_2,1);
  return param_1;
}


