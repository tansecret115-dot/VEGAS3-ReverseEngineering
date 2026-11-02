/* Module: Setup.exe
   Function: FUN_00402230
   Address: 00402230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00402230(void)

{
  HANDLE pvVar1;
  char *pcVar2;
  _WIN32_FIND_DATAA local_140;
  
  FUN_00402860();
  GetPrivateProfileStringA("ProductInfo","ProductInstallName","",&DAT_00446f90,0x104,&DAT_004476dc);
  GetModuleFileNameA((HMODULE)0x0,&DAT_00447aec,0x104);
  if (DAT_00448cd0 == '\0') {
    pcVar2 = "%s%s.msi";
  }
  else {
    pcVar2 = "%s%s";
  }
  SfPrintF(&DAT_004479e8,(BYTE *)pcVar2);
  pvVar1 = FindFirstFileA(&DAT_004479e8,&local_140);
  if (pvVar1 == (HANDLE)0xffffffff) {
    DAT_004479e8 = 0;
  }
  return;
}


