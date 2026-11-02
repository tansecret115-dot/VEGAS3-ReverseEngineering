/* Module: vidpcore.dll
   Function: FUN_5defec20
   Address: 5defec20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5defec20(uint param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar8 = param_4;
  for (iVar4 = 0x2f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  if (((int)param_2 < 0x10) || (0x16 < (int)param_2)) {
    if ((int)param_2 < 0x17) {
      return 0x80070057;
    }
    if (0x20 < (int)param_2) {
      return 0x80070057;
    }
    bVar1 = false;
    iVar4 = param_2 - 0x17;
  }
  else {
    bVar1 = true;
    iVar4 = param_2 - 0x10;
  }
  if (((int)param_1 < 0x10) || (0x16 < (int)param_1)) {
    if (((int)param_1 < 0x17) || (0x20 < (int)param_1)) {
      return 0x80070057;
    }
    bVar2 = false;
    iVar6 = param_1 - 0x17;
  }
  else {
    bVar2 = true;
    iVar6 = param_2 - 0x10;
  }
  if (bVar1) {
    iVar4 = *(int *)(&DAT_5df35274 + iVar4 * 4);
  }
  else {
    iVar4 = *(int *)(&DAT_5df3560c + iVar4 * 4);
  }
  if (bVar2) {
    iVar6 = *(int *)(&DAT_5df35274 + iVar6 * 4);
  }
  else {
    iVar6 = *(int *)(&DAT_5df3560c + iVar6 * 4);
  }
  uVar7 = param_3 & 0x7fff1f0;
  switch(param_3 & 0xf) {
  case 4:
    uVar7 = uVar7 | 0x10;
  case 3:
    uVar7 = uVar7 | 0x20;
  case 2:
    uVar7 = uVar7 | 0x40;
  case 1:
    param_3 = uVar7 | 0x180;
  }
  if (iVar6 == 0 || iVar4 == 0) {
    param_3 = param_3 | 0x10;
  }
  iVar6 = 0;
  iVar4 = 0;
  *param_4 = param_3;
  if ((param_3 & 0x10) == 0) {
    iVar6 = 2;
    iVar4 = 2;
  }
  if ((param_3 & 0x20) != 0) {
    iVar6 = iVar6 + 1;
  }
  if ((param_3 & 0x40) != 0) {
    iVar4 = iVar4 + 1;
  }
  param_4[2] = param_1;
  param_4[1] = param_2;
  param_4[0x22] = param_3 >> 0x10 & 0xff;
  if (param_5 != (uint *)0x0) {
    uVar7 = *param_5;
    puVar8 = param_4 + 0x26;
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *param_5;
      param_5 = param_5 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar4 = uVar7 + iVar4 * 0x14;
    iVar5 = iVar4 * 4;
    param_4[10] = (uint)(&PTR_LAB_5df360fc)[iVar4];
    param_4[0xb] = (uint)(&PTR_LAB_5df3637c)[iVar4];
    param_4[0xc] = *(uint *)(&DAT_5df35bfc + iVar5);
    param_4[0xd] = *(uint *)(&DAT_5df35e7c + iVar5);
    if ((param_3 & 0x80) != 0) {
      param_4[10] = (uint)(&PTR_LAB_5df35fbc)[iVar4];
      param_4[0xb] = (uint)(&PTR_LAB_5df3623c)[iVar4];
      uVar7 = *(uint *)(&DAT_5df35d3c + iVar5);
      param_4[0xc] = *(uint *)(&DAT_5df35abc + iVar5);
      param_4[0xd] = uVar7;
    }
    if (param_4[10] == 0) {
      return 0x80004001;
    }
  }
  if (bVar1) {
    iVar4 = iVar6 * 7 + (param_2 - 0x10);
    param_4[3] = (uint)(&PTR_LAB_5df352ac)[iVar4];
    param_4[9] = (uint)(&PTR_LAB_5df353fc)[iVar4];
    param_4[5] = (uint)(&PTR_LAB_5df3531c)[iVar4];
    param_4[6] = (uint)(&PTR_LAB_5df3546c)[iVar4];
    puVar3 = (&PTR_LAB_5df3538c)[iVar4];
    param_4[7] = (uint)(&PTR_LAB_5df354dc)[iVar4];
  }
  else {
    iVar4 = (param_2 - 0x17) + iVar6 * 10;
    param_4[3] = (uint)(&PTR_LAB_5df3565c)[iVar4];
    param_4[9] = (uint)(&PTR_LAB_5df3583c)[iVar4];
    param_4[5] = (uint)(&PTR_LAB_5df356fc)[iVar4];
    param_4[6] = (uint)(&PTR_LAB_5df358dc)[iVar4];
    puVar3 = (&PTR_LAB_5df3579c)[iVar4];
    param_4[7] = (uint)(&PTR_LAB_5df3597c)[iVar4];
  }
  param_4[0xe] = (uint)puVar3;
  if (!bVar2) {
    iVar4 = (param_1 - 0x17) + iVar6 * 10;
    puVar3 = (&PTR_LAB_5df355bc)[iVar4];
    param_4[8] = (uint)(&PTR_LAB_5df35a1c)[iVar4];
    param_4[4] = (uint)puVar3;
    return 0;
  }
  iVar4 = iVar6 * 7 + (param_1 - 0x10);
  puVar3 = (&PTR_LAB_5df3523c)[iVar4];
  param_4[8] = (uint)(&PTR_FUN_5df3554c)[iVar4];
  param_4[4] = (uint)puVar3;
  return 0;
}


