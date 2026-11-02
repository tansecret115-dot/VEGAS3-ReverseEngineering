/* Module: pngu3266.dll
   Function: FUN_60612503
   Address: 60612503
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_60612503(void)

{
  undefined3 extraout_var;
  HMODULE hModule;
  bool bVar1;
  
  if (DAT_6064b18c == 0) {
    bVar1 = FUN_606124c6();
    _DAT_6064b190 = CONCAT31(extraout_var,bVar1);
    hModule = GetModuleHandleA(s_USER32_606493e4);
    if (((((hModule != (HMODULE)0x0) &&
          (DAT_6064b170 = GetProcAddress(hModule,s_GetSystemMetrics_606493d0),
          DAT_6064b170 != (FARPROC)0x0)) &&
         (_DAT_6064b174 = GetProcAddress(hModule,s_MonitorFromWindow_606493bc),
         _DAT_6064b174 != (FARPROC)0x0)) &&
        ((_DAT_6064b178 = GetProcAddress(hModule,s_MonitorFromRect_606493ac),
         _DAT_6064b178 != (FARPROC)0x0 &&
         (_DAT_6064b17c = GetProcAddress(hModule,s_MonitorFromPoint_60649398),
         _DAT_6064b17c != (FARPROC)0x0)))) &&
       ((DAT_6064b184 = GetProcAddress(hModule,s_EnumDisplayMonitors_60649384),
        DAT_6064b184 != (FARPROC)0x0 &&
        ((DAT_6064b180 = GetProcAddress(hModule,s_GetMonitorInfoA_60649374),
         DAT_6064b180 != (FARPROC)0x0 &&
         (_DAT_6064b188 = GetProcAddress(hModule,s_EnumDisplayDevicesA_60649360),
         _DAT_6064b188 != (FARPROC)0x0)))))) {
      DAT_6064b18c = 1;
      return true;
    }
    DAT_6064b170 = (FARPROC)0x0;
    _DAT_6064b174 = (FARPROC)0x0;
    _DAT_6064b178 = (FARPROC)0x0;
    _DAT_6064b17c = (FARPROC)0x0;
    DAT_6064b180 = (FARPROC)0x0;
    DAT_6064b184 = (FARPROC)0x0;
    _DAT_6064b188 = (FARPROC)0x0;
    DAT_6064b18c = 1;
    bVar1 = false;
  }
  else {
    bVar1 = DAT_6064b180 != (FARPROC)0x0;
  }
  return bVar1;
}


