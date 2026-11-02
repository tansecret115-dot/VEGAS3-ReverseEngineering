/* Module: mp3plug.dll
   Function: FUN_5f6bd5c0
   Address: 5f6bd5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6bd5c0(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_5f74d704 = GetProcAddress(hModule,"EnumDisplayMonitors");
    DAT_5f74d710 = GetProcAddress(hModule,"MonitorFromRect");
    DAT_5f74d70c = GetProcAddress(hModule,"MonitorFromPoint");
    DAT_5f74d708 = GetProcAddress(hModule,"GetMonitorInfoA");
    DAT_5f74d714 = GetProcAddress(hModule,"MonitorFromWindow");
  }
  if (DAT_5f74d704 == (FARPROC)0x0) {
    DAT_5f74d704 = (FARPROC)&LAB_5f6bd490;
  }
  if (DAT_5f74d710 == (FARPROC)0x0) {
    DAT_5f74d710 = FUN_5f6bd320;
  }
  if (DAT_5f74d70c == (FARPROC)0x0) {
    DAT_5f74d70c = (FARPROC)&LAB_5f6bd2e0;
  }
  if (DAT_5f74d708 == (FARPROC)0x0) {
    DAT_5f74d708 = (FARPROC)&LAB_5f6bd3e0;
  }
  if (DAT_5f74d714 == (FARPROC)0x0) {
    DAT_5f74d714 = (FARPROC)&LAB_5f6bd370;
  }
  return 1;
}


