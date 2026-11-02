/* Module: vegas30.exe
   Function: FUN_00401200
   Address: 00401200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401200(void)

{
  HMODULE hModule;
  
  if (DAT_00647888 != 0) {
    hModule = GetModuleHandleA("USER32");
    if (hModule != (HMODULE)0x0) {
      DAT_0064b174 = GetProcAddress(hModule,"EnumDisplayMonitors");
    }
    if (DAT_0064b174 != (FARPROC)0x0) {
      return 1;
    }
  }
  DAT_0064b174 = (FARPROC)&LAB_004011e0;
  return 1;
}


