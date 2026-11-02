/* Module: vidcap30.exe
   Function: FUN_00567030
   Address: 00567030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00567030(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char unaff_BL;
  undefined4 *puVar7;
  int iVar8;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x68);
  *(undefined4 **)(param_1 + 0x175) = puVar1;
  *puVar1 = FUN_005670f0;
  if (unaff_BL == '\0') {
    iVar8 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    piVar5 = puVar1 + 6;
    iVar6 = 10;
    do {
      *piVar5 = iVar8;
      piVar5 = piVar5 + 1;
      iVar8 = iVar8 + 0x80;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar1[0x10] = 0;
  }
  else {
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 0x71)) {
      puVar7 = (undefined4 *)(*(int *)(param_1 + 0x79) + 0xc);
      puVar1 = puVar1 + 0x10;
      do {
        uVar4 = *puVar7;
        iVar6 = *(int *)(param_1 + 4);
        uVar2 = FUN_0055eb80(puVar7[5],uVar4);
        uVar3 = FUN_0055eb80(puVar7[4],puVar7[-1]);
        uVar4 = (**(code **)(iVar6 + 0x14))(param_1,1,0,uVar3,uVar2,uVar4);
        *puVar1 = uVar4;
        puVar1 = puVar1 + 1;
        iVar8 = iVar8 + 1;
        puVar7 = (undefined4 *)((int)puVar7 + 0x51);
      } while (iVar8 < *(int *)(param_1 + 0x71));
      return;
    }
  }
  return;
}


