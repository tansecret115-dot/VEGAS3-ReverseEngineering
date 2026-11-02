/* Module: qt4plug.dll
   Function: FUN_5f547730
   Address: 5f547730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f547730(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_5f5a43d4 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_5f5a43e0 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_5f5a43dc = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_5f5a43d8 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_5f5a43e4 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_5f5a43d4 == (FARPROC)0x0) {
    DAT_5f5a43d4 = (FARPROC)&LAB_5f547600;
  }
  if (DAT_5f5a43e0 == (FARPROC)0x0) {
    DAT_5f5a43e0 = FUN_5f547490;
  }
  if (DAT_5f5a43dc == (FARPROC)0x0) {
    DAT_5f5a43dc = (FARPROC)&LAB_5f547450;
  }
  if (DAT_5f5a43d8 == (FARPROC)0x0) {
    DAT_5f5a43d8 = (FARPROC)&LAB_5f547550;
  }
  if (DAT_5f5a43e4 == (FARPROC)0x0) {
    DAT_5f5a43e4 = (FARPROC)&LAB_5f5474e0;
  }
  return 1;
}


