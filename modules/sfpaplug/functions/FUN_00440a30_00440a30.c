/* Module: sfpaplug.dll
   Function: FUN_00440a30
   Address: 00440a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00440a30(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_0045c5fc = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_0045c608 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_0045c604 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_0045c600 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_0045c60c = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_0045c5fc == (FARPROC)0x0) {
    DAT_0045c5fc = (FARPROC)&LAB_00440900;
  }
  if (DAT_0045c608 == (FARPROC)0x0) {
    DAT_0045c608 = FUN_00440790;
  }
  if (DAT_0045c604 == (FARPROC)0x0) {
    DAT_0045c604 = (FARPROC)&LAB_00440750;
  }
  if (DAT_0045c600 == (FARPROC)0x0) {
    DAT_0045c600 = (FARPROC)&LAB_00440850;
  }
  if (DAT_0045c60c == (FARPROC)0x0) {
    DAT_0045c60c = (FARPROC)&LAB_004407e0;
  }
  return 1;
}


