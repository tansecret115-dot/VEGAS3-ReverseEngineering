/* Module: aviplug.dll
   Function: FUN_5f9c2d90
   Address: 5f9c2d90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f9c2d90(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_5f9f5bf4 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_5f9f5c00 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_5f9f5bfc = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_5f9f5bf8 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_5f9f5c04 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_5f9f5bf4 == (FARPROC)0x0) {
    DAT_5f9f5bf4 = (FARPROC)&LAB_5f9c2c60;
  }
  if (DAT_5f9f5c00 == (FARPROC)0x0) {
    DAT_5f9f5c00 = FUN_5f9c2af0;
  }
  if (DAT_5f9f5bfc == (FARPROC)0x0) {
    DAT_5f9f5bfc = (FARPROC)&LAB_5f9c2ab0;
  }
  if (DAT_5f9f5bf8 == (FARPROC)0x0) {
    DAT_5f9f5bf8 = (FARPROC)&LAB_5f9c2bb0;
  }
  if (DAT_5f9f5c04 == (FARPROC)0x0) {
    DAT_5f9f5c04 = (FARPROC)&LAB_5f9c2b40;
  }
  return 1;
}


