/* Module: vegas30k.dll
   Function: _SpinnerTerminate@8
   Address: 01113880
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SpinnerTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0x113880  1334  _SpinnerTerminate@8 */
  if (DAT_012af718 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_012af718);
    DAT_012af718 = (HGDIOBJ)0x0;
  }
  UnregisterClassA(param_2,param_1);
  return;
}


