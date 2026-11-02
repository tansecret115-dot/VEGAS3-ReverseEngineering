/* Module: sfxpfx1.dll
   Function: FUN_5c96c860
   Address: 5c96c860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c96c860(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_5c998a1c = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_5c998a28 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_5c998a24 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_5c998a20 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_5c998a2c = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_5c998a1c == (FARPROC)0x0) {
    DAT_5c998a1c = (FARPROC)&LAB_5c96c730;
  }
  if (DAT_5c998a28 == (FARPROC)0x0) {
    DAT_5c998a28 = FUN_5c96c5c0;
  }
  if (DAT_5c998a24 == (FARPROC)0x0) {
    DAT_5c998a24 = (FARPROC)&LAB_5c96c580;
  }
  if (DAT_5c998a20 == (FARPROC)0x0) {
    DAT_5c998a20 = (FARPROC)&LAB_5c96c680;
  }
  if (DAT_5c998a2c == (FARPROC)0x0) {
    DAT_5c998a2c = (FARPROC)&LAB_5c96c610;
  }
  return 1;
}


