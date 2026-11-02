/* Module: vegas30.exe
   Function: FUN_005ded20
   Address: 005ded20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ded20(wchar_t *param_1,undefined4 param_2,undefined4 param_3)

{
  DWORD dwNumberOfBytesToMap;
  HANDLE hFileMappingObject;
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *_SubStr;
  wchar_t *_SubStr_00;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (param_1 != (HANDLE)0x0) {
    dwNumberOfBytesToMap = GetFileSize(param_1,(LPDWORD)0x0);
    if (dwNumberOfBytesToMap != 0) {
      hFileMappingObject = CreateFileMappingA(param_1,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0);
      pwVar1 = MapViewOfFile(hFileMappingObject,4,0,0,dwNumberOfBytesToMap);
      if (pwVar1 == (wchar_t *)0x0) {
        CloseHandle(hFileMappingObject);
        return 0;
      }
      iVar2 = FUN_005e3d70(pwVar1,dwNumberOfBytesToMap);
      _SubStr = (wchar_t *)FUN_005e3da0(param_2,iVar2);
      _SubStr_00 = (wchar_t *)FUN_005e3da0(param_3,iVar2);
      if ((_SubStr != (wchar_t *)0x0) && (_SubStr_00 != (wchar_t *)0x0)) {
        if (iVar2 == 0) {
          param_1 = (wchar_t *)strstr((char *)pwVar1,(char *)_SubStr);
          pwVar1 = (wchar_t *)strstr((char *)pwVar1,(char *)_SubStr_00);
        }
        else {
          param_1 = wcsstr(pwVar1,_SubStr);
          pwVar1 = wcsstr(pwVar1,_SubStr_00);
        }
        if ((param_1 != (wchar_t *)0x0) && (pwVar1 != (wchar_t *)0x0)) {
          uVar3 = (int)pwVar1 - (int)param_1;
          FUN_0060ac30();
          puVar6 = (undefined4 *)&stack0xffffffec;
          for (uVar5 = uVar3 + 1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          for (uVar5 = uVar3 + 1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar6 = 0;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          puVar6 = (undefined4 *)&stack0xffffffec;
          for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar6 = *(undefined4 *)param_1;
            param_1 = param_1 + 2;
            puVar6 = puVar6 + 1;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(char *)puVar6 = (char)*param_1;
            param_1 = (wchar_t *)((int)param_1 + 1);
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          uVar4 = FUN_005e3e30(&stack0xffffffec,iVar2);
          free(_SubStr);
          free(_SubStr_00);
          return uVar4;
        }
      }
      free(_SubStr);
      free(_SubStr_00);
    }
  }
  return 0;
}


