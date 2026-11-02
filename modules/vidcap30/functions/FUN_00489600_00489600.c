/* Module: vidcap30.exe
   Function: FUN_00489600
   Address: 00489600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00489600(int param_1)

{
  LSTATUS LVar1;
  int iVar2;
  HKEY local_184;
  undefined4 local_180;
  BYTE local_17c [39];
  undefined1 local_155;
  OLECHAR local_154 [40];
  CHAR local_104 [260];
  
  FUN_004899c0();
  StringFromGUID2((GUID *)(param_1 + 4),local_154,0x28);
  wsprintfA(local_104,"%s\\%ls");
  local_184 = (HKEY)0x0;
  LVar1 = RegCreateKeyA((HKEY)0x80000001,local_104,&local_184);
  if (LVar1 == 0) {
    local_180 = *(undefined4 *)(param_1 + 0x228);
    RegSetValueExA(local_184,"LangID",0,4,(BYTE *)&local_180,4);
    local_180 = _SfDosGetDateTime_4();
    *(undefined4 *)(param_1 + 0x248) = local_180;
    RegSetValueExA(local_184,"ModTime",0,4,(BYTE *)&local_180,4);
    if (*(LPCSTR *)(param_1 + 0x224) != (LPCSTR)0x0) {
      iVar2 = lstrlenA(*(LPCSTR *)(param_1 + 0x224));
      RegSetValueExA(local_184,"DialogName",0,1,*(BYTE **)(param_1 + 0x224),iVar2 + 1);
    }
    if (((*(byte *)(param_1 + 0x238) & 0x10) != 0) && (*(LPCSTR *)(param_1 + 0x26c) != (LPCSTR)0x0))
    {
      iVar2 = lstrlenA(*(LPCSTR *)(param_1 + 0x26c));
      RegSetValueExA(local_184,"ExtReader",0,1,*(BYTE **)(param_1 + 0x26c),iVar2 + 1);
      if (*(int *)(param_1 + 0x250) != 0) {
        iVar2 = StringFromGUID2((GUID *)(param_1 + 0x250),local_154,0x28);
        if (-1 < iVar2) {
          if ((&stack0x00000000 == (undefined1 *)0x154) || (local_154[0] != L'\0')) {
            WideCharToMultiByte(0,0,local_154,-1,(LPSTR)local_17c,0x28,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x17c) {
            local_17c[0] = '\0';
          }
          local_155 = 0;
          iVar2 = lstrlenA((LPCSTR)local_17c);
          RegSetValueExA(local_184,"Reader",0,1,local_17c,iVar2 + 1);
        }
      }
    }
    if (((*(byte *)(param_1 + 0x238) & 0x20) != 0) && (*(LPCSTR *)(param_1 + 0x2a8) != (LPCSTR)0x0))
    {
      iVar2 = lstrlenA(*(LPCSTR *)(param_1 + 0x2a8));
      RegSetValueExA(local_184,"ExtRenderer",0,1,*(BYTE **)(param_1 + 0x2a8),iVar2 + 1);
      if (*(int *)(param_1 + 0x28c) != 0) {
        iVar2 = StringFromGUID2((GUID *)(param_1 + 0x28c),local_154,0x28);
        if (-1 < iVar2) {
          if ((&stack0x00000000 == (undefined1 *)0x154) || (local_154[0] != L'\0')) {
            WideCharToMultiByte(0,0,local_154,-1,(LPSTR)local_17c,0x28,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x17c) {
            local_17c[0] = '\0';
          }
          local_155 = 0;
          iVar2 = lstrlenA((LPCSTR)local_17c);
          RegSetValueExA(local_184,"Renderer",0,1,local_17c,iVar2 + 1);
        }
      }
    }
    if (((*(byte *)(param_1 + 0x238) & 0x40) != 0) && (*(LPCSTR *)(param_1 + 0x2e4) != (LPCSTR)0x0))
    {
      iVar2 = lstrlenA(*(LPCSTR *)(param_1 + 0x2e4));
      RegSetValueExA(local_184,"ExtEditor",0,1,*(BYTE **)(param_1 + 0x2e4),iVar2 + 1);
      if (*(int *)(param_1 + 0x2c8) != 0) {
        iVar2 = StringFromGUID2((GUID *)(param_1 + 0x2c8),local_154,0x28);
        if (-1 < iVar2) {
          if ((&stack0x00000000 == (undefined1 *)0x154) || (local_154[0] != L'\0')) {
            WideCharToMultiByte(0,0,local_154,-1,(LPSTR)local_17c,0x28,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x17c) {
            local_17c[0] = '\0';
          }
          local_155 = 0;
          iVar2 = lstrlenA((LPCSTR)local_17c);
          RegSetValueExA(local_184,"Editor",0,1,local_17c,iVar2 + 1);
        }
      }
    }
    if (((*(uint *)(param_1 + 0x238) & 0x100) != 0) && (*(LPCSTR *)(param_1 + 800) != (LPCSTR)0x0))
    {
      iVar2 = lstrlenA(*(LPCSTR *)(param_1 + 800));
      RegSetValueExA(local_184,"ExtNetReader",0,1,*(BYTE **)(param_1 + 800),iVar2 + 1);
      if (*(int *)(param_1 + 0x304) != 0) {
        iVar2 = StringFromGUID2((GUID *)(param_1 + 0x304),local_154,0x28);
        if (-1 < iVar2) {
          if ((&stack0x00000000 == (undefined1 *)0x154) || (local_154[0] != L'\0')) {
            WideCharToMultiByte(0,0,local_154,-1,(LPSTR)local_17c,0x28,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x17c) {
            local_17c[0] = '\0';
          }
          local_155 = 0;
          iVar2 = lstrlenA((LPCSTR)local_17c);
          RegSetValueExA(local_184,"NetReader",0,1,local_17c,iVar2 + 1);
        }
      }
    }
    RegCloseKey(local_184);
  }
  return;
}


