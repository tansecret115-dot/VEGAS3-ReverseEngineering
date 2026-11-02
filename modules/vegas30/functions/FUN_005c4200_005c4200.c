/* Module: vegas30.exe
   Function: FUN_005c4200
   Address: 005c4200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c4200(uchar *param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  UINT uMode;
  HANDLE hObject;
  uchar *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uchar local_208 [260];
  uchar local_104 [260];
  
  uMode = SetErrorMode(1);
  _mbscpy(local_208,param_1);
  hObject = CreateFileA((LPCSTR)local_208,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0
                       );
  if (hObject == (HANDLE)0xffffffff) {
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      puVar1 = (uchar *)_SfGetFileNamePtrA_4(param_1);
      _mbscpy(local_104,puVar1);
      _SfGetPathNameFromFilePath_12(param_2,local_208,0x104);
      iVar2 = lstrlenA((LPCSTR)local_104);
      iVar3 = lstrlenA((LPCSTR)local_208);
      if ((uint)(iVar2 + iVar3) < 0x103) {
        _mbscat(local_208,local_104);
        hObject = CreateFileA((LPCSTR)local_208,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                              (HANDLE)0x0);
        if (hObject != (HANDLE)0xffffffff) goto LAB_005c43d4;
      }
    }
    if ((((param_3 != (char *)0x0) && (param_4 != (char *)0x0)) && (*param_3 != '\0')) &&
       (*param_4 != '\0')) {
      iVar2 = _SfReplaceBasePathRelative_20(param_1,param_3,param_4,local_208,0x104);
      if (-1 < iVar2) {
        hObject = CreateFileA((LPCSTR)local_208,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                              (HANDLE)0x0);
        if (hObject != (HANDLE)0xffffffff) goto LAB_005c43d4;
      }
    }
    if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
      puVar1 = (uchar *)_SfGetFileNamePtrA_4(param_1);
      _mbscpy(local_104,puVar1);
      _SfGetPathNameFromFilePath_12(param_5,local_208,0x104);
      iVar2 = lstrlenA((LPCSTR)local_104);
      iVar3 = lstrlenA((LPCSTR)local_208);
      if ((uint)(iVar2 + iVar3) < 0x103) {
        _mbscat(local_208,local_104);
        hObject = CreateFileA((LPCSTR)local_208,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                              (HANDLE)0x0);
        if (hObject != (HANDLE)0xffffffff) goto LAB_005c43d4;
      }
    }
    uVar4 = 0x4e003;
  }
  else {
LAB_005c43d4:
    CloseHandle(hObject);
    _mbscpy(param_1,local_208);
    uVar4 = 0;
  }
  SetErrorMode(uMode);
  return uVar4;
}


