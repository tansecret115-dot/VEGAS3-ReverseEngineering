/* Module: vidcap30.exe
   Function: _SpinnerTerminate@8
   Address: 004af300
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SpinnerTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0xaf300  716  _SpinnerTerminate@8 */
  if (DAT_005c22c8 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_005c22c8);
    DAT_005c22c8 = (HGDIOBJ)0x0;
  }
  UnregisterClassA(param_2,param_1);
  return;
}


