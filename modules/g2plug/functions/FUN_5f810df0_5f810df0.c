/* Module: g2plug.dll
   Function: FUN_5f810df0
   Address: 5f810df0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f810df0(HKEY param_1,int param_2,int *param_3)

{
  int iVar1;
  LSTATUS LVar2;
  uint local_104;
  CHAR local_100 [256];
  
  WideCharToMultiByte(0,0,(LPCWSTR)(param_2 + 4),-1,local_100,0xff,(LPCSTR)0x0,(LPBOOL)0x0);
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


