/* Module: mp3rw.dll
   Function: FUN_0047e820
   Address: 0047e820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047e820(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char unaff_BL;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x74);
  *(undefined4 **)(param_1 + 0x1b1) = puVar2;
  *puVar2 = &LAB_0047e920;
  puVar2[2] = FUN_0047e9a0;
  puVar2[0x1c] = 0;
  if (unaff_BL == '\0') {
    iVar9 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    piVar8 = puVar2 + 8;
    iVar3 = 10;
    do {
      *piVar8 = iVar9;
      piVar8 = piVar8 + 1;
      iVar9 = iVar9 + 0x80;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar2[1] = &LAB_0047ec60;
    puVar2[3] = &LAB_0047ea00;
    puVar2[4] = 0;
    return;
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x5d)) {
    piVar8 = (int *)(*(int *)(param_1 + 0xf6) + 0xc);
    puVar7 = puVar2 + 0x12;
    do {
      iVar3 = *piVar8;
      iVar6 = iVar3;
      if (*(char *)(param_1 + 0xfa) != '\0') {
        iVar6 = iVar3 * 3;
      }
      iVar1 = *(int *)(param_1 + 4);
      iVar3 = FUN_0047d790(piVar8[5],iVar3);
      iVar4 = FUN_0047d790(piVar8[4],piVar8[-1]);
      uVar5 = (**(code **)(iVar1 + 0x14))(param_1,1,1,iVar4,iVar3,iVar6);
      *puVar7 = uVar5;
      puVar7 = puVar7 + 1;
      iVar9 = iVar9 + 1;
      piVar8 = (int *)((int)piVar8 + 0x51);
    } while (iVar9 < *(int *)(param_1 + 0x5d));
  }
  puVar2[1] = &LAB_0047ec70;
  puVar2[3] = &LAB_0047ee80;
  puVar2[4] = puVar2 + 0x12;
  return;
}


