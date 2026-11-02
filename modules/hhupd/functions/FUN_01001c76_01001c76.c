/* Module: hhupd.exe
   Function: FUN_01001c76
   Address: 01001c76
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01001c76(void)

{
  LSTATUS LVar1;
  FARPROC pFVar2;
  UINT UVar3;
  DWORD DVar4;
  int iVar5;
  BYTE *lpData;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  CHAR local_220;
  undefined4 local_21f;
  CHAR local_11c;
  undefined4 local_11b;
  DWORD local_18;
  DWORD local_14;
  uint local_10;
  HKEY local_c;
  HMODULE local_8;
  
  local_11c = DAT_010012c4;
  puVar8 = &local_11b;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  local_220 = DAT_010012c4;
  puVar8 = &local_21f;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  local_10 = 0;
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,s_Software_Microsoft_Windows_Curre_0100a0d8,0,(LPSTR)0x0,
                          0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_14);
  if (LVar1 != 0) {
    return;
  }
  local_8 = (HMODULE)0x0;
  do {
    wsprintfA(&DAT_0100a300,s_wextract_cleanup_d_0100a1b0,local_8);
    LVar1 = RegQueryValueExA(local_c,&DAT_0100a300,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,&local_18);
    if (LVar1 != 0) break;
    local_8 = (HMODULE)((int)local_8 + 1);
  } while ((int)local_8 < 200);
  if (local_8 == (HMODULE)0xc8) {
    RegCloseKey(local_c);
    DAT_0100a300 = 0;
    return;
  }
  GetSystemDirectoryA(&local_220,0x104);
  FUN_010059ea(&local_220,"advpack.dll");
  local_8 = LoadLibraryA(&local_220);
  if (local_8 != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(local_8,"DelNodeRunDLL32");
    local_10 = (uint)(pFVar2 != (FARPROC)0x0);
    FreeLibrary(local_8);
  }
  if (local_10 == 0) {
    DVar4 = GetModuleFileNameA(DAT_0100b6dc,&local_11c,0x104);
    if (DVar4 == 0) goto LAB_01001e03;
  }
  else {
    UVar3 = GetSystemDirectoryA(&local_11c,0x104);
    if (UVar3 != 0) {
      FUN_010059ea(&local_11c,"");
    }
  }
  iVar7 = lstrlenA(&local_11c);
  iVar5 = lstrlenA(&DAT_0100ae84);
  lpData = LocalAlloc(0x40,iVar7 + 0x50 + iVar5);
  if (lpData != (BYTE *)0x0) {
    DAT_0100a350 = (uint)(local_10 == 0);
    pcVar6 = s_rundll32_exe__sadvpack_dll_DelNo_0100a1d8;
    if (local_10 == 0) {
      pcVar6 = s__s__D__s_0100a1c8;
    }
    wsprintfA((LPSTR)lpData,pcVar6,&local_11c,&DAT_0100ae84);
    iVar7 = lstrlenA((LPCSTR)lpData);
    RegSetValueExA(local_c,&DAT_0100a300,0,1,lpData,iVar7 + 1);
    RegCloseKey(local_c);
    LocalFree(lpData);
    return;
  }
  FUN_01003c23((HWND)0x0,0x4b5,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
LAB_01001e03:
  RegCloseKey(local_c);
  return;
}


