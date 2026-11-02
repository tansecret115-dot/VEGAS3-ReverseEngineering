/* Module: vidcap30.exe
   Function: _SpreadTerminate@8
   Address: 00508fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SpreadTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0x108fe0  719  _SpreadTerminate@8 */
  UnregisterClassA(param_2,param_1);
  return;
}


