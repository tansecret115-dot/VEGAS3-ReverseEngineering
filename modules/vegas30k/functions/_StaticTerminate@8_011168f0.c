/* Module: vegas30k.dll
   Function: _StaticTerminate@8
   Address: 011168f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _StaticTerminate_8(HINSTANCE param_1,LPCSTR param_2)

{
                    /* 0x1168f0  1339  _StaticTerminate@8 */
  if (DAT_012af7c0 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_012af7c0);
    DAT_012af7c0 = (HGDIOBJ)0x0;
  }
  UnregisterClassA(param_2,param_1);
  return;
}


