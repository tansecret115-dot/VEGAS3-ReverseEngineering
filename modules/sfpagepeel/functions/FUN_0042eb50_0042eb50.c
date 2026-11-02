/* Module: sfpagepeel.dll
   Function: FUN_0042eb50
   Address: 0042eb50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042eb50(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_0047dc6c = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_0047dc78 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_0047dc74 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_0047dc70 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_0047dc7c = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_0047dc6c == (FARPROC)0x0) {
    DAT_0047dc6c = (FARPROC)&LAB_0042ea20;
  }
  if (DAT_0047dc78 == (FARPROC)0x0) {
    DAT_0047dc78 = FUN_0042e8b0;
  }
  if (DAT_0047dc74 == (FARPROC)0x0) {
    DAT_0047dc74 = (FARPROC)&LAB_0042e870;
  }
  if (DAT_0047dc70 == (FARPROC)0x0) {
    DAT_0047dc70 = (FARPROC)&LAB_0042e970;
  }
  if (DAT_0047dc7c == (FARPROC)0x0) {
    DAT_0047dc7c = (FARPROC)&LAB_0042e900;
  }
  return 1;
}


