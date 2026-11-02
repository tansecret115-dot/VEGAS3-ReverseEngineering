/* Module: vidcap30.exe
   Function: _PanTerminate@8
   Address: 0051a180
   Source: Ghidra pseudocode (Stage 10 batch) */


void _PanTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0x11a180  198  _PanTerminate@8 */
  UnregisterClassA(param_2,param_1);
  return;
}


