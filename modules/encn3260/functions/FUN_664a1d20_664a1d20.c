/* Module: encn3260.dll
   Function: FUN_664a1d20
   Address: 664a1d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664a1d20(void)

{
  WNDCLASSA local_2c;
  
  if (DAT_664f0720 == 0) {
    local_2c.style = 0;
    local_2c.lpfnWndProc = CPNSiteWindowedProc;
    local_2c.cbClsExtra = 0;
    local_2c.cbWndExtra = 0;
    local_2c.hInstance = (HINSTANCE)FUN_664b0670();
    local_2c.hIcon = (HICON)0x0;
    local_2c.hCursor = (HCURSOR)0x0;
    local_2c.hbrBackground = (HBRUSH)0x0;
    local_2c.lpszMenuName = (LPCSTR)0x0;
    local_2c.lpszClassName = s_CPNSiteWindowed_664e32b0;
    RegisterClassA(&local_2c);
  }
  DAT_664f0720 = DAT_664f0720 + 1;
  return;
}


