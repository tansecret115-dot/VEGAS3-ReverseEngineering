/* Module: vidcap30.exe
   Function: _TrackbarTerminate@8
   Address: 004b3c80
   Source: Ghidra pseudocode (Stage 10 batch) */


void _TrackbarTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0xb3c80  737  _TrackbarTerminate@8 */
  UnregisterClassA(param_2,param_1);
  return;
}


