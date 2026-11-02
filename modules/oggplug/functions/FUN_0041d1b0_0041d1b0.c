/* Module: oggplug.dll
   Function: FUN_0041d1b0
   Address: 0041d1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041d1b0(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_00511114 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_00511120 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_0051111c = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_00511118 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_00511124 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_00511114 == (FARPROC)0x0) {
    DAT_00511114 = (FARPROC)&LAB_0041d080;
  }
  if (DAT_00511120 == (FARPROC)0x0) {
    DAT_00511120 = FUN_0041cf10;
  }
  if (DAT_0051111c == (FARPROC)0x0) {
    DAT_0051111c = (FARPROC)&LAB_0041ced0;
  }
  if (DAT_00511118 == (FARPROC)0x0) {
    DAT_00511118 = (FARPROC)&LAB_0041cfd0;
  }
  if (DAT_00511124 == (FARPROC)0x0) {
    DAT_00511124 = (FARPROC)&LAB_0041cf60;
  }
  return 1;
}


