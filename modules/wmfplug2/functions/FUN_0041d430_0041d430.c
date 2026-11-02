/* Module: wmfplug2.dll
   Function: FUN_0041d430
   Address: 0041d430
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041d430(HKEY param_1,int param_2,int *param_3)

{
  LPCWSTR lpWideCharStr;
  int iVar1;
  LSTATUS LVar2;
  uint local_104;
  CHAR local_100 [254];
  undefined1 local_2;
  
  lpWideCharStr = (LPCWSTR)(param_2 + 4);
  if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
    WideCharToMultiByte(0,0,lpWideCharStr,-1,local_100,0xff,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x100) {
    local_100[0] = '\0';
  }
  local_2 = 0;
  iVar1 = lstrcmpA(local_100,"AudioFormat");
  if (iVar1 == 0) {
    local_104 = (uint)(*(int *)(param_2 + 0x48) != 0);
    LVar2 = RegSetValueExA(param_1,"UseAudio",0,4,(BYTE *)&local_104,4);
    if (LVar2 != 0) {
      return 0x80004005;
    }
  }
  iVar1 = lstrcmpA(local_100,"VideoCodec");
  if (iVar1 == 0) {
    local_104 = (uint)(*param_3 != 0);
    LVar2 = RegSetValueExA(param_1,"UseVideo",0,4,(BYTE *)&local_104,4);
    if (LVar2 != 0) {
      return 0x80004005;
    }
  }
  if (*(DWORD *)(param_2 + 0x48) == 0) {
    iVar1 = RegDeleteValueA(param_1,local_100);
  }
  else {
    iVar1 = RegSetValueExA(param_1,local_100,0,*(DWORD *)(param_2 + 0x44),(BYTE *)param_3,
                           *(DWORD *)(param_2 + 0x48));
  }
  return -(uint)(iVar1 != 0) & 0x80004005;
}


