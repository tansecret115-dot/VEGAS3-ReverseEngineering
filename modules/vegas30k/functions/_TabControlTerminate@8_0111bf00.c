/* Module: vegas30k.dll
   Function: _TabControlTerminate@8
   Address: 0111bf00
   Source: Ghidra pseudocode (Stage 10 batch) */


void _TabControlTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0x11bf00  1341  _TabControlTerminate@8 */
  UnregisterClassA(param_2,param_1);
  return;
}


