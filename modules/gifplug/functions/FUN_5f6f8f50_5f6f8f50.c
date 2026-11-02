/* Module: gifplug.dll
   Function: FUN_5f6f8f50
   Address: 5f6f8f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6f8f50(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_5f70c16c = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_5f70c178 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_5f70c174 = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_5f70c170 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_5f70c17c = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_5f70c16c == (FARPROC)0x0) {
    DAT_5f70c16c = (FARPROC)&LAB_5f6f8e20;
  }
  if (DAT_5f70c178 == (FARPROC)0x0) {
    DAT_5f70c178 = FUN_5f6f8cb0;
  }
  if (DAT_5f70c174 == (FARPROC)0x0) {
    DAT_5f70c174 = (FARPROC)&LAB_5f6f8c70;
  }
  if (DAT_5f70c170 == (FARPROC)0x0) {
    DAT_5f70c170 = (FARPROC)&LAB_5f6f8d70;
  }
  if (DAT_5f70c17c == (FARPROC)0x0) {
    DAT_5f70c17c = (FARPROC)&LAB_5f6f8d00;
  }
  return 1;
}


