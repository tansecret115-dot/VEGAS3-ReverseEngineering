/* Module: vegas30k.dll
   Function: _SfOleInit@4
   Address: 010b5b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfOleInit_4(int param_1)

{
  HRESULT HVar1;
  
                    /* 0xb5b40  1151  _SfOleInit@4 */
  if (param_1 == 0) {
    if (DAT_0120e5b0 != 0) {
      OleUninitialize();
      DAT_0120e5b0 = 0;
    }
  }
  else if (DAT_0120e5b0 == 0) {
    HVar1 = OleInitialize((LPVOID)0x0);
    DAT_0120e5b0 = (uint)(-1 < HVar1);
    return;
  }
  return;
}


