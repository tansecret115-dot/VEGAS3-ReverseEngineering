/* Module: g2plug.dll
   Function: FUN_5f83d420
   Address: 5f83d420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f83d420(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_5f87779c = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_5f8777a8 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_5f8777a4 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_5f8777a0 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_5f8777ac = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_5f87779c == (FARPROC)0x0) {
    DAT_5f87779c = (FARPROC)&LAB_5f83d2f0;
  }
  if (DAT_5f8777a8 == (FARPROC)0x0) {
    DAT_5f8777a8 = FUN_5f83d180;
  }
  if (DAT_5f8777a4 == (FARPROC)0x0) {
    DAT_5f8777a4 = (FARPROC)&LAB_5f83d140;
  }
  if (DAT_5f8777a0 == (FARPROC)0x0) {
    DAT_5f8777a0 = (FARPROC)&LAB_5f83d240;
  }
  if (DAT_5f8777ac == (FARPROC)0x0) {
    DAT_5f8777ac = (FARPROC)&LAB_5f83d1d0;
  }
  return 1;
}


