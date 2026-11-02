/* Module: rmme3260.dll
   Function: FUN_662379f0
   Address: 662379f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662379f0(void)

{
  WNDCLASSA local_2c;
  
  if (DAT_6627cf28 == 0) {
    local_2c.style = 0;
    local_2c.lpfnWndProc = CPNSiteWindowedProc;
    local_2c.cbClsExtra = 0;
    local_2c.cbWndExtra = 0;
    local_2c.hInstance = (HINSTANCE)FUN_662379e0();
    local_2c.hIcon = (HICON)0x0;
    local_2c.hCursor = (HCURSOR)0x0;
    local_2c.hbrBackground = (HBRUSH)0x0;
    local_2c.lpszMenuName = (LPCSTR)0x0;
    local_2c.lpszClassName = s_CPNSiteWindowed_6626fd90;
    RegisterClassA(&local_2c);
  }
  DAT_6627cf28 = DAT_6627cf28 + 1;
  return;
}


