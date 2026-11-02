/* Module: sftrans1.dll
   Function: FUN_005443e0
   Address: 005443e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005443e0(int param_1,byte *param_2,undefined4 param_3,char param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x84)) {
    ppuVar5 = &PTR_DAT_00576ad8;
    do {
      pbVar6 = *ppuVar5;
      pbVar2 = param_2;
      do {
        bVar1 = *pbVar2;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00544420:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00544425;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00544420;
        pbVar2 = pbVar2 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00544425:
      if (iVar3 == 0) break;
      iVar7 = iVar7 + 1;
      ppuVar5 = ppuVar5 + 5;
    } while (iVar7 < *(int *)(param_1 + 0x84));
  }
  if (iVar7 != *(int *)(param_1 + 0x84)) {
    *(undefined4 *)(param_1 + 8) = 0;
    switch((&DAT_00576ae4)[iVar7 * 5]) {
    case 0:
      uVar4 = FUN_00543f00((&DAT_00576ae8)[iVar7 * 5]);
      return uVar4;
    case 1:
      uVar4 = FUN_00544520((&DAT_00576ae8)[iVar7 * 5]);
      return uVar4;
    case 2:
      goto switchD_00544479_caseD_2;
    case 3:
      uVar4 = FUN_00544570((&DAT_00576ae8)[iVar7 * 5],param_3);
      return uVar4;
    default:
      return 5;
    }
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return 0;
switchD_00544479_caseD_2:
  if (((&DAT_00576ae0)[iVar7 * 0x14] == '\0') && (param_4 != '\0')) {
    uVar4 = FUN_005442a0((&DAT_00576ae8)[iVar7 * 5],param_3);
    return uVar4;
  }
  uVar4 = FUN_005442a0((&DAT_00576ae8)[iVar7 * 5],(&DAT_00576adc)[iVar7 * 5]);
  return uVar4;
}


