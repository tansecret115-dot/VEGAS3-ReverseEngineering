/* Module: sfxpfx2.dll
   Function: FUN_5c8be190
   Address: 5c8be190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8be190(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_5c8e9674 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_5c8e9680 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_5c8e967c = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_5c8e9678 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_5c8e9684 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_5c8e9674 == (FARPROC)0x0) {
    DAT_5c8e9674 = (FARPROC)&LAB_5c8be060;
  }
  if (DAT_5c8e9680 == (FARPROC)0x0) {
    DAT_5c8e9680 = FUN_5c8bdef0;
  }
  if (DAT_5c8e967c == (FARPROC)0x0) {
    DAT_5c8e967c = (FARPROC)&LAB_5c8bdeb0;
  }
  if (DAT_5c8e9678 == (FARPROC)0x0) {
    DAT_5c8e9678 = (FARPROC)&LAB_5c8bdfb0;
  }
  if (DAT_5c8e9684 == (FARPROC)0x0) {
    DAT_5c8e9684 = (FARPROC)&LAB_5c8bdf40;
  }
  return 1;
}


