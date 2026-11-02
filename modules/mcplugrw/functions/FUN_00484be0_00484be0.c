/* Module: mcplugrw.dll
   Function: FUN_00484be0
   Address: 00484be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00484be0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char unaff_BL;
  int *piVar7;
  int iVar8;
  
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x68);
  *(undefined4 **)(param_1 + 0x175) = puVar2;
  *puVar2 = FUN_00484ca0;
  if (unaff_BL == '\0') {
    iVar8 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    piVar7 = puVar2 + 6;
    iVar6 = 10;
    do {
      *piVar7 = iVar8;
      piVar7 = piVar7 + 1;
      iVar8 = iVar8 + 0x80;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar2[0x10] = 0;
  }
  else {
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 0x71)) {
      piVar7 = (int *)(*(int *)(param_1 + 0x79) + 0xc);
      puVar2 = puVar2 + 0x10;
      do {
        iVar6 = *piVar7;
        iVar1 = *(int *)(param_1 + 4);
        iVar3 = FUN_0047d790(piVar7[5],iVar6);
        iVar4 = FUN_0047d790(piVar7[4],piVar7[-1]);
        uVar5 = (**(code **)(iVar1 + 0x14))(param_1,1,0,iVar4,iVar3,iVar6);
        *puVar2 = uVar5;
        puVar2 = puVar2 + 1;
        iVar8 = iVar8 + 1;
        piVar7 = (int *)((int)piVar7 + 0x51);
      } while (iVar8 < *(int *)(param_1 + 0x71));
      return;
    }
  }
  return;
}


