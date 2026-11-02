/* Module: sftrans1.dll
   Function: FUN_004ebd40
   Address: 004ebd40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ebd40(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack00000010;
  
  iVar1 = ftol();
  if (iVar1 == 0x4000) {
    if (0 < (int)param_3) {
      iVar1 = param_2 - param_1;
      iStack00000010 = param_3;
      pbVar4 = (byte *)(param_1 + 2);
      do {
        iVar5 = 0xff - (uint)pbVar4[1];
        if (iVar5 == 0) {
          param_3 = (uint)pbVar4[-2];
        }
        else {
          uVar3 = (int)((uint)pbVar4[iVar1 + -2] * 0xff) / iVar5;
          param_3 = uVar3 & 0xff;
          if (0xfe < (int)uVar3) {
            param_3 = 0xff;
          }
        }
        iVar6 = (int)(short)iVar5;
        iVar2 = (param_3 - pbVar4[-2]) * iVar6;
        pbVar4[-2] = (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + pbVar4[-2];
        if (iVar5 == 0) {
          param_1 = (uint)pbVar4[-1];
        }
        else {
          uVar3 = (int)((uint)pbVar4[iVar1 + -1] * 0xff) / iVar5;
          param_1 = uVar3 & 0xff;
          if (0xfe < (int)uVar3) {
            param_1 = 0xff;
          }
        }
        iVar2 = (param_1 - pbVar4[-1]) * iVar6;
        pbVar4[-1] = (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + pbVar4[-1];
        if (iVar5 == 0) {
          param_2 = (uint)*pbVar4;
        }
        else {
          uVar3 = (int)((uint)pbVar4[iVar1] * 0xff) / iVar5;
          param_2 = uVar3 & 0xff;
          if (0xfe < (int)uVar3) {
            param_2 = 0xff;
          }
        }
        iVar6 = (param_2 - *pbVar4) * iVar6;
        *pbVar4 = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + *pbVar4;
        if ((int)((uint)pbVar4[1] + iVar5) < 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (uint)pbVar4[1] + iVar5;
          if (0xff < iVar5) {
            iVar5 = 0xff;
          }
        }
        pbVar4[1] = (byte)iVar5;
        pbVar4 = pbVar4 + 4;
        iStack00000010 = iStack00000010 + -1;
      } while (iStack00000010 != 0);
      return;
    }
  }
  else if (0 < (int)param_3) {
    iVar5 = param_2 - param_1;
    iStack00000010 = param_3;
    pbVar4 = (byte *)(param_1 + 2);
    do {
      iVar2 = (0xff - (uint)pbVar4[1]) * iVar1;
      iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar2 == 0) {
        param_3 = (uint)pbVar4[-2];
      }
      else {
        uVar3 = (int)((uint)pbVar4[iVar5 + -2] * 0xff) / iVar2;
        param_3 = uVar3 & 0xff;
        if (0xfe < (int)uVar3) {
          param_3 = 0xff;
        }
      }
      iVar7 = (int)(short)iVar2;
      iVar6 = (param_3 - pbVar4[-2]) * iVar7;
      pbVar4[-2] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar4[-2];
      if (iVar2 == 0) {
        param_1 = (uint)pbVar4[-1];
      }
      else {
        uVar3 = (int)((uint)pbVar4[iVar5 + -1] * 0xff) / iVar2;
        param_1 = uVar3 & 0xff;
        if (0xfe < (int)uVar3) {
          param_1 = 0xff;
        }
      }
      iVar6 = (param_1 - pbVar4[-1]) * iVar7;
      pbVar4[-1] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar4[-1];
      if (iVar2 == 0) {
        param_2 = (uint)*pbVar4;
      }
      else {
        uVar3 = (int)((uint)pbVar4[iVar5] * 0xff) / iVar2;
        param_2 = uVar3 & 0xff;
        if (0xfe < (int)uVar3) {
          param_2 = 0xff;
        }
      }
      iVar7 = (param_2 - *pbVar4) * iVar7;
      *pbVar4 = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *pbVar4;
      if ((int)((uint)pbVar4[1] + iVar2) < 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (uint)pbVar4[1] + iVar2;
        if (0xff < iVar2) {
          iVar2 = 0xff;
        }
      }
      pbVar4[1] = (byte)iVar2;
      pbVar4 = pbVar4 + 4;
      iStack00000010 = iStack00000010 + -1;
    } while (iStack00000010 != 0);
  }
  return;
}


