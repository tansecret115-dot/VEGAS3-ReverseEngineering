/* Module: sfppack3.dll
   Function: FUN_5cc6a0e0
   Address: 5cc6a0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc6a0e0(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_5cc9857c = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_5cc98588 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_5cc98584 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_5cc98580 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_5cc9858c = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_5cc9857c == (FARPROC)0x0) {
    DAT_5cc9857c = (FARPROC)&LAB_5cc69fb0;
  }
  if (DAT_5cc98588 == (FARPROC)0x0) {
    DAT_5cc98588 = FUN_5cc69e40;
  }
  if (DAT_5cc98584 == (FARPROC)0x0) {
    DAT_5cc98584 = (FARPROC)&LAB_5cc69e00;
  }
  if (DAT_5cc98580 == (FARPROC)0x0) {
    DAT_5cc98580 = (FARPROC)&LAB_5cc69f00;
  }
  if (DAT_5cc9858c == (FARPROC)0x0) {
    DAT_5cc9858c = (FARPROC)&LAB_5cc69e90;
  }
  return 1;
}


