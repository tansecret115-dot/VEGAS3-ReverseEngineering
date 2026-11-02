/* Module: vegas30k.dll
   Function: FUN_010fe5b0
   Address: 010fe5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010fe5b0(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_0120e844 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_0120e850 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_0120e84c = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_0120e848 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_0120e854 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_0120e844 == (FARPROC)0x0) {
    DAT_0120e844 = (FARPROC)&LAB_010fe480;
  }
  if (DAT_0120e850 == (FARPROC)0x0) {
    DAT_0120e850 = FUN_010fe310;
  }
  if (DAT_0120e84c == (FARPROC)0x0) {
    DAT_0120e84c = (FARPROC)&LAB_010fe2d0;
  }
  if (DAT_0120e848 == (FARPROC)0x0) {
    DAT_0120e848 = (FARPROC)&LAB_010fe3d0;
  }
  if (DAT_0120e854 == (FARPROC)0x0) {
    DAT_0120e854 = (FARPROC)&LAB_010fe360;
  }
  return 1;
}


