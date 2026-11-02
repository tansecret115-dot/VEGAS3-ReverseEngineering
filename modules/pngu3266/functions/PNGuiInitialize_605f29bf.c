/* Module: pngu3266.dll
   Function: PNGuiInitialize
   Address: 605f29bf
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNGuiInitialize(void)

{
  WNDCLASSA local_2c;
  
                    /* 0x29bf  2230  PNGuiInitialize */
  DAT_60649844 = DAT_60649844 + 1;
  if (DAT_60649844 < 2) {
    FUN_6061d7a0((char *)0x0);
    FUN_6061d8e0(DAT_60649838,0x3e9);
    FUN_6061d920(0x3e9);
    Ordinal_17();
    CPNDrawHelper::Initialize();
    CPNTimer::Initialize();
    CPNTipManager::Initialize();
    DAT_60649840 = _PNGuiGetAppHandle_0();
    memset(&local_2c,0,0x28);
    local_2c.style = 8;
    local_2c.lpfnWndProc = DefWindowProcA_exref;
    local_2c.cbClsExtra = 0;
    local_2c.cbWndExtra = 0;
    local_2c.hInstance = (HINSTANCE)_PNGuiGetAppHandle_0();
    local_2c.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_2c.lpszClassName = DAT_60649818;
    local_2c.hCursor = (HCURSOR)0x0;
    local_2c.hbrBackground = (HBRUSH)0x0;
    local_2c.lpszMenuName = (LPCSTR)0x0;
    RegisterClassA(&local_2c);
  }
  return;
}


