/* Module: vidcap30.exe
   Function: _SfIsHighColor@0
   Address: 0049d1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfIsHighColor_0(void)

{
  HDC hdc;
  int iVar1;
  
                    /* 0x9d1e0  468  _SfIsHighColor@0 */
  if (DAT_005c1978 == 0) {
    DAT_005c1978 = 1;
    hdc = GetDC((HWND)0x0);
    iVar1 = GetDeviceCaps(hdc,0xc);
    DAT_005c16b8 = (uint)(0xf < iVar1);
    ReleaseDC((HWND)0x0,hdc);
    return DAT_005c16b8;
  }
  return DAT_005c16b8;
}


