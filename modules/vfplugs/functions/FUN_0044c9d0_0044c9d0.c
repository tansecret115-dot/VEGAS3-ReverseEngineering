/* Module: vfplugs.dll
   Function: FUN_0044c9d0
   Address: 0044c9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044c9d0(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_00494cf4 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_00494d00 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_00494cfc = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_00494cf8 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_00494d04 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_00494cf4 == (FARPROC)0x0) {
    DAT_00494cf4 = (FARPROC)&LAB_0044c8a0;
  }
  if (DAT_00494d00 == (FARPROC)0x0) {
    DAT_00494d00 = FUN_0044c730;
  }
  if (DAT_00494cfc == (FARPROC)0x0) {
    DAT_00494cfc = (FARPROC)&LAB_0044c6f0;
  }
  if (DAT_00494cf8 == (FARPROC)0x0) {
    DAT_00494cf8 = (FARPROC)&LAB_0044c7f0;
  }
  if (DAT_00494d04 == (FARPROC)0x0) {
    DAT_00494d04 = (FARPROC)&LAB_0044c780;
  }
  return 1;
}


