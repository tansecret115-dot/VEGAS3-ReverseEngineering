/* Module: sfppack2.dll
   Function: FUN_5cd2d6d0
   Address: 5cd2d6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd2d6d0(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_5cd67cb4 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_5cd67cc0 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_5cd67cbc = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_5cd67cb8 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_5cd67cc4 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_5cd67cb4 == (FARPROC)0x0) {
    DAT_5cd67cb4 = (FARPROC)&LAB_5cd2d5a0;
  }
  if (DAT_5cd67cc0 == (FARPROC)0x0) {
    DAT_5cd67cc0 = FUN_5cd2d430;
  }
  if (DAT_5cd67cbc == (FARPROC)0x0) {
    DAT_5cd67cbc = (FARPROC)&LAB_5cd2d3f0;
  }
  if (DAT_5cd67cb8 == (FARPROC)0x0) {
    DAT_5cd67cb8 = (FARPROC)&LAB_5cd2d4f0;
  }
  if (DAT_5cd67cc4 == (FARPROC)0x0) {
    DAT_5cd67cc4 = (FARPROC)&LAB_5cd2d480;
  }
  return 1;
}


