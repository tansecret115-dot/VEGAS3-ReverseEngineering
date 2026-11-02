/* Module: vegas30.exe
   Function: FUN_0044ef30
   Address: 0044ef30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044ef30(HDC param_1,int *param_2,BITMAPINFO *param_3,int param_4)

{
  ushort uVar1;
  int SrcWidth;
  int iVar2;
  int DestHeight;
  DWORD DVar3;
  int DestWidth;
  
  if (param_3 == (BITMAPINFO *)0x0) {
    return 0;
  }
  SrcWidth = (param_3->bmiHeader).biWidth;
  iVar2 = (param_3->bmiHeader).biHeight;
  DestWidth = param_2[2] - *param_2;
  DestHeight = param_2[3] - param_2[1];
  if (param_4 != 0) {
    DVar3 = (param_3->bmiHeader).biClrUsed;
    if (DVar3 == 0) {
      uVar1 = (param_3->bmiHeader).biBitCount;
      if (uVar1 < 9) {
        DVar3 = 1 << ((byte)uVar1 & 0x1f);
      }
    }
    StretchDIBits(param_1,*param_2,param_2[1],DestWidth,param_4,0,iVar2 - param_4,SrcWidth,param_4,
                  &param_3->bmiColors[DVar3 - 10].rgbBlue + (param_3->bmiHeader).biSize,param_3,0,
                  0xcc0020);
    DVar3 = (param_3->bmiHeader).biClrUsed;
    if ((DVar3 == 0) && (uVar1 = (param_3->bmiHeader).biBitCount, uVar1 < 9)) {
      DVar3 = 1 << ((byte)uVar1 & 0x1f);
    }
    StretchDIBits(param_1,*param_2,param_2[3] - param_4,DestWidth,param_4,0,0,SrcWidth,param_4,
                  &param_3->bmiColors[DVar3 - 10].rgbBlue + (param_3->bmiHeader).biSize,param_3,0,
                  0xcc0020);
    DestHeight = DestHeight + param_4 * -2;
  }
  if (0 < DestHeight) {
    DVar3 = (param_3->bmiHeader).biClrUsed;
    if (DVar3 == 0) {
      uVar1 = (param_3->bmiHeader).biBitCount;
      if (uVar1 < 9) {
        DVar3 = 1 << ((byte)uVar1 & 0x1f);
      }
    }
    StretchDIBits(param_1,*param_2,param_2[1] + param_4,DestWidth,DestHeight,0,param_4,SrcWidth,
                  iVar2 + param_4 * -2,
                  &param_3->bmiColors[DVar3 - 10].rgbBlue + (param_3->bmiHeader).biSize,param_3,0,
                  0xcc0020);
  }
  return 1;
}


