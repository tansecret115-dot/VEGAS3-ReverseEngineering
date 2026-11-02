/* Module: sctplug.dll
   Function: FUN_0042b6c0
   Address: 0042b6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042b6c0(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_0043cfac = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_0043cfb8 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_0043cfb4 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_0043cfb0 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_0043cfbc = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_0043cfac == (FARPROC)0x0) {
    DAT_0043cfac = (FARPROC)&LAB_0042b590;
  }
  if (DAT_0043cfb8 == (FARPROC)0x0) {
    DAT_0043cfb8 = FUN_0042b420;
  }
  if (DAT_0043cfb4 == (FARPROC)0x0) {
    DAT_0043cfb4 = (FARPROC)&LAB_0042b3e0;
  }
  if (DAT_0043cfb0 == (FARPROC)0x0) {
    DAT_0043cfb0 = (FARPROC)&LAB_0042b4e0;
  }
  if (DAT_0043cfbc == (FARPROC)0x0) {
    DAT_0043cfbc = (FARPROC)&LAB_0042b470;
  }
  return 1;
}


