/* Module: vegas30k.dll
   Function: FUN_010cd8f0
   Address: 010cd8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010cd8f0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iStack00000010;
  
  iVar1 = ftol();
  if (iVar1 == 0x4000) {
    if (0 < (int)param_3) {
      iVar1 = param_2 - param_1;
      iStack00000010 = param_3;
      pbVar6 = (byte *)(param_1 + 2);
      do {
        uVar4 = (uint)pbVar6[1];
        if (uVar4 == 0) {
          param_3 = (uint)pbVar6[-2];
        }
        else {
          uVar3 = ((uint)pbVar6[iVar1 + -2] * 0xff) / uVar4;
          param_3 = uVar3 & 0xff;
          if (0xfe < uVar3) {
            param_3 = 0xff;
          }
        }
        iVar7 = (int)(short)(ushort)pbVar6[1];
        iVar2 = (param_3 - pbVar6[-2]) * iVar7;
        pbVar6[-2] = (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + pbVar6[-2];
        if (uVar4 == 0) {
          param_1 = (uint)pbVar6[-1];
        }
        else {
          uVar3 = ((uint)pbVar6[iVar1 + -1] * 0xff) / uVar4;
          param_1 = uVar3 & 0xff;
          if (0xfe < uVar3) {
            param_1 = 0xff;
          }
        }
        iVar2 = (param_1 - pbVar6[-1]) * iVar7;
        pbVar6[-1] = (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + pbVar6[-1];
        if (uVar4 == 0) {
          param_2 = (uint)*pbVar6;
        }
        else {
          uVar3 = ((uint)pbVar6[iVar1] * 0xff) / uVar4;
          param_2 = uVar3 & 0xff;
          if (0xfe < uVar3) {
            param_2 = 0xff;
          }
        }
        iVar7 = (param_2 - *pbVar6) * iVar7;
        *pbVar6 = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *pbVar6;
        if ((int)(pbVar6[1] + uVar4) < 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = pbVar6[1] + uVar4;
          if (0xff < uVar4) {
            uVar4 = 0xff;
          }
        }
        pbVar6[1] = (byte)uVar4;
        pbVar6 = pbVar6 + 4;
        iStack00000010 = iStack00000010 + -1;
      } while (iStack00000010 != 0);
      return;
    }
  }
  else if (0 < (int)param_3) {
    iVar2 = param_2 - param_1;
    iStack00000010 = param_3;
    pbVar6 = (byte *)(param_1 + 2);
    do {
      iVar7 = (int)((uint)pbVar6[1] * iVar1 + ((int)((uint)pbVar6[1] * iVar1) >> 0x1f & 0x3fffU)) >>
              0xe;
      if (iVar7 == 0) {
        param_3 = (uint)pbVar6[-2];
      }
      else {
        uVar4 = (int)((uint)pbVar6[iVar2 + -2] * 0xff) / iVar7;
        param_3 = uVar4 & 0xff;
        if (0xfe < (int)uVar4) {
          param_3 = 0xff;
        }
      }
      iVar8 = (int)(short)iVar7;
      iVar5 = (param_3 - pbVar6[-2]) * iVar8;
      pbVar6[-2] = (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + pbVar6[-2];
      if (iVar7 == 0) {
        param_1 = (uint)pbVar6[-1];
      }
      else {
        uVar4 = (int)((uint)pbVar6[iVar2 + -1] * 0xff) / iVar7;
        param_1 = uVar4 & 0xff;
        if (0xfe < (int)uVar4) {
          param_1 = 0xff;
        }
      }
      iVar5 = (param_1 - pbVar6[-1]) * iVar8;
      pbVar6[-1] = (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + pbVar6[-1];
      if (iVar7 == 0) {
        param_2 = (uint)*pbVar6;
      }
      else {
        uVar4 = (int)((uint)pbVar6[iVar2] * 0xff) / iVar7;
        param_2 = uVar4 & 0xff;
        if (0xfe < (int)uVar4) {
          param_2 = 0xff;
        }
      }
      iVar8 = (param_2 - *pbVar6) * iVar8;
      *pbVar6 = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + *pbVar6;
      if ((int)((uint)pbVar6[1] + iVar7) < 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (uint)pbVar6[1] + iVar7;
        if (0xff < iVar7) {
          iVar7 = 0xff;
        }
      }
      pbVar6[1] = (byte)iVar7;
      pbVar6 = pbVar6 + 4;
      iStack00000010 = iStack00000010 + -1;
    } while (iStack00000010 != 0);
  }
  return;
}


