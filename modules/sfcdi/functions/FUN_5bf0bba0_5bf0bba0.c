/* Module: sfcdi.dll
   Function: FUN_5bf0bba0
   Address: 5bf0bba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0bba0(void)

{
  UINT uMode;
  int iVar1;
  
  uMode = SetErrorMode(0x8001);
  DAT_5bf631c8 = LoadLibraryA("WNASPI32.DLL");
  SetErrorMode(uMode);
  if (DAT_5bf631c8 < (HMODULE)0x20) {
    DAT_5bf631c8 = (HMODULE)0x0;
    DAT_5bf631cc = (FARPROC)0x0;
    DAT_5bf631d0 = (FARPROC)0x0;
    return 0x8004e0d4;
  }
  DAT_5bf631cc = GetProcAddress(DAT_5bf631c8,"GetASPI32SupportInfo");
  DAT_5bf631d0 = GetProcAddress(DAT_5bf631c8,"SendASPI32Command");
  if ((DAT_5bf631cc != (FARPROC)0x0) && (DAT_5bf631d0 != (FARPROC)0x0)) {
    iVar1 = (*DAT_5bf631cc)();
    if ((char)((uint)iVar1 >> 8) != '\x01') {
      FreeLibrary(DAT_5bf631c8);
      DAT_5bf631cc = (FARPROC)0x0;
      DAT_5bf631d0 = (FARPROC)0x0;
      DAT_5bf631c8 = (HMODULE)0x0;
      return 0x8004e0d5;
    }
    return 0;
  }
  FreeLibrary(DAT_5bf631c8);
  DAT_5bf631cc = (FARPROC)0x0;
  DAT_5bf631d0 = (FARPROC)0x0;
  DAT_5bf631c8 = (HMODULE)0x0;
  return 0x8004e0d4;
}


