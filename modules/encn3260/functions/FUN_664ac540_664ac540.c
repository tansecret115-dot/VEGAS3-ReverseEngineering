/* Module: encn3260.dll
   Function: FUN_664ac540
   Address: 664ac540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664ac540(void)

{
  WNDCLASSA local_2c;
  
  if (DAT_664f07cc == 0) {
    local_2c.style = 0;
    local_2c.lpfnWndProc = CPNSiteWindowedProc;
    local_2c.cbClsExtra = 0;
    local_2c.cbWndExtra = 0;
    local_2c.hInstance = GetModuleHandleA((LPCSTR)0x0);
    local_2c.hIcon = (HICON)0x0;
    local_2c.hCursor = (HCURSOR)0x0;
    local_2c.hbrBackground = (HBRUSH)0x0;
    local_2c.lpszMenuName = (LPCSTR)0x0;
    local_2c.lpszClassName = PTR_s_RMAVideoClass_664e33a4;
    RegisterClassA(&local_2c);
  }
  DAT_664f07cc = DAT_664f07cc + 1;
  return;
}


