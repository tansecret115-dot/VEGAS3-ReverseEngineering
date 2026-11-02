/* Module: sftrkfx1.dll
   Function: FUN_5cba1960
   Address: 5cba1960
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cba1960(void)

{
  HMODULE hModule;
  DWORD DVar1;
  HGLOBAL pvVar2;
  LPVOID lpData;
  BOOL BVar3;
  uint uVar4;
  uchar *puVar5;
  uchar *local_210;
  uint local_20c;
  CHAR local_208 [260];
  uchar local_104 [260];
  
  hModule = GetModuleHandleA((LPCSTR)0x0);
  if (hModule != (HMODULE)0x0) {
    DVar1 = GetModuleFileNameA(hModule,local_208,0x104);
    if (DVar1 != 0) {
      DVar1 = GetFileVersionInfoSizeA(local_208,(LPDWORD)0x0);
      if (DVar1 != 0) {
        pvVar2 = GlobalAlloc(0x42,DVar1);
        lpData = GlobalLock(pvVar2);
        if (lpData != (LPVOID)0x0) {
          BVar3 = GetFileVersionInfoA(local_208,0,DVar1,lpData);
          uVar4 = 0;
          if (BVar3 != 0) {
            uVar4 = VerQueryValueA(lpData,"\\VarFileInfo\\Translation",&local_210,&local_20c);
            if ((uVar4 != 0) && (local_20c != 0)) {
              FUN_5cbbf190(local_104,(BYTE *)"\\StringFileInfo\\%04hX%04hX\\CompanyName");
              BVar3 = VerQueryValueA(lpData,(LPCSTR)local_104,&local_210,&local_20c);
              uVar4 = 0;
              if (BVar3 != 0) {
                puVar5 = _mbsstr(local_210,(uchar *)"Sonic Foundry");
                uVar4 = (uint)(puVar5 != (uchar *)0x0);
              }
            }
          }
          pvVar2 = GlobalHandle(lpData);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(lpData);
          GlobalFree(pvVar2);
          return uVar4;
        }
      }
    }
  }
  return 0;
}


