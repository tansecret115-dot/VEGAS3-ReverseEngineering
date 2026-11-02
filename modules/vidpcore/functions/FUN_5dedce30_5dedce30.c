/* Module: vidpcore.dll
   Function: FUN_5dedce30
   Address: 5dedce30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5dedce30(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_2 == 0) {
    return;
  }
  *(int *)(param_1 + 4) = param_2;
  piVar2 = (int *)FUN_5dec4530();
  piVar3 = (int *)FUN_5dec3f20();
  if (piVar3 == (int *)0x0) {
    return;
  }
  if (piVar2 == (int *)0x0) {
    if (piVar3[4] == 0) {
      if (((piVar3[8] == 0) && (uVar1 = *(ushort *)((int)piVar3 + 0xe), uVar1 != 0)) && (uVar1 < 9))
      {
        piVar2 = (int *)(*piVar3 + (1 << ((byte)uVar1 & 0x1f)) * 4 + (int)piVar3);
        goto LAB_5dedcea7;
      }
    }
    else if (piVar3[4] == 3) {
      piVar2 = piVar3 + 0xd;
      goto LAB_5dedcea7;
    }
    piVar2 = (int *)(*piVar3 + piVar3[8] * 4 + (int)piVar3);
  }
LAB_5dedcea7:
  puVar7 = &param_2;
  *(int **)(param_1 + 8) = piVar2;
  uVar4 = FUN_5dec9ca0(piVar3);
  uVar5 = FUN_5dec9f30(uVar4,puVar7);
  *(uint *)(param_1 + 0x24) = uVar5 >> 3;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (piVar3[2] + -1) * *(int *)(param_1 + 0x10);
  iVar6 = -*(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar6;
  if (param_3 != 0) {
    *(int *)(param_1 + 8) =
         *(int *)(param_1 + 8) + *(int *)(param_3 + 0x10) * iVar6 + *(int *)(param_3 + 8) * 0x10;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  iVar6 = FUN_5dec4540();
  if (iVar6 == 0) {
    uVar5 = (uint)*(ushort *)((int)piVar3 + 0xe) * piVar3[1] + 0x1f;
    iVar6 = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
  }
  *(int *)(param_1 + 0x10) = iVar6;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


