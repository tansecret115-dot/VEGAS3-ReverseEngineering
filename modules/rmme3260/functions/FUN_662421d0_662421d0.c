/* Module: rmme3260.dll
   Function: FUN_662421d0
   Address: 662421d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662421d0(void)

{
  WNDCLASSA local_2c;
  
  if (DAT_6627cfd4 == 0) {
    local_2c.style = 0;
    local_2c.lpfnWndProc = CPNSiteWindowedProc;
    local_2c.cbClsExtra = 0;
    local_2c.cbWndExtra = 0;
    local_2c.hInstance = GetModuleHandleA((LPCSTR)0x0);
    local_2c.hIcon = (HICON)0x0;
    local_2c.hCursor = (HCURSOR)0x0;
    local_2c.hbrBackground = (HBRUSH)0x0;
    local_2c.lpszMenuName = (LPCSTR)0x0;
    local_2c.lpszClassName = PTR_s_RMAVideoClass_6626fe84;
    RegisterClassA(&local_2c);
  }
  DAT_6627cfd4 = DAT_6627cfd4 + 1;
  return;
}


