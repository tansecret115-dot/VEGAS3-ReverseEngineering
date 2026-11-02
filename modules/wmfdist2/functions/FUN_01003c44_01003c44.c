/* Module: wmfdist2.exe
   Function: FUN_01003c44
   Address: 01003c44
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01003c44(HWND param_1,undefined4 param_2,LPSTR param_3)

{
  HMODULE hModule;
  int iVar1;
  LPSTR pCVar2;
  UINT UVar3;
  HWND local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 *local_20;
  HMODULE local_18;
  FARPROC local_14;
  FARPROC local_10;
  FARPROC local_c;
  LPSTR local_8;
  
  hModule = LoadLibraryA(s_SHELL32_DLL_0100a268);
  local_18 = hModule;
  if (hModule == (HMODULE)0x0) {
    UVar3 = 0x4c2;
  }
  else {
    local_c = GetProcAddress(hModule,s_SHBrowseForFolder_0100a298);
    if (((local_c != (FARPROC)0x0) &&
        (local_14 = GetProcAddress(hModule,(LPCSTR)0xc3), local_14 != (FARPROC)0x0)) &&
       (local_10 = GetProcAddress(hModule,s_SHGetPathFromIDList_0100a2b0), local_10 != (FARPROC)0x0)
       ) {
      if ((char)DAT_0100b720 == '\0') {
        GetTempPathA(0x104,(LPSTR)&DAT_0100b720);
        iVar1 = lstrlenA((LPCSTR)&DAT_0100b720);
        local_8 = CharPrevA((LPCSTR)&DAT_0100b720,(LPCSTR)((int)&DAT_0100b720 + iVar1));
        if ((*local_8 == '\\') &&
           (pCVar2 = CharPrevA((LPCSTR)&DAT_0100b720,local_8), *pCVar2 != ':')) {
          *local_8 = '\0';
        }
      }
      local_38 = param_1;
      local_2c = param_2;
      *param_3 = '\0';
      local_34 = 0;
      local_30 = 0;
      local_28 = 1;
      local_24 = &LAB_01003c23;
      local_20 = &DAT_0100b720;
      iVar1 = (*local_c)(&local_38);
      if (iVar1 != 0) {
        (*local_10)(iVar1,&DAT_0100b720);
        if ((char)DAT_0100b720 != '\0') {
          lstrcpyA(param_3,(LPCSTR)&DAT_0100b720);
        }
        (*local_14)(iVar1);
      }
      FreeLibrary(local_18);
      return *param_3 != '\0';
    }
    FreeLibrary(hModule);
    UVar3 = 0x4c1;
  }
  FUN_01003e44(param_1,UVar3,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  return false;
}


