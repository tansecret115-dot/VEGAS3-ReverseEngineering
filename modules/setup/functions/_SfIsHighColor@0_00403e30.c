/* Module: Setup.exe
   Function: _SfIsHighColor@0
   Address: 00403e30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfIsHighColor_0(void)

{
  HDC hdc;
  int iVar1;
  
                    /* 0x3e30  198  _SfIsHighColor@0 */
  if (DAT_004490a0 == 0) {
    DAT_004490a0 = 1;
    hdc = GetDC((HWND)0x0);
    iVar1 = GetDeviceCaps(hdc,0xc);
    DAT_00448de0 = (uint)(0xf < iVar1);
    ReleaseDC((HWND)0x0,hdc);
    return DAT_00448de0;
  }
  return DAT_00448de0;
}


