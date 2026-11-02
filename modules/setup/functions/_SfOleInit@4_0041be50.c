/* Module: Setup.exe
   Function: _SfOleInit@4
   Address: 0041be50
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfOleInit_4(int param_1)

{
  HRESULT HVar1;
  
                    /* 0x1be50  307  _SfOleInit@4 */
  if (param_1 == 0) {
    if (DAT_00448de8 != 0) {
      OleUninitialize();
      DAT_00448de8 = 0;
    }
  }
  else if (DAT_00448de8 == 0) {
    HVar1 = OleInitialize((LPVOID)0x0);
    DAT_00448de8 = (uint)(-1 < HVar1);
    return;
  }
  return;
}


