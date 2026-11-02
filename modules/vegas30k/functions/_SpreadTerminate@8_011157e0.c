/* Module: vegas30k.dll
   Function: _SpreadTerminate@8
   Address: 011157e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SpreadTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0x1157e0  1337  _SpreadTerminate@8 */
  UnregisterClassA(param_2,param_1);
  return;
}


