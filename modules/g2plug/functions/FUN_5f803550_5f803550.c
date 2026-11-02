/* Module: g2plug.dll
   Function: FUN_5f803550
   Address: 5f803550
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f803550(int param_1,int param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ushort uVar8;
  int *unaff_EBP;
  int *piVar9;
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 0x24) == 0) {
    puVar4 = FUN_5f804a90(param_1);
    *(undefined4 **)(iVar3 + 0x24) = puVar4;
  }
  if (*(int *)(iVar3 + 0x24) == 0) {
    return -0x7ff8fff2;
  }
  if (param_2 == 0) {
    puVar4 = *(undefined4 **)(*(int *)(iVar3 + 0x24) + 0x424);
    *puVar4 = DAT_5f876288;
    puVar4[1] = DAT_5f87628c;
    puVar4[2] = DAT_5f876290;
    puVar4[3] = DAT_5f876294;
    *(undefined2 *)(puVar4 + 4) = DAT_5f876298;
    *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x424) + 0x12) = 1;
    iVar5 = param_1;
  }
  else {
    iVar5 = FUN_5f804a40(iVar3);
    puVar1 = *(undefined2 **)(*(int *)(iVar3 + 0x24) + 0x424);
    uVar2 = *(uint *)(puVar1 + 2);
    if (uVar2 < 0x5623) {
      if (((uVar2 == 0x5622) || (uVar2 == 8000)) || (uVar2 == 0x2b11)) goto LAB_5f80367a;
    }
    else if (uVar2 == 0xac44) goto LAB_5f80367a;
    uVar8 = puVar1[1];
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    else if (2 < uVar8) {
      uVar8 = 2;
    }
    puVar1[1] = uVar8;
    puVar1[6] = uVar8 * 2;
    *puVar1 = 1;
    *(undefined4 *)(puVar1 + 2) = 0xac44;
    puVar1[7] = 0x10;
    puVar1[8] = 0;
    *(uint *)(puVar1 + 4) = (uint)(ushort)(uVar8 * 2) * 0xac44;
  }
LAB_5f80367a:
  *(undefined4 *)(*(int *)(iVar3 + 0x24) + 4) = DAT_5f8762a0;
  if (DAT_5f877464 == 0) {
    SfRealG2_Initialize(DAT_5f877460);
    DAT_5f877464 = DAT_5f877464 + 1;
  }
  if (*(int *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x424) + 0x3e) == 0) {
    piVar9 = *(int **)(iVar3 + 0x14);
    param_1 = 0;
    iVar6 = (**(code **)*piVar9)(piVar9,&DAT_5f869c80,&param_1);
    if (-1 < iVar6) {
      uVar7 = (**(code **)(*unaff_EBP + 0x20))(unaff_EBP,0x42,0x67c);
      *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x424) + 0x3e) = uVar7;
      iVar6 = *(int *)(*(int *)(iVar3 + 0x24) + 0x424);
      if (*(int *)(iVar6 + 0x3e) != 0) {
        *(undefined4 *)(iVar6 + 0x3a) = 0x67c;
      }
      iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x424) + 0x3e);
      *(undefined4 *)(iVar3 + 0x663) = 0xf;
      *(undefined4 *)(iVar3 + 0x667) = 10000;
      *(undefined4 *)(iVar3 + 0x134) = 1;
      (**(code **)(*piVar9 + 8))(piVar9);
    }
  }
  return iVar5;
}


