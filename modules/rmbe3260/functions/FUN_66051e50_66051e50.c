/* Module: rmbe3260.dll
   Function: FUN_66051e50
   Address: 66051e50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66051e50(LPSTR param_1,HMODULE param_2)

{
  HGLOBAL hMem;
  DWORD DVar1;
  LPVOID lpData;
  BOOL BVar2;
  char *pcVar3;
  int iVar4;
  CHAR local_22c [264];
  CHAR local_124 [260];
  DWORD local_20;
  HGLOBAL local_1c;
  CHAR local_18 [4];
  CHAR local_14 [8];
  uint local_c;
  int local_8;
  
  local_8 = 0;
  DVar1 = GetModuleFileNameA(param_2,local_22c,0x104);
  iVar4 = 0;
  if ((DVar1 != 0) && (DVar1 = GetFileVersionInfoSizeA(local_22c,&local_20), DVar1 != 0)) {
    local_1c = GlobalAlloc(2,DVar1);
    lpData = GlobalLock(local_1c);
    BVar2 = GetFileVersionInfoA(local_22c,local_20,DVar1,lpData);
    if (BVar2 != 0) {
      lstrcpyA(local_124,s__VarFileInfo_Translation_6606e960);
      VerQueryValueA(lpData,local_124,&param_2,&local_c);
      wsprintfA(local_18,&DAT_6606e958,param_2->unused);
      pcVar3 = FUN_66052070(local_18,' ');
      while (pcVar3 != (char *)0x0) {
        *pcVar3 = '0';
        pcVar3 = FUN_66052070(local_18,' ');
      }
      lstrcpyA(local_124,s__StringFileInfo__6606e944);
      lstrcatA(local_124,local_14);
      local_14[0] = '\0';
      lstrcatA(local_124,local_18);
      lstrcatA(local_124,s__DistCode_6606f2b4);
      BVar2 = VerQueryValueA(lpData,local_124,&param_2,&local_c);
      if (((BVar2 != 0) && (local_c != 0)) && (param_2 != (HMODULE)0x0)) {
        lstrcpyA(param_1,(LPCSTR)param_2);
        local_8 = 1;
      }
    }
    hMem = local_1c;
    GlobalUnlock(local_1c);
    GlobalFree(hMem);
    iVar4 = local_8;
  }
  if (iVar4 == 0) {
    lstrcpyA(param_1,&DAT_6606f27c);
  }
  return iVar4;
}


