/* Module: vegas30k.dll
   Function: _PanTerminate@8
   Address: 010b3f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void _PanTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0xb3f80  695  _PanTerminate@8 */
  UnregisterClassA(param_2,param_1);
  return;
}


