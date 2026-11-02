/* Module: vidcap30.exe
   Function: _FaderTerminate@8
   Address: 00520a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void _FaderTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0x120a10  166  _FaderTerminate@8 */
  UnregisterClassA(param_2,param_1);
  return;
}


