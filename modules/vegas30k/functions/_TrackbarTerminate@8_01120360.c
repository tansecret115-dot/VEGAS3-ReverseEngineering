/* Module: vegas30k.dll
   Function: _TrackbarTerminate@8
   Address: 01120360
   Source: Ghidra pseudocode (Stage 10 batch) */


void _TrackbarTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0x120360  1355  _TrackbarTerminate@8 */
  UnregisterClassA(param_2,param_1);
  return;
}


