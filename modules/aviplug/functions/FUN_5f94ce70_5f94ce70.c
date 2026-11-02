/* Module: aviplug.dll
   Function: FUN_5f94ce70
   Address: 5f94ce70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f94ce70(int *param_1,short *param_2,byte param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  short *psVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  
  iVar2 = FUN_5f94cdc0(param_1,param_2,param_3);
  psVar5 = (short *)0x1;
  if (iVar2 == 1) {
    return 0x8000ffff;
  }
  iVar2 = *(int *)(param_2 + 2);
  if (iVar2 == 32000) {
    if (param_1[7] == 6) {
      param_1[5] = 0x4f0;
      param_1[6] = 0x510;
      param_1[0xc] = 0x10;
      param_1[1] = (int)&DAT_5f9d8894;
      param_1[2] = 1;
      bVar1 = 2;
    }
    else {
      param_1[5] = 0x41d;
      param_1[6] = 0x438;
      param_1[0xc] = 0xe;
      param_1[1] = (int)&DAT_5f9d8814;
      param_1[2] = 0xf;
      bVar1 = 2;
    }
  }
  else if (iVar2 == 0xac44) {
    if (param_1[7] == 6) {
      param_1[5] = 0x6ce;
      param_1[6] = 0x6fa;
      param_1[0xc] = 0x16;
      param_1[1] = (int)&DAT_5f9d8890;
      param_1[2] = 1;
      bVar1 = 1;
    }
    else {
      param_1[5] = 0x5ac;
      param_1[6] = 0x5d1;
      param_1[0xc] = 0x13;
      param_1[1] = (int)&DAT_5f9d84f4;
      param_1[2] = 100;
      bVar1 = 1;
    }
  }
  else if (iVar2 == 48000) {
    if (param_1[7] == 6) {
      param_1[5] = 0x768;
      param_1[6] = 0x798;
      param_1[0xc] = 0x18;
      param_1[1] = (int)&DAT_5f9d888c;
      param_1[2] = 1;
      bVar1 = 0;
    }
    else {
      param_1[5] = 0x62c;
      param_1[6] = 0x654;
      param_1[0xc] = 0x14;
      param_1[1] = (int)&DAT_5f9d84cc;
      param_1[2] = 5;
      bVar1 = 0;
    }
  }
  else {
    bVar1 = (byte)param_2;
  }
  if ((param_3 & 1) == 0) {
    if (param_2[1] == 2) {
      *(byte *)((int)param_1 + 0x35) = *(byte *)((int)param_1 + 0x35) & 0xf0;
      *(byte *)((int)param_1 + 0x3d) = *(byte *)((int)param_1 + 0x3d) & 0xf1 | 1;
      iVar2 = 2;
      pbVar4 = (byte *)((int)param_1 + 0x37);
      do {
        pbVar4[-2] = pbVar4[-2] & 0x8f;
        iVar2 = iVar2 + -1;
        *pbVar4 = *pbVar4 & 0xc0 | (bVar1 & 7) << 3;
        pbVar4[1] = 0x1f;
        pbVar4[2] = 0xcf;
        pbVar4[3] = 0xa0;
        pbVar4[4] = 0xff;
        pbVar4 = pbVar4 + 8;
      } while (iVar2 != 0);
      param_1[0x12] = 0xc00;
    }
    else {
      iVar2 = param_1[9];
      iVar6 = 2;
      *(byte *)((int)param_1 + iVar2 * 8 + 0x35) =
           *(byte *)((int)param_1 + iVar2 * 8 + 0x35) & 0xf2 | 2;
      param_1[iVar2 * 2 + 0xe] = -0x5f30e1;
      param_1[iVar2 + 0x12] = (-(uint)(iVar2 != 0) & 0x400) + 0x400;
      pbVar4 = (byte *)((int)param_1 + 0x37);
      do {
        pbVar4[-2] = pbVar4[-2] & 0x9f | 0x10;
        iVar6 = iVar6 + -1;
        *pbVar4 = *pbVar4 & 0xc0 | (bVar1 & 7) << 3;
        pbVar4 = pbVar4 + 8;
      } while (iVar6 != 0);
    }
    goto LAB_5f94d15f;
  }
  iVar2 = param_1[9];
  if (param_2[1] == 2) {
    if (iVar2 < 1) {
      iVar6 = 0x700;
    }
    else {
      iVar6 = 0xb00;
    }
    uVar3 = (uint)(0 < iVar2);
    *(byte *)((int)param_1 + uVar3 * 8 + 0x35) = *(byte *)((int)param_1 + uVar3 * 8 + 0x35) & 0xf0;
    param_1[uVar3 * 2 + 0xe] = -0x5f30e1;
    param_1[param_1[0x11] + 0x12] = iVar6;
  }
  else {
    psVar7 = param_2;
    psVar8 = param_2;
    switch(iVar2) {
    case 0:
      psVar5 = (short *)0x0;
    case 2:
      psVar7 = psVar5;
      psVar8 = (short *)0xffffffff;
      break;
    case 1:
switchD_5f94d007_caseD_1:
      psVar7 = (short *)0x0;
      psVar8 = (short *)0x0;
      break;
    case 3:
      if ((param_1[(int)((short *)(param_1[0x11] + -1) + 9)] & 0x300U) == 0x300)
      goto switchD_5f94d007_caseD_1;
      psVar7 = (short *)0x1;
      psVar8 = (short *)(param_1[0x11] + -1);
    }
    uVar3 = (-(uint)(psVar7 != (short *)0x0) & 0x400) + 0x400;
    if (psVar8 == (short *)0xffffffff) {
      uVar3 = uVar3 | 0x100;
      *(byte *)((int)param_1 + (int)psVar7 * 8 + 0x35) =
           *(byte *)((int)param_1 + (int)psVar7 * 8 + 0x35) & 0xf1 | 1;
      param_1[(int)psVar7 * 2 + 0xe] = -0x5f30e1;
    }
    else {
      uVar3 = uVar3 | 0x200;
      *(byte *)((int)param_1 + (int)psVar7 * 8 + 0x35) =
           *(byte *)((int)param_1 + (int)psVar7 * 8 + 0x35) & 0xf2 | 2;
    }
    param_1[param_1[0x11] + 0x12] = uVar3;
  }
  iVar2 = 2;
  pbVar4 = (byte *)((int)param_1 + 0x37);
  do {
    pbVar4[-2] = pbVar4[-2] & 0xbf | 0x30;
    iVar2 = iVar2 + -1;
    *pbVar4 = *pbVar4 & 0xd1 | 0x11;
    pbVar4 = pbVar4 + 8;
  } while (iVar2 != 0);
LAB_5f94d15f:
  *param_4 = param_1[0x11];
  if ((param_3 & 1) != 0) {
    param_1[4] = param_1[4] | 1;
  }
  param_1[0x11] = param_1[0x11] + 1;
  param_1[9] = param_1[9] + (uint)(ushort)param_2[1];
  param_1[8] = *(int *)(param_2 + 2);
  return 0;
}


