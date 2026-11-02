/* Module: aifplug.dll
   Function: FUN_5fbf59f0
   Address: 5fbf59f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbf59f0(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_5fc09b8c = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_5fc09b98 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_5fc09b94 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_5fc09b90 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_5fc09b9c = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_5fc09b8c == (FARPROC)0x0) {
    DAT_5fc09b8c = (FARPROC)&LAB_5fbf58c0;
  }
  if (DAT_5fc09b98 == (FARPROC)0x0) {
    DAT_5fc09b98 = FUN_5fbf5750;
  }
  if (DAT_5fc09b94 == (FARPROC)0x0) {
    DAT_5fc09b94 = (FARPROC)&LAB_5fbf5710;
  }
  if (DAT_5fc09b90 == (FARPROC)0x0) {
    DAT_5fc09b90 = (FARPROC)&LAB_5fbf5810;
  }
  if (DAT_5fc09b9c == (FARPROC)0x0) {
    DAT_5fc09b9c = (FARPROC)&LAB_5fbf57a0;
  }
  return 1;
}


