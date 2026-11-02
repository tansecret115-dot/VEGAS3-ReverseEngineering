/* Module: vegas30.exe
   Function: PMBlend_DUALALPHACH
   Address: 00582f90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall PMBlend_DUALALPHACH(struct tSFRGBA *,struct tSFRGBA *,unsigned long,unsigned char)
    */

void PMBlend_DUALALPHACH(tSFRGBA *param_1,tSFRGBA *param_2,ulong param_3,uchar param_4)

{
  uint uVar1;
  int iVar2;
  tSFRGBA *ptVar3;
  tSFRGBA tVar4;
  tSFRGBA *ptVar5;
  ulong local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
                    /* 0x182f90  13  ?PMBlend_DUALALPHACH@@YGXPAUtSFRGBA@@0KE@Z */
  if (param_3 != 0) {
    local_14 = param_3;
    ptVar3 = param_1;
    ptVar5 = param_2;
    do {
      uVar1 = ((uint)(byte)ptVar5[3] * 0xff) / 0xff;
      local_c = (uint)(byte)ptVar5[1];
      local_4 = (uint)(byte)*ptVar5;
      param_2._0_1_ = (char)uVar1;
      tVar4 = (tSFRGBA)(((char)ptVar3[3] - (char)(((byte)ptVar3[3] * uVar1) / 0xff)) + (char)param_2
                       );
      param_3 = (ulong)(byte)tVar4;
      if (tVar4 != (tSFRGBA)0x0) {
        param_1 = (tSFRGBA *)(uint)(byte)ptVar3[2];
        uVar1 = (param_3 * 0xff) / (((byte)ptVar3[3] + uVar1) / 2);
        iVar2 = ((uint)(byte)ptVar5[2] - (int)param_1) * param_3;
        local_10 = (uint)(byte)ptVar3[1];
        ptVar3[2] = SUB41(((byte)((char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + (char)ptVar3[2]) *
                          uVar1) / 0xff,0);
        iVar2 = (local_c - local_10) * param_3;
        local_8 = (uint)(byte)*ptVar3;
        ptVar3[1] = SUB41(((byte)((char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + (char)ptVar3[1]) *
                          uVar1) / 0xff,0);
        iVar2 = (local_4 - local_8) * param_3;
        *ptVar3 = SUB41(((byte)((char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + (char)*ptVar3) *
                        uVar1) / 0xff,0);
        ptVar3[3] = tVar4;
      }
      ptVar5 = ptVar5 + 4;
      ptVar3 = ptVar3 + 4;
      local_14 = local_14 - 1;
    } while (local_14 != 0);
  }
  return;
}


