/* Module: wavplug.dll
   Function: FUN_5f3b4e70
   Address: 5f3b4e70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f3b4e70(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_5f3db5fc = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_5f3db608 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_5f3db604 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_5f3db600 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_5f3db60c = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_5f3db5fc == (FARPROC)0x0) {
    DAT_5f3db5fc = (FARPROC)&LAB_5f3b4d40;
  }
  if (DAT_5f3db608 == (FARPROC)0x0) {
    DAT_5f3db608 = FUN_5f3b4bd0;
  }
  if (DAT_5f3db604 == (FARPROC)0x0) {
    DAT_5f3db604 = (FARPROC)&LAB_5f3b4b90;
  }
  if (DAT_5f3db600 == (FARPROC)0x0) {
    DAT_5f3db600 = (FARPROC)&LAB_5f3b4c90;
  }
  if (DAT_5f3db60c == (FARPROC)0x0) {
    DAT_5f3db60c = (FARPROC)&LAB_5f3b4c20;
  }
  return 1;
}


