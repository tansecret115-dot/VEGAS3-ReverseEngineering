/* Module: vidcap30.exe
   Function: _EnvelopeTerminate@8
   Address: 00514710
   Source: Ghidra pseudocode (Stage 10 batch) */


void _EnvelopeTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0x114710  151  _EnvelopeTerminate@8 */
  UnregisterClassA(param_2,param_1);
  return;
}


