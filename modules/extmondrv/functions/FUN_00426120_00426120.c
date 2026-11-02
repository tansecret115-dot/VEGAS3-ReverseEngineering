/* Module: extmondrv.dll
   Function: FUN_00426120
   Address: 00426120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00426120(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_0045b40c = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_0045b418 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_0045b414 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_0045b410 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_0045b41c = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_0045b40c == (FARPROC)0x0) {
    DAT_0045b40c = (FARPROC)&LAB_00425ff0;
  }
  if (DAT_0045b418 == (FARPROC)0x0) {
    DAT_0045b418 = FUN_00425e80;
  }
  if (DAT_0045b414 == (FARPROC)0x0) {
    DAT_0045b414 = (FARPROC)&LAB_00425e40;
  }
  if (DAT_0045b410 == (FARPROC)0x0) {
    DAT_0045b410 = (FARPROC)&LAB_00425f40;
  }
  if (DAT_0045b41c == (FARPROC)0x0) {
    DAT_0045b41c = (FARPROC)&LAB_00425ed0;
  }
  return 1;
}


