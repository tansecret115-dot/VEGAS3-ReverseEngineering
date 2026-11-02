/* Module: wmfplug2.dll
   Function: FUN_00448de0
   Address: 00448de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00448de0(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_0048a0ac = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_0048a0b8 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_0048a0b4 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_0048a0b0 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_0048a0bc = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_0048a0ac == (FARPROC)0x0) {
    DAT_0048a0ac = (FARPROC)&LAB_00448cb0;
  }
  if (DAT_0048a0b8 == (FARPROC)0x0) {
    DAT_0048a0b8 = FUN_00448b40;
  }
  if (DAT_0048a0b4 == (FARPROC)0x0) {
    DAT_0048a0b4 = (FARPROC)&LAB_00448b00;
  }
  if (DAT_0048a0b0 == (FARPROC)0x0) {
    DAT_0048a0b0 = (FARPROC)&LAB_00448c00;
  }
  if (DAT_0048a0bc == (FARPROC)0x0) {
    DAT_0048a0bc = (FARPROC)&LAB_00448b90;
  }
  return 1;
}


