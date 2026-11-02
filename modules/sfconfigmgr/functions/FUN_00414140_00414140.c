/* Module: sfconfigmgr.dll
   Function: FUN_00414140
   Address: 00414140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00414140(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_0042334c = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_00423358 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_00423354 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_00423350 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_0042335c = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_0042334c == (FARPROC)0x0) {
    DAT_0042334c = (FARPROC)&LAB_00414010;
  }
  if (DAT_00423358 == (FARPROC)0x0) {
    DAT_00423358 = FUN_00413ea0;
  }
  if (DAT_00423354 == (FARPROC)0x0) {
    DAT_00423354 = (FARPROC)&LAB_00413e60;
  }
  if (DAT_00423350 == (FARPROC)0x0) {
    DAT_00423350 = (FARPROC)&LAB_00413f60;
  }
  if (DAT_0042335c == (FARPROC)0x0) {
    DAT_0042335c = (FARPROC)&LAB_00413ef0;
  }
  return 1;
}


