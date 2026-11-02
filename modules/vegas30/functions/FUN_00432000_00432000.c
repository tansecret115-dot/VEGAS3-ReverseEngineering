/* Module: vegas30.exe
   Function: FUN_00432000
   Address: 00432000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00432000(uchar *param_1)

{
  int iVar1;
  UINT UVar2;
  HANDLE hObject;
  undefined4 uVar3;
  uchar local_208 [260];
  CHAR local_104 [260];
  
  uVar3 = 0;
  _mbscpy(local_208,param_1);
  iVar1 = lstrlenA((LPCSTR)local_208);
  if (iVar1 != 0) {
    _SfAddSlashToPathName_8(local_208,0x104);
    UVar2 = GetTempFileNameA((LPCSTR)local_208,(LPCSTR)&PTR_LAB_00610dc0,0,local_104);
    if (UVar2 == 0) {
      return 0;
    }
    hObject = CreateFileA(local_104,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hObject != (HANDLE)0xffffffff) {
      uVar3 = 1;
      CloseHandle(hObject);
      DeleteFileA(local_104);
    }
  }
  return uVar3;
}


