/* Module: pngu3266.dll
   Function: GetMenuBarHeight
   Address: 60612935
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static long __cdecl CPNSystemInfo::GetMenuBarHeight(void) */

long __cdecl CPNSystemInfo::GetMenuBarHeight(void)

{
  undefined4 local_158 [39];
  long local_bc;
  
                    /* 0x22935  1250  ?GetMenuBarHeight@CPNSystemInfo@@SAJXZ */
  local_158[0] = 0x154;
  SystemParametersInfoA(0x29,0,local_158,0);
  return local_bc;
}


