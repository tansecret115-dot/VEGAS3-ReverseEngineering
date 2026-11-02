/* Module: vidcap30.exe
   Function: _SfOleInit@4
   Address: 0047ffe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfOleInit_4(int param_1)

{
  HRESULT HVar1;
  
                    /* 0x7ffe0  578  _SfOleInit@4 */
  if (param_1 == 0) {
    if (DAT_005c16c0 != 0) {
      OleUninitialize();
      DAT_005c16c0 = 0;
    }
  }
  else if (DAT_005c16c0 == 0) {
    HVar1 = OleInitialize((LPVOID)0x0);
    DAT_005c16c0 = (uint)(-1 < HVar1);
    return;
  }
  return;
}


