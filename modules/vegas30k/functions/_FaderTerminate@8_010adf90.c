/* Module: vegas30k.dll
   Function: _FaderTerminate@8
   Address: 010adf90
   Source: Ghidra pseudocode (Stage 10 batch) */


void _FaderTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0xadf90  663  _FaderTerminate@8 */
  UnregisterClassA(param_2,param_1);
  return;
}


