/* Module: vidcap30.exe
   Function: _MeterTerminate@8
   Address: 00510d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void _MeterTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0x110d50  187  _MeterTerminate@8 */
  UnregisterClassA(param_2,param_1);
  return;
}


