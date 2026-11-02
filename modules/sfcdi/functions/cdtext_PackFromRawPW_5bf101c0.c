/* Module: sfcdi.dll
   Function: cdtext_PackFromRawPW
   Address: 5bf101c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall cdtext_PackFromRawPW(struct _cdtextpack *,unsigned char *,unsigned int) */

void cdtext_PackFromRawPW(_cdtextpack *param_1,uchar *param_2,uint param_3)

{
  _cdtextpack *p_Var1;
  byte *pbVar2;
  int iVar3;
  
                    /* 0x101c0  220  ?cdtext_PackFromRawPW@@YGXPAU_cdtextpack@@PAEI@Z */
  for (iVar3 = param_3 * 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = (_cdtextpack)(*param_2 << 2);
    *param_1 = (_cdtextpack)((byte)*param_1 | param_2[1] >> 4 & 3);
    p_Var1 = param_1 + 1;
    *p_Var1 = (_cdtextpack)(param_2[1] << 4);
    *p_Var1 = (_cdtextpack)((byte)*p_Var1 | param_2[2] >> 2 & 0xf);
    p_Var1 = param_1 + 2;
    pbVar2 = param_2 + 3;
    *p_Var1 = (_cdtextpack)(param_2[2] << 6);
    param_2 = param_2 + 4;
    *p_Var1 = (_cdtextpack)((byte)*p_Var1 | *pbVar2 & 0x3f);
    param_1 = param_1 + 3;
  }
  return;
}


