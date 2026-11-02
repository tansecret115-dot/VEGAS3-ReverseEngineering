/* Module: vidcap30.exe
   Function: _TabControlTerminate@8
   Address: 004a9fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _TabControlTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0xa9fd0  723  _TabControlTerminate@8 */
  UnregisterClassA(param_2,param_1);
  return;
}


