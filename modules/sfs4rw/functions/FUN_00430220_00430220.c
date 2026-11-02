/* Module: sfs4rw.dll
   Function: FUN_00430220
   Address: 00430220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00430220(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_004a9b74 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_004a9b80 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_004a9b7c = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_004a9b78 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_004a9b84 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_004a9b74 == (FARPROC)0x0) {
    DAT_004a9b74 = (FARPROC)&LAB_004300f0;
  }
  if (DAT_004a9b80 == (FARPROC)0x0) {
    DAT_004a9b80 = FUN_0042ff80;
  }
  if (DAT_004a9b7c == (FARPROC)0x0) {
    DAT_004a9b7c = (FARPROC)&LAB_0042ff40;
  }
  if (DAT_004a9b78 == (FARPROC)0x0) {
    DAT_004a9b78 = (FARPROC)&LAB_00430040;
  }
  if (DAT_004a9b84 == (FARPROC)0x0) {
    DAT_004a9b84 = (FARPROC)&LAB_0042ffd0;
  }
  return 1;
}


