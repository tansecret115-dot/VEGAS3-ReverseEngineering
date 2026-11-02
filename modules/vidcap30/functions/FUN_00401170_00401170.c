/* Module: vidcap30.exe
   Function: FUN_00401170
   Address: 00401170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401170(void)

{
  HMODULE hModule;
  
  if (DAT_005ba56c != 0) {
    hModule = GetModuleHandleA("USER32");
    if (hModule != (HMODULE)0x0) {
      DAT_005bb844 = GetProcAddress(hModule,"EnumDisplayMonitors");
    }
    if (DAT_005bb844 != (FARPROC)0x0) {
      return 1;
    }
  }
  DAT_005bb844 = (FARPROC)&LAB_00401150;
  return 1;
}


