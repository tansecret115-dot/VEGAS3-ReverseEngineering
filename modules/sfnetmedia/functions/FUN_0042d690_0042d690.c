/* Module: sfnetmedia.dll
   Function: FUN_0042d690
   Address: 0042d690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042d690(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_00441fdc = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_00441fe8 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_00441fe4 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_00441fe0 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_00441fec = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_00441fdc == (FARPROC)0x0) {
    DAT_00441fdc = (FARPROC)&LAB_0042d560;
  }
  if (DAT_00441fe8 == (FARPROC)0x0) {
    DAT_00441fe8 = FUN_0042d3f0;
  }
  if (DAT_00441fe4 == (FARPROC)0x0) {
    DAT_00441fe4 = (FARPROC)&LAB_0042d3b0;
  }
  if (DAT_00441fe0 == (FARPROC)0x0) {
    DAT_00441fe0 = (FARPROC)&LAB_0042d4b0;
  }
  if (DAT_00441fec == (FARPROC)0x0) {
    DAT_00441fec = (FARPROC)&LAB_0042d440;
  }
  return 1;
}


