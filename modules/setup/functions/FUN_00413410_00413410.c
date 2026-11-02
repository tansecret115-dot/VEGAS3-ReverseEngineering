/* Module: Setup.exe
   Function: FUN_00413410
   Address: 00413410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00413410(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_0044907c = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_00449088 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_00449084 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_00449080 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_0044908c = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_0044907c == (FARPROC)0x0) {
    DAT_0044907c = (FARPROC)&LAB_004132e0;
  }
  if (DAT_00449088 == (FARPROC)0x0) {
    DAT_00449088 = FUN_00413170;
  }
  if (DAT_00449084 == (FARPROC)0x0) {
    DAT_00449084 = (FARPROC)&LAB_00413130;
  }
  if (DAT_00449080 == (FARPROC)0x0) {
    DAT_00449080 = (FARPROC)&LAB_00413230;
  }
  if (DAT_0044908c == (FARPROC)0x0) {
    DAT_0044908c = (FARPROC)&LAB_004131c0;
  }
  return 1;
}


