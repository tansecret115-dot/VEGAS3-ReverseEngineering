/* Module: aviplug.dll
   Function: FUN_5f931340
   Address: 5f931340
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f931340(void)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  HKEY local_410;
  HKEY local_40c;
  uchar local_408 [259];
  undefined1 local_305;
  OLECHAR local_304 [128];
  CHAR local_204 [256];
  CHAR local_104 [260];
  
  local_40c = (HKEY)0x0;
  local_410 = (HKEY)0x0;
  StringFromGUID2((GUID *)&DAT_5f9d9f00,local_304,0x80);
  if ((&stack0x00000000 == (undefined1 *)0x304) || (local_304[0] != L'\0')) {
    WideCharToMultiByte(0,0,local_304,-1,(LPSTR)local_408,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x408) {
    local_408[0] = '\0';
  }
  local_305 = 0;
  wsprintfA(local_204,"CLSID\\%s");
  uVar1 = RegCreateKeyA((HKEY)0x80000000,local_204,&local_40c);
  if ((uVar1 == 0) || (uVar1 = uVar1 & 0xffff | 0x80070000, -1 < (int)uVar1)) {
    _mbscpy(local_408,(uchar *)"Sonic Foundry AVI 2 File Handler");
    iVar2 = lstrlenA((LPCSTR)local_408);
    uVar1 = RegSetValueA(local_40c,(LPCSTR)0x0,1,(LPCSTR)local_408,iVar2 + 1);
    if ((uVar1 == 0) || (uVar1 = uVar1 & 0xffff | 0x80070000, -1 < (int)uVar1)) {
      uVar1 = RegCreateKeyA(local_40c,"InprocServer32",&local_410);
      if ((uVar1 == 0) || (uVar1 = uVar1 & 0xffff | 0x80070000, -1 < (int)uVar1)) {
        DVar3 = GetModuleFileNameA(DAT_5f9f40f0,local_104,0x104);
        if (DVar3 == 0) {
          DVar3 = GetLastError();
          if (DVar3 != 0) {
            uVar1 = DVar3 & 0xffff | 0x80070000;
            goto LAB_5f931527;
          }
        }
        else {
          lstrcpyA((LPSTR)local_408,local_104);
          iVar2 = lstrlenA((LPCSTR)local_408);
          uVar1 = RegSetValueA(local_410,(LPCSTR)0x0,1,(LPCSTR)local_408,iVar2 + 1);
          if ((uVar1 != 0) && (uVar1 = uVar1 & 0xffff | 0x80070000, (int)uVar1 < 0))
          goto LAB_5f931527;
          iVar2 = lstrlenA("Both");
          uVar1 = RegSetValueExA(local_410,"ThreadingModel",0,1,"Both",iVar2 + 1);
          if (uVar1 != 0) {
            uVar1 = uVar1 & 0xffff | 0x80070000;
            goto LAB_5f931527;
          }
        }
        uVar1 = 0;
      }
    }
  }
LAB_5f931527:
  if (local_40c != (HKEY)0x0) {
    RegCloseKey(local_40c);
  }
  if (local_410 != (HKEY)0x0) {
    RegCloseKey(local_410);
  }
  if ((int)uVar1 < 0) {
    FUN_5f931290();
  }
  return uVar1;
}


