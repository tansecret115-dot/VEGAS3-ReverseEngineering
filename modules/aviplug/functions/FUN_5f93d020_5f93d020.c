/* Module: aviplug.dll
   Function: FUN_5f93d020
   Address: 5f93d020
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_5f93d020(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  short *psVar4;
  undefined2 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined2 *_Memory;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ushort *unaff_EBP;
  int *unaff_ESI;
  undefined4 *puVar11;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  int *piStack_14;
  int local_8;
  undefined1 local_4 [4];
  
  iVar9 = *(int *)(*(int *)(param_1 + 0x424) + 0x3e);
  if (iVar9 != 0) {
    *(undefined4 *)(iVar9 + 8) = 0;
    *(undefined4 *)(iVar9 + 0xc) = 0x3fd00000;
    *(undefined4 *)(iVar9 + 0x28) = 0;
    *(undefined4 *)(iVar9 + 0x2c) = 0;
    *(undefined4 *)(iVar9 + 0x30) = 0;
    *(undefined4 *)(iVar9 + 0x34) = 0;
  }
  piStack_14 = &local_8;
  puStack_18 = &DAT_5f9d9c90;
  puStack_1c = param_2;
  piVar6 = (int *)(**(code **)*param_2)();
  if ((int)piVar6 < 0) {
    return piVar6;
  }
  piStack_14 = (int *)(**(code **)(*piStack_14 + 0x38))(piStack_14,local_4,0);
  if ((int)piStack_14 < 0) goto LAB_5f93d2cc;
  uVar1 = *unaff_EBP;
  if (uVar1 < 4) {
    if ((uVar1 == 3) || (uVar1 == 1)) {
LAB_5f93d0b3:
      if ((uint)unaff_EBP[6] == (uint)(unaff_EBP[7] >> 3) * (uint)unaff_EBP[1]) {
        piStack_14 = (int *)(**(code **)(*unaff_ESI + 0x30))(unaff_ESI,0,0,&puStack_1c,0,0,0);
        if (-1 < (int)piStack_14) {
          _Memory = calloc(1,(size_t)puStack_1c);
          if (_Memory != (undefined2 *)0x0) {
            piStack_14 = (int *)(**(code **)(*unaff_ESI + 0x30))
                                          (unaff_ESI,_Memory,puStack_1c,&puStack_1c,0,0,0);
            if (-1 < (int)piStack_14) {
              puVar5 = *(undefined2 **)(param_1 + 0x424);
              iVar9 = *(int *)(_Memory + 2);
              uVar2 = *_Memory;
              uVar1 = _Memory[7];
              sVar3 = _Memory[1];
              puVar5[7] = uVar1;
              uVar1 = (uVar1 >> 3) * sVar3;
              puVar5[6] = uVar1;
              *puVar5 = uVar2;
              puVar5[1] = sVar3;
              *(int *)(puVar5 + 2) = iVar9;
              *(uint *)(puVar5 + 4) = (uint)uVar1 * iVar9;
              puVar5[8] = 0;
            }
            free(_Memory);
          }
          puVar5 = *(undefined2 **)(*(int *)(param_1 + 0x424) + 0x16);
          if (puVar5 != (undefined2 *)0x0) {
            iVar9 = *(int *)(_Memory + 2);
            sVar3 = _Memory[1];
            uVar1 = _Memory[7];
            uVar2 = *_Memory;
            puVar5[7] = uVar1;
            *puVar5 = uVar2;
            uVar1 = (uVar1 >> 3) * sVar3;
            puVar5[6] = uVar1;
            puVar5[1] = sVar3;
            *(int *)(puVar5 + 2) = iVar9;
            *(uint *)(puVar5 + 4) = (uint)uVar1 * iVar9;
            puVar5[8] = 0;
          }
        }
        goto LAB_5f93d2cc;
      }
    }
  }
  else if ((0xfdff < uVar1) && (uVar1 < 0xfe03)) goto LAB_5f93d0b3;
  psVar4 = *(short **)(*(int *)(param_1 + 0x424) + 0x16);
  if (psVar4 != (short *)0x0) {
    if ((*psVar4 == 3) || (*psVar4 == 1)) {
      uVar10 = 0x10;
    }
    else {
      uVar10 = (ushort)psVar4[8] + 0x12;
    }
    if ((uVar1 == 3) || (uVar1 == 1)) {
      uVar8 = 0x10;
    }
    else {
      uVar8 = unaff_EBP[8] + 0x12;
    }
    if (uVar10 < uVar8) {
      FUN_5f936d40(puStack_1c[3]);
      *(undefined4 *)(*(int *)(param_1 + 0x424) + 0x16) = 0;
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x424) + 0x16) == 0) {
    puVar7 = FUN_5f936cf0(puStack_1c[3]);
    *(undefined1 **)(*(int *)(param_1 + 0x424) + 0x16) = puVar7;
  }
  puVar11 = *(undefined4 **)(*(int *)(param_1 + 0x424) + 0x16);
  if (puVar11 == (undefined4 *)0x0) {
    piStack_14 = (int *)0x8007000e;
  }
  else if ((*unaff_EBP == 3) || (*unaff_EBP == 1)) {
    for (iVar9 = 4; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = *(undefined4 *)unaff_EBP;
      unaff_EBP = unaff_EBP + 2;
      puVar11 = puVar11 + 1;
    }
    for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(char *)puVar11 = (char)*unaff_EBP;
      unaff_EBP = (ushort *)((int)unaff_EBP + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
  }
  else {
    uVar1 = unaff_EBP[8];
    for (uVar10 = uVar1 + 0x12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar11 = *(undefined4 *)unaff_EBP;
      unaff_EBP = unaff_EBP + 2;
      puVar11 = puVar11 + 1;
    }
    for (uVar10 = uVar1 + 0x12 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(char *)puVar11 = (char)*unaff_EBP;
      unaff_EBP = (ushort *)((int)unaff_EBP + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
  }
LAB_5f93d2cc:
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return piStack_14;
}


