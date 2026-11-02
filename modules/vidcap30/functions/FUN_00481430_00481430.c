/* Module: vidcap30.exe
   Function: FUN_00481430
   Address: 00481430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00481430(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_005c1954 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_005c1960 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_005c195c = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_005c1958 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_005c1964 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_005c1954 == (FARPROC)0x0) {
    DAT_005c1954 = (FARPROC)&LAB_00481300;
  }
  if (DAT_005c1960 == (FARPROC)0x0) {
    DAT_005c1960 = FUN_00481190;
  }
  if (DAT_005c195c == (FARPROC)0x0) {
    DAT_005c195c = (FARPROC)&LAB_00481150;
  }
  if (DAT_005c1958 == (FARPROC)0x0) {
    DAT_005c1958 = (FARPROC)&LAB_00481250;
  }
  if (DAT_005c1964 == (FARPROC)0x0) {
    DAT_005c1964 = (FARPROC)&LAB_004811e0;
  }
  return 1;
}


