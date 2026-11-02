/* Module: pngu3266.dll
   Function: ProcessFileHeader
   Address: 606163eb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: long __thiscall XPNGifImage::ProcessFileHeader(unsigned char * &) */

long __thiscall XPNGifImage::ProcessFileHeader(XPNGifImage *this,uchar **param_1)

{
  long lVar1;
  int iVar2;
  
                    /* 0x263eb  1722  ?ProcessFileHeader@XPNGifImage@@IAEJAAPAE@Z */
  if (*param_1 == (uchar *)0x0) {
    lVar1 = -0x7ffbfff7;
  }
  else {
    lVar1 = -0x7ffbff7f;
    iVar2 = strncmp((char *)*param_1,&DAT_606493f4,3);
    if (iVar2 == 0) {
      *param_1 = *param_1 + 3;
      iVar2 = strncmp((char *)*param_1,&DAT_606493f0,3);
      if ((iVar2 == 0) || (iVar2 = strncmp((char *)*param_1,&DAT_606493ec,3), iVar2 == 0)) {
        *param_1 = *param_1 + 3;
        lVar1 = 0;
      }
    }
  }
  return lVar1;
}


