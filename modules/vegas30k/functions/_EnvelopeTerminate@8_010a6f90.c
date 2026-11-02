/* Module: vegas30k.dll
   Function: _EnvelopeTerminate@8
   Address: 010a6f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void _EnvelopeTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0xa6f90  635  _EnvelopeTerminate@8 */
  UnregisterClassA(param_2,param_1);
  return;
}


