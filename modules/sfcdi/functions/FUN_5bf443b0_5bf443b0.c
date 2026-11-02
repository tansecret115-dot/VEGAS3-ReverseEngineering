/* Module: sfcdi.dll
   Function: FUN_5bf443b0
   Address: 5bf443b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf443b0(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_5bf762f4 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_5bf76300 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_5bf762fc = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_5bf762f8 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_5bf76304 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_5bf762f4 == (FARPROC)0x0) {
    DAT_5bf762f4 = (FARPROC)&LAB_5bf44280;
  }
  if (DAT_5bf76300 == (FARPROC)0x0) {
    DAT_5bf76300 = FUN_5bf44110;
  }
  if (DAT_5bf762fc == (FARPROC)0x0) {
    DAT_5bf762fc = (FARPROC)&LAB_5bf440d0;
  }
  if (DAT_5bf762f8 == (FARPROC)0x0) {
    DAT_5bf762f8 = (FARPROC)&LAB_5bf441d0;
  }
  if (DAT_5bf76304 == (FARPROC)0x0) {
    DAT_5bf76304 = (FARPROC)&LAB_5bf44160;
  }
  return 1;
}


