/* Module: mp3plug.dll
   Function: DllRegisterServer
   Address: 5f681320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint DllRegisterServer(void)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  WCHAR *lpWideCharStr;
  int cchWideChar;
  HKEY local_364;
  HKEY local_360;
  BYTE local_35c [260];
  OLECHAR local_258 [40];
  WCHAR local_208 [260];
  
                    /* 0x1320  4  DllRegisterServer */
  StringFromGUID2((GUID *)&DAT_5f72c420,local_258,0x27);
  wsprintfA((LPSTR)local_35c,"CLSID\\%ls",local_258);
  uVar1 = RegCreateKeyA((HKEY)0x80000000,(LPCSTR)local_35c,&local_364);
  if (uVar1 == 0) {
    wsprintfA((LPSTR)local_35c,"%s","Sonic Foundry MP3 COM Object");
    uVar1 = RegSetValueA(local_364,(LPCSTR)0x0,1,(LPCSTR)local_35c,0x104);
    if (uVar1 == 0) {
      wsprintfA((LPSTR)local_35c,"%ls",L"InprocServer32");
      uVar1 = RegCreateKeyA(local_364,(LPCSTR)local_35c,&local_360);
      if (uVar1 == 0) {
        DVar2 = GetModuleFileNameA(DAT_5f74d2e8,(LPSTR)local_35c,0x104);
        if (DVar2 != 0) {
          lpWideCharStr = local_208;
          cchWideChar = 0x208;
          iVar3 = lstrlenA((LPCSTR)local_35c);
          MultiByteToWideChar(0,0,(LPCSTR)local_35c,iVar3 + 1,lpWideCharStr,cchWideChar);
          wsprintfA((LPSTR)local_35c,"%ls",local_208);
          iVar3 = lstrlenA((LPCSTR)local_35c);
          uVar1 = RegSetValueA(local_360,(LPCSTR)0x0,1,(LPCSTR)local_35c,iVar3 + 1);
          if (uVar1 == 0) {
            wsprintfA((LPSTR)local_35c,"%ls",L"Both");
            iVar3 = lstrlenA((LPCSTR)local_35c);
            RegSetValueExA(local_360,"ThreadingModel",0,1,local_35c,iVar3 + 1);
            RegCloseKey(local_364);
            RegCloseKey(local_360);
            uVar1 = FUN_5f69fea0(DAT_5f74d2e8);
            return uVar1;
          }
          RegCloseKey(local_364);
          RegCloseKey(local_360);
          return uVar1 & 0xffff | 0x80070000;
        }
        DVar2 = GetLastError();
        if (DVar2 == 0) {
          return 0;
        }
        return DVar2 & 0xffff | 0x80070000;
      }
    }
    RegCloseKey(local_364);
  }
  return uVar1 & 0xffff | 0x80070000;
}


