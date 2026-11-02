/* Module: pngu3266.dll
   Function: ProcessImageHeader
   Address: 60616450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: long __thiscall XPNGifImage::ProcessImageHeader(class CGIFImage &,unsigned char *
   &,unsigned long) */

long __thiscall
XPNGifImage::ProcessImageHeader(XPNGifImage *this,CGIFImage *param_1,uchar **param_2,ulong param_3)

{
  uchar uVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar **ppuVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = param_3;
                    /* 0x26450  1724  ?ProcessImageHeader@XPNGifImage@@IAEJAAVCGIFImage@@AAPAEK@Z */
  ppuVar4 = param_2;
  puVar2 = *param_2;
  uVar1 = *puVar2;
  puVar3 = puVar2;
  while (((uVar1 == '!' && (puVar3 < puVar2 + uVar5)) && (puVar3[1] != 0xf9))) {
    *ppuVar4 = puVar3 + 2;
    FUN_6061f5e0((uint *)ppuVar4,0);
    puVar3 = *ppuVar4;
    uVar1 = *puVar3;
  }
  param_2 = (uchar **)*ppuVar4;
  while ((*(char *)param_2 != ',' && (param_2 < puVar2 + uVar5))) {
    param_2 = (uchar **)((int)param_2 + 2);
    FUN_6061f5e0((uint *)&param_2,0);
  }
  lVar6 = FUN_6061f100(param_1,(ushort *)*ppuVar4,(int)(puVar2 + (uVar5 - (int)*ppuVar4)));
  if (lVar6 == 0) {
    *ppuVar4 = (uchar *)((int)param_2 + 10);
    if (*(int *)(param_1 + 0x10) != 0) {
      *ppuVar4 = (uchar *)((int)param_2 + 10) + *(int *)(param_1 + 0x20) * 3;
    }
  }
  return lVar6;
}


