/* Module: sftrkfx1.dll
   Function: FUN_5cbe1400
   Address: 5cbe1400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbe1400(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_5cc11774 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_5cc11780 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_5cc1177c = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_5cc11778 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_5cc11784 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_5cc11774 == (FARPROC)0x0) {
    DAT_5cc11774 = (FARPROC)&LAB_5cbe12d0;
  }
  if (DAT_5cc11780 == (FARPROC)0x0) {
    DAT_5cc11780 = FUN_5cbe1160;
  }
  if (DAT_5cc1177c == (FARPROC)0x0) {
    DAT_5cc1177c = (FARPROC)&LAB_5cbe1120;
  }
  if (DAT_5cc11778 == (FARPROC)0x0) {
    DAT_5cc11778 = (FARPROC)&LAB_5cbe1220;
  }
  if (DAT_5cc11784 == (FARPROC)0x0) {
    DAT_5cc11784 = (FARPROC)&LAB_5cbe11b0;
  }
  return 1;
}


