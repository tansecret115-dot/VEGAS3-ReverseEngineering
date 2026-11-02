/* Module: sfppack1.dll
   Function: FUN_5cdf4750
   Address: 5cdf4750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdf4750(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_5ce23aa4 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_5ce23ab0 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_5ce23aac = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_5ce23aa8 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_5ce23ab4 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_5ce23aa4 == (FARPROC)0x0) {
    DAT_5ce23aa4 = (FARPROC)&LAB_5cdf4620;
  }
  if (DAT_5ce23ab0 == (FARPROC)0x0) {
    DAT_5ce23ab0 = FUN_5cdf44b0;
  }
  if (DAT_5ce23aac == (FARPROC)0x0) {
    DAT_5ce23aac = (FARPROC)&LAB_5cdf4470;
  }
  if (DAT_5ce23aa8 == (FARPROC)0x0) {
    DAT_5ce23aa8 = (FARPROC)&LAB_5cdf4570;
  }
  if (DAT_5ce23ab4 == (FARPROC)0x0) {
    DAT_5ce23ab4 = (FARPROC)&LAB_5cdf4500;
  }
  return 1;
}


