/* Module: vidpcore.dll
   Function: FUN_5ded6740
   Address: 5ded6740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ded6740(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_5df43154 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_5df43160 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_5df4315c = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_5df43158 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_5df43164 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_5df43154 == (FARPROC)0x0) {
    DAT_5df43154 = (FARPROC)&LAB_5ded6610;
  }
  if (DAT_5df43160 == (FARPROC)0x0) {
    DAT_5df43160 = FUN_5ded64a0;
  }
  if (DAT_5df4315c == (FARPROC)0x0) {
    DAT_5df4315c = (FARPROC)&LAB_5ded6460;
  }
  if (DAT_5df43158 == (FARPROC)0x0) {
    DAT_5df43158 = (FARPROC)&LAB_5ded6560;
  }
  if (DAT_5df43164 == (FARPROC)0x0) {
    DAT_5df43164 = (FARPROC)&LAB_5ded64f0;
  }
  return 1;
}


