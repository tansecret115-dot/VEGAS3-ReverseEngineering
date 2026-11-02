/* Module: vegas30k.dll
   Function: _MeterTerminate@8
   Address: 0107bdb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _MeterTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0x7bdb0  684  _MeterTerminate@8 */
  UnregisterClassA(param_2,param_1);
  return;
}


