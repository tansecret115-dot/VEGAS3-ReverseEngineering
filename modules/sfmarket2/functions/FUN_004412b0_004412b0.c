/* Module: sfmarket2.dll
   Function: FUN_004412b0
   Address: 004412b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004412b0(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_004ab13c = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_004ab148 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_004ab144 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_004ab140 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_004ab14c = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_004ab13c == (FARPROC)0x0) {
    DAT_004ab13c = (FARPROC)&LAB_00441180;
  }
  if (DAT_004ab148 == (FARPROC)0x0) {
    DAT_004ab148 = FUN_00441010;
  }
  if (DAT_004ab144 == (FARPROC)0x0) {
    DAT_004ab144 = (FARPROC)&LAB_00440fd0;
  }
  if (DAT_004ab140 == (FARPROC)0x0) {
    DAT_004ab140 = (FARPROC)&LAB_004410d0;
  }
  if (DAT_004ab14c == (FARPROC)0x0) {
    DAT_004ab14c = (FARPROC)&LAB_00441060;
  }
  return 1;
}


