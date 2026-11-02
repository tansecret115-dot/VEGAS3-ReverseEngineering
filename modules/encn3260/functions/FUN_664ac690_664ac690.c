/* Module: encn3260.dll
   Function: FUN_664ac690
   Address: 664ac690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664ac690(void)

{
  WNDCLASSA local_2c;
  
  if (DAT_664f07ec == 0) {
    local_2c.style = 3;
    local_2c.lpfnWndProc = CPNNewFullScreenWindow::WindowProc;
    local_2c.cbClsExtra = 0;
    local_2c.cbWndExtra = 4;
    local_2c.hInstance = GetModuleHandleA((LPCSTR)0x0);
    local_2c.hIcon = (HICON)0x0;
    local_2c.hCursor = (HCURSOR)0x0;
    local_2c.hbrBackground = GetStockObject(4);
    local_2c.lpszMenuName = (LPCSTR)0x0;
    local_2c.lpszClassName = PTR_s_RMAFullScreenWindowClass_664e33ac;
    RegisterClassA(&local_2c);
  }
  DAT_664f07ec = DAT_664f07ec + 1;
  return;
}


