/* Module: vegas30k.dll
   Function: FUN_010ce600
   Address: 010ce600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010ce600(uint param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iStack00000010;
  uint uVar3;
  
  iVar2 = ftol();
  if (iVar2 == 0x4000) {
    if (0 < (int)param_3) {
      iVar2 = param_2 - param_1;
      iStack00000010 = param_3;
      pbVar7 = (byte *)(param_1 + 3);
      do {
        bVar1 = pbVar7[iVar2];
        if (pbVar7[iVar2] <= *pbVar7) {
          bVar1 = *pbVar7;
        }
        uVar3 = (uint)bVar1;
        if (uVar3 == 0) {
          param_3 = (uint)pbVar7[-3];
        }
        else {
          uVar5 = ((uint)pbVar7[iVar2 + -3] * 0xff) / uVar3;
          param_3 = uVar5 & 0xff;
          if (0xfe < uVar5) {
            param_3 = 0xff;
          }
        }
        iVar8 = (int)(short)(ushort)bVar1;
        iVar4 = (param_3 - pbVar7[-3]) * iVar8;
        pbVar7[-3] = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + pbVar7[-3];
        if (uVar3 == 0) {
          param_1 = (uint)pbVar7[-2];
        }
        else {
          uVar5 = ((uint)pbVar7[iVar2 + -2] * 0xff) / uVar3;
          param_1 = uVar5 & 0xff;
          if (0xfe < uVar5) {
            param_1 = 0xff;
          }
        }
        iVar4 = (param_1 - pbVar7[-2]) * iVar8;
        pbVar7[-2] = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + pbVar7[-2];
        if (uVar3 == 0) {
          param_2 = (uint)pbVar7[-1];
        }
        else {
          uVar5 = ((uint)pbVar7[iVar2 + -1] * 0xff) / uVar3;
          param_2 = uVar5 & 0xff;
          if (0xfe < uVar5) {
            param_2 = 0xff;
          }
        }
        iVar8 = (param_2 - pbVar7[-1]) * iVar8;
        pbVar7[-1] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + pbVar7[-1];
        if ((int)(*pbVar7 + uVar3) < 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *pbVar7 + uVar3;
          if (0xff < uVar3) {
            uVar3 = 0xff;
          }
        }
        *pbVar7 = (byte)uVar3;
        pbVar7 = pbVar7 + 4;
        iStack00000010 = iStack00000010 + -1;
      } while (iStack00000010 != 0);
      return;
    }
  }
  else if (0 < (int)param_3) {
    iVar4 = param_2 - param_1;
    iStack00000010 = param_3;
    pbVar7 = (byte *)(param_1 + 3);
    do {
      bVar1 = pbVar7[iVar4];
      if (pbVar7[iVar4] <= *pbVar7) {
        bVar1 = *pbVar7;
      }
      iVar8 = (int)((uint)bVar1 * iVar2 + ((int)((uint)bVar1 * iVar2) >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar8 == 0) {
        param_3 = (uint)pbVar7[-3];
      }
      else {
        uVar3 = (int)((uint)pbVar7[iVar4 + -3] * 0xff) / iVar8;
        param_3 = uVar3 & 0xff;
        if (0xfe < (int)uVar3) {
          param_3 = 0xff;
        }
      }
      iVar9 = (int)(short)iVar8;
      iVar6 = (param_3 - pbVar7[-3]) * iVar9;
      pbVar7[-3] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar7[-3];
      if (iVar8 == 0) {
        param_1 = (uint)pbVar7[-2];
      }
      else {
        uVar3 = (int)((uint)pbVar7[iVar4 + -2] * 0xff) / iVar8;
        param_1 = uVar3 & 0xff;
        if (0xfe < (int)uVar3) {
          param_1 = 0xff;
        }
      }
      iVar6 = (param_1 - pbVar7[-2]) * iVar9;
      pbVar7[-2] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar7[-2];
      if (iVar8 == 0) {
        param_2 = (uint)pbVar7[-1];
      }
      else {
        uVar3 = (int)((uint)pbVar7[iVar4 + -1] * 0xff) / iVar8;
        param_2 = uVar3 & 0xff;
        if (0xfe < (int)uVar3) {
          param_2 = 0xff;
        }
      }
      iVar9 = (param_2 - pbVar7[-1]) * iVar9;
      pbVar7[-1] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar7[-1];
      if ((int)((uint)*pbVar7 + iVar8) < 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = (uint)*pbVar7 + iVar8;
        if (0xff < iVar8) {
          iVar8 = 0xff;
        }
      }
      *pbVar7 = (byte)iVar8;
      pbVar7 = pbVar7 + 4;
      iStack00000010 = iStack00000010 + -1;
    } while (iStack00000010 != 0);
  }
  return;
}


