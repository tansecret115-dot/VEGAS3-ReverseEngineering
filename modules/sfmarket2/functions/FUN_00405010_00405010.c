/* Module: sfmarket2.dll
   Function: FUN_00405010
   Address: 00405010
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00405010(void *this,int param_1)

{
  HMODULE hModule;
  CHAR *lpFilename;
  char *_Source;
  DWORD nSize;
  uchar local_244 [60];
  uchar local_208 [260];
  CHAR local_104 [260];
  
  if (param_1 == -0x7ffb1ecd) {
    _Source = "Upgrade_error_badprodid.htm";
  }
  else {
    _Source = "Upgrade_error.htm";
  }
  _mbscpy(local_208,(uchar *)_Source);
  FUN_00401320();
  FUN_00424a60(local_244,(BYTE *)"%s2.dll");
  lpFilename = local_104;
  nSize = 0x104;
  hModule = GetModuleHandleA((LPCSTR)local_244);
  GetModuleFileNameA(hModule,lpFilename,nSize);
  FUN_00424a60((uchar *)((int)this + 0x847),(BYTE *)"res://%s/%s");
  SendMessageA(*(HWND *)((int)this + 0x18),0x1090,(WPARAM)((int)this + 0x847),0);
  return;
}


