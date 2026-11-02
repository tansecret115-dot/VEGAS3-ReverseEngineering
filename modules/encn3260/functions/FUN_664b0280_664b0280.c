/* Module: encn3260.dll
   Function: FUN_664b0280
   Address: 664b0280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664b0280(void)

{
  WNDCLASSA local_2c;
  
  if (DAT_664f08b8 == 0) {
    local_2c.style = 0;
    local_2c.lpfnWndProc = CPNSiteStatusTextProc;
    local_2c.cbClsExtra = 0;
    local_2c.cbWndExtra = 0;
    local_2c.hInstance = (HINSTANCE)FUN_664b0670();
    local_2c.hIcon = (HICON)0x0;
    local_2c.hCursor = (HCURSOR)0x0;
    local_2c.hbrBackground = (HBRUSH)0x0;
    local_2c.lpszMenuName = (LPCSTR)0x0;
    local_2c.lpszClassName = s_CPNSiteStatusText_664e3738;
    RegisterClassA(&local_2c);
  }
  DAT_664f08b8 = DAT_664f08b8 + 1;
  return;
}


