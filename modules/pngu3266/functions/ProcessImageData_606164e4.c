/* Module: pngu3266.dll
   Function: ProcessImageData
   Address: 606164e4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: long __thiscall XPNGifImage::ProcessImageData(class CGIFImage &,unsigned char *
   &,unsigned long) */

long __thiscall
XPNGifImage::ProcessImageData(XPNGifImage *this,CGIFImage *param_1,uchar **param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uchar *puVar3;
  long lVar4;
  
                    /* 0x264e4  1723  ?ProcessImageData@XPNGifImage@@IAEJAAVCGIFImage@@AAPAEK@Z */
  lVar4 = FUN_6061f030(param_1,param_3);
  if (lVar4 == 0) {
    lVar4 = FUN_6061f350(param_1,*param_2,param_3);
  }
  if (lVar4 == 0) {
    puVar3 = *param_2;
    pbVar1 = puVar3 + 1;
    *param_2 = pbVar1;
    while (pbVar1 < puVar3 + param_3) {
      bVar2 = **param_2;
      if (bVar2 == 0) break;
      pbVar1 = *param_2 + bVar2 + 1;
      *param_2 = pbVar1;
    }
    if (**param_2 == '\0') {
      *param_2 = *param_2 + 1;
    }
  }
  return lVar4;
}


