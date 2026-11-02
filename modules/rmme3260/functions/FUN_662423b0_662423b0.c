/* Module: rmme3260.dll
   Function: FUN_662423b0
   Address: 662423b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662423b0(void)

{
  WNDCLASSA local_2c;
  
  if (DAT_6627cff4 == 0) {
    local_2c.style = 3;
    local_2c.lpfnWndProc = CPNNewFullScreenWindow::WindowProc;
    local_2c.cbClsExtra = 0;
    local_2c.cbWndExtra = 4;
    local_2c.hInstance = GetModuleHandleA((LPCSTR)0x0);
    local_2c.hIcon = (HICON)0x0;
    local_2c.hCursor = (HCURSOR)0x0;
    local_2c.hbrBackground = GetStockObject(4);
    local_2c.lpszMenuName = (LPCSTR)0x0;
    local_2c.lpszClassName = PTR_s_RMAFullScreenWindowClass_6626fe8c;
    RegisterClassA(&local_2c);
  }
  DAT_6627cff4 = DAT_6627cff4 + 1;
  return;
}


