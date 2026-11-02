/* Module: mcplug.dll
   Function: FUN_00437d60
   Address: 00437d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00437d60(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_00488154 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_00488160 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_0048815c = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_00488158 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_00488164 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_00488154 == (FARPROC)0x0) {
    DAT_00488154 = (FARPROC)&LAB_00437c30;
  }
  if (DAT_00488160 == (FARPROC)0x0) {
    DAT_00488160 = FUN_00437ac0;
  }
  if (DAT_0048815c == (FARPROC)0x0) {
    DAT_0048815c = (FARPROC)&LAB_00437a80;
  }
  if (DAT_00488158 == (FARPROC)0x0) {
    DAT_00488158 = (FARPROC)&LAB_00437b80;
  }
  if (DAT_00488164 == (FARPROC)0x0) {
    DAT_00488164 = (FARPROC)&LAB_00437b10;
  }
  return 1;
}


