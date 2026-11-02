/* Module: sfcdi.dll
   Function: cdtext_RawPWFromPack
   Address: 5bf10220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall cdtext_RawPWFromPack(unsigned char *,struct _cdtextpack *,unsigned int) */

void cdtext_RawPWFromPack(uchar *param_1,_cdtextpack *param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  
                    /* 0x10220  223  ?cdtext_RawPWFromPack@@YGXPAEPAU_cdtextpack@@I@Z */
  for (iVar2 = param_3 * 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = (byte)*param_2 >> 2;
    pbVar1 = param_1 + 1;
    *pbVar1 = ((byte)*param_2 & 3) << 4;
    *pbVar1 = *pbVar1 | (byte)param_2[1] >> 4;
    pbVar1 = param_1 + 2;
    *pbVar1 = ((byte)param_2[1] & 0xf) << 2;
    *pbVar1 = *pbVar1 | (byte)param_2[2] >> 6;
    param_1[3] = (byte)param_2[2] & 0x3f;
    param_1 = param_1 + 4;
    param_2 = param_2 + 3;
  }
  return;
}


