/* Module: sfcd.cdd
   Function: FUN_00422b30
   Address: 00422b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00422b30(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_00441bac = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_00441bb8 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_00441bb4 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_00441bb0 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_00441bbc = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_00441bac == (FARPROC)0x0) {
    DAT_00441bac = (FARPROC)&LAB_00422a00;
  }
  if (DAT_00441bb8 == (FARPROC)0x0) {
    DAT_00441bb8 = FUN_00422890;
  }
  if (DAT_00441bb4 == (FARPROC)0x0) {
    DAT_00441bb4 = (FARPROC)&LAB_00422850;
  }
  if (DAT_00441bb0 == (FARPROC)0x0) {
    DAT_00441bb0 = (FARPROC)&LAB_00422950;
  }
  if (DAT_00441bbc == (FARPROC)0x0) {
    DAT_00441bbc = (FARPROC)&LAB_004228e0;
  }
  return 1;
}


