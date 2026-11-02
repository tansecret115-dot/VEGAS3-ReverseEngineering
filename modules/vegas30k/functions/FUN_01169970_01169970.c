/* Module: vegas30k.dll
   Function: FUN_01169970
   Address: 01169970
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01169970(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char unaff_BL;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x74);
  *(undefined4 **)(param_1 + 0x1b1) = puVar2;
  *puVar2 = &LAB_01169a70;
  puVar2[2] = FUN_01169af0;
  puVar2[0x1c] = 0;
  if (unaff_BL == '\0') {
    iVar9 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    piVar8 = puVar2 + 8;
    iVar6 = 10;
    do {
      *piVar8 = iVar9;
      piVar8 = piVar8 + 1;
      iVar9 = iVar9 + 0x80;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar2[1] = &LAB_01169db0;
    puVar2[3] = &LAB_01169b50;
    puVar2[4] = 0;
    return;
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x5d)) {
    piVar8 = (int *)(*(int *)(param_1 + 0xf6) + 0xc);
    puVar7 = puVar2 + 0x12;
    do {
      iVar6 = *piVar8;
      iVar5 = iVar6;
      if (*(char *)(param_1 + 0xfa) != '\0') {
        iVar5 = iVar6 * 3;
      }
      iVar1 = *(int *)(param_1 + 4);
      uVar3 = FUN_01167880(piVar8[5],iVar6);
      uVar4 = FUN_01167880(piVar8[4],piVar8[-1]);
      uVar3 = (**(code **)(iVar1 + 0x14))(param_1,1,1,uVar4,uVar3,iVar5);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      iVar9 = iVar9 + 1;
      piVar8 = (int *)((int)piVar8 + 0x51);
    } while (iVar9 < *(int *)(param_1 + 0x5d));
  }
  puVar2[1] = &LAB_01169dc0;
  puVar2[3] = &LAB_01169fd0;
  puVar2[4] = puVar2 + 0x12;
  return;
}


