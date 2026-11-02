/* Module: sftrans1.dll
   Function: FUN_00508180
   Address: 00508180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00508180(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_0057bb04 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_0057bb10 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_0057bb0c = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_0057bb08 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_0057bb14 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_0057bb04 == (FARPROC)0x0) {
    DAT_0057bb04 = (FARPROC)&LAB_00508050;
  }
  if (DAT_0057bb10 == (FARPROC)0x0) {
    DAT_0057bb10 = FUN_00507ee0;
  }
  if (DAT_0057bb0c == (FARPROC)0x0) {
    DAT_0057bb0c = (FARPROC)&LAB_00507ea0;
  }
  if (DAT_0057bb08 == (FARPROC)0x0) {
    DAT_0057bb08 = (FARPROC)&LAB_00507fa0;
  }
  if (DAT_0057bb14 == (FARPROC)0x0) {
    DAT_0057bb14 = (FARPROC)&LAB_00507f30;
  }
  return 1;
}


