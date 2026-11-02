/* Module: sfs4rw.dll
   Function: FUN_0048a9c0
   Address: 0048a9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048a9c0(int param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_4;
  
  iVar12 = param_1;
  local_4 = 8;
  piVar8 = (int *)(param_1 + 8);
  do {
    iVar11 = piVar8[-2] + piVar8[5];
    sVar7 = (short)piVar8[-2] - (short)piVar8[5];
    iVar10 = piVar8[-1] + piVar8[4];
    sVar5 = (short)piVar8[-1] - (short)piVar8[4];
    iVar9 = piVar8[3] + *piVar8;
    sVar6 = (short)*piVar8 - (short)piVar8[3];
    iVar13 = piVar8[1] + piVar8[2];
    sVar4 = (short)piVar8[1] - (short)piVar8[2];
    iVar1 = iVar11 + iVar13;
    sVar3 = (short)iVar11 - (short)iVar13;
    iVar11 = iVar9 + iVar10;
    sVar2 = (short)iVar10 - (short)iVar9;
    piVar8[2] = (iVar1 - iVar11) * 4;
    piVar8[-2] = (iVar11 + iVar1) * 4;
    iVar11 = (short)(sVar2 + sVar3) * 0x1151;
    *piVar8 = iVar11 + 0x400 + sVar3 * 0x187e >> 0xb;
    piVar8[4] = iVar11 + sVar2 * -0x3b21 + 0x400 >> 0xb;
    iVar11 = (short)(sVar4 + sVar5 + sVar6 + sVar7) * 0x25a1;
    iVar13 = (short)(sVar7 + sVar4) * -0x1ccd;
    iVar10 = (short)(sVar5 + sVar6) * -0x5203;
    iVar9 = iVar11 + (short)(sVar4 + sVar5) * -0x3ec5;
    iVar11 = iVar11 + (short)(sVar6 + sVar7) * -0xc7c;
    piVar8[5] = sVar4 * 0x98e + iVar9 + 0x400 + iVar13 >> 0xb;
    piVar8[3] = sVar6 * 0x41b3 + iVar11 + 0x400 + iVar10 >> 0xb;
    piVar8[1] = sVar5 * 0x6254 + iVar9 + 0x400 + iVar10 >> 0xb;
    piVar8[-1] = iVar11 + sVar7 * 0x300b + 0x400 + iVar13 >> 0xb;
    local_4 = local_4 + -1;
    piVar8 = piVar8 + 8;
  } while (local_4 != 0);
  param_1 = 8;
  piVar8 = (int *)(iVar12 + 0x40);
  do {
    iVar12 = piVar8[-0x10] + piVar8[0x28];
    sVar7 = (short)piVar8[-0x10] - (short)piVar8[0x28];
    iVar11 = piVar8[-8] + piVar8[0x20];
    sVar5 = (short)piVar8[-8] - (short)piVar8[0x20];
    iVar10 = piVar8[0x18] + *piVar8;
    sVar6 = (short)*piVar8 - (short)piVar8[0x18];
    iVar9 = piVar8[8] + piVar8[0x10];
    sVar4 = (short)piVar8[8] - (short)piVar8[0x10];
    iVar13 = iVar12 + iVar9;
    sVar3 = (short)iVar12 - (short)iVar9;
    iVar12 = iVar10 + iVar11;
    sVar2 = (short)iVar11 - (short)iVar10;
    piVar8[0x10] = (iVar13 - iVar12) + 2 >> 2;
    piVar8[-0x10] = iVar12 + 2 + iVar13 >> 2;
    iVar12 = (short)(sVar2 + sVar3) * 0x1151;
    *piVar8 = iVar12 + 0x4000 + sVar3 * 0x187e >> 0xf;
    piVar8[0x20] = iVar12 + sVar2 * -0x3b21 + 0x4000 >> 0xf;
    iVar12 = (short)(sVar4 + sVar5 + sVar6 + sVar7) * 0x25a1;
    iVar9 = (short)(sVar7 + sVar4) * -0x1ccd;
    iVar11 = (short)(sVar5 + sVar6) * -0x5203;
    iVar10 = iVar12 + (short)(sVar4 + sVar5) * -0x3ec5;
    iVar12 = iVar12 + (short)(sVar6 + sVar7) * -0xc7c;
    piVar8[0x28] = sVar4 * 0x98e + iVar10 + 0x4000 + iVar9 >> 0xf;
    piVar8[0x18] = sVar6 * 0x41b3 + iVar12 + 0x4000 + iVar11 >> 0xf;
    piVar8[8] = sVar5 * 0x6254 + iVar10 + 0x4000 + iVar11 >> 0xf;
    piVar8[-8] = iVar12 + sVar7 * 0x300b + 0x4000 + iVar9 >> 0xf;
    param_1 = param_1 + -1;
    piVar8 = piVar8 + 1;
  } while (param_1 != 0);
  return;
}


