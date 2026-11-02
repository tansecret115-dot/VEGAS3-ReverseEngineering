/* Module: vegas30k.dll
   Function: _SfIsHighColor@0
   Address: 01055f40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfIsHighColor_0(void)

{
  HDC hdc;
  int iVar1;
  
                    /* 0x55f40  1031  _SfIsHighColor@0 */
  if (DAT_0120e868 == 0) {
    DAT_0120e868 = 1;
    hdc = GetDC((HWND)0x0);
    iVar1 = GetDeviceCaps(hdc,0xc);
    DAT_0120e5a8 = (uint)(0xf < iVar1);
    ReleaseDC((HWND)0x0,hdc);
    return DAT_0120e5a8;
  }
  return DAT_0120e5a8;
}


