/* Module: stl2plg.dll
   Function: FUN_00428d10
   Address: 00428d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00428d10(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_0047389c = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_004738a8 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_004738a4 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_004738a0 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_004738ac = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_0047389c == (FARPROC)0x0) {
    DAT_0047389c = (FARPROC)&LAB_00428be0;
  }
  if (DAT_004738a8 == (FARPROC)0x0) {
    DAT_004738a8 = FUN_00428a70;
  }
  if (DAT_004738a4 == (FARPROC)0x0) {
    DAT_004738a4 = (FARPROC)&LAB_00428a30;
  }
  if (DAT_004738a0 == (FARPROC)0x0) {
    DAT_004738a0 = (FARPROC)&LAB_00428b30;
  }
  if (DAT_004738ac == (FARPROC)0x0) {
    DAT_004738ac = (FARPROC)&LAB_00428ac0;
  }
  return 1;
}


