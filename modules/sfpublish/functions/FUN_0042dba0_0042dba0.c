/* Module: sfpublish.dll
   Function: FUN_0042dba0
   Address: 0042dba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042dba0(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_00441ef4 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_00441f00 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_00441efc = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_00441ef8 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_00441f04 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_00441ef4 == (FARPROC)0x0) {
    DAT_00441ef4 = (FARPROC)&LAB_0042da70;
  }
  if (DAT_00441f00 == (FARPROC)0x0) {
    DAT_00441f00 = FUN_0042d900;
  }
  if (DAT_00441efc == (FARPROC)0x0) {
    DAT_00441efc = (FARPROC)&LAB_0042d8c0;
  }
  if (DAT_00441ef8 == (FARPROC)0x0) {
    DAT_00441ef8 = (FARPROC)&LAB_0042d9c0;
  }
  if (DAT_00441f04 == (FARPROC)0x0) {
    DAT_00441f04 = (FARPROC)&LAB_0042d950;
  }
  return 1;
}


