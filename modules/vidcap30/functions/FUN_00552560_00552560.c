/* Module: vidcap30.exe
   Function: FUN_00552560
   Address: 00552560
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00552560(int *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  int iVar13;
  ushort *puVar14;
  int *piStack_c;
  
  puVar3 = *(undefined4 **)((int)param_1 + 0x51);
  iVar13 = puVar3[1];
  puVar11 = (undefined1 *)*puVar3;
  if (iVar13 == 0) {
    uVar8 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar8 == '\0') goto LAB_005527aa;
    puVar11 = (undefined1 *)*puVar3;
    iVar13 = puVar3[1];
  }
  iVar13 = iVar13 + -1;
  uVar1 = *puVar11;
  puVar11 = puVar11 + 1;
  if (iVar13 == 0) {
    uVar8 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar8 == '\0') {
LAB_005527aa:
      return uVar8 & 0xffffff00;
    }
    puVar11 = (undefined1 *)*puVar3;
    iVar13 = puVar3[1];
  }
  iVar13 = iVar13 + -1;
  pbVar12 = puVar11 + 1;
  iVar4 = CONCAT11(uVar1,*puVar11) - 2;
  do {
    iVar6 = iVar4;
    if (iVar6 < 1) {
      *puVar3 = pbVar12;
      puVar3[1] = iVar13;
      return CONCAT31((int3)((uint)iVar6 >> 8),1);
    }
    if (iVar13 == 0) {
      uVar8 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar8 == '\0') goto LAB_005527aa;
      pbVar12 = (byte *)*puVar3;
      iVar13 = puVar3[1];
    }
    bVar2 = *pbVar12;
    *(undefined4 *)(*param_1 + 0x14) = 0x50;
    uVar8 = bVar2 & 0xf;
    iVar13 = iVar13 + -1;
    *(uint *)(*param_1 + 0x18) = uVar8;
    iVar9 = (int)(uint)bVar2 >> 4;
    *(int *)(*param_1 + 0x1c) = iVar9;
    pbVar12 = pbVar12 + 1;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (3 < uVar8) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1e;
      *(uint *)(*param_1 + 0x18) = uVar8;
      (**(code **)*param_1)(param_1);
    }
    if (*(int *)((int)param_1 + uVar8 * 4 + 0xc2) == 0) {
      uVar10 = FUN_005535e0(param_1);
      *(undefined4 *)((int)param_1 + uVar8 * 4 + 0xc2) = uVar10;
    }
    iVar4 = *(int *)((int)param_1 + uVar8 * 4 + 0xc2);
    piStack_c = &DAT_005a0920;
    do {
      if (iVar9 == 0) {
        if (iVar13 == 0) {
          uVar8 = (*(code *)puVar3[3])(param_1);
          if ((char)uVar8 == '\0') goto LAB_005527aa;
          pbVar12 = (byte *)*puVar3;
          iVar13 = puVar3[1];
        }
        uVar7 = (ushort)*pbVar12;
      }
      else {
        if (iVar13 == 0) {
          uVar8 = (*(code *)puVar3[3])(param_1);
          if ((char)uVar8 == '\0') goto LAB_005527aa;
          pbVar12 = (byte *)*puVar3;
          iVar13 = puVar3[1];
        }
        iVar13 = iVar13 + -1;
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        if (iVar13 == 0) {
          uVar8 = (*(code *)puVar3[3])(param_1);
          if ((char)uVar8 == '\0') goto LAB_005527aa;
          pbVar12 = (byte *)*puVar3;
          iVar13 = puVar3[1];
        }
        uVar7 = (ushort)bVar2 * 0x100 + (ushort)*pbVar12;
      }
      iVar13 = iVar13 + -1;
      pbVar12 = pbVar12 + 1;
      iVar5 = *piStack_c;
      piStack_c = piStack_c + 1;
      *(ushort *)(iVar4 + iVar5 * 2) = uVar7;
    } while ((int)piStack_c < 0x5a0a20);
    if (1 < *(int *)(*param_1 + 0x68)) {
      puVar14 = (ushort *)(iVar4 + 4);
      piStack_c = (int *)0x8;
      do {
        iVar4 = *param_1;
        *(uint *)(iVar4 + 0x18) = (uint)puVar14[-2];
        *(uint *)(iVar4 + 0x1c) = (uint)puVar14[-1];
        *(uint *)(iVar4 + 0x20) = (uint)*puVar14;
        *(uint *)(iVar4 + 0x24) = (uint)puVar14[1];
        *(uint *)(iVar4 + 0x28) = (uint)puVar14[2];
        *(uint *)(iVar4 + 0x2c) = (uint)puVar14[3];
        *(uint *)(iVar4 + 0x30) = (uint)puVar14[4];
        *(uint *)(iVar4 + 0x34) = (uint)puVar14[5];
        *(undefined4 *)(*param_1 + 0x14) = 0x5c;
        (**(code **)(*param_1 + 4))(param_1,2);
        puVar14 = puVar14 + 8;
        piStack_c = (int *)((int)piStack_c + -1);
      } while (piStack_c != (int *)0x0);
    }
    iVar4 = iVar6 + -0x41;
    if (iVar9 != 0) {
      iVar4 = iVar6 + -0x81;
    }
  } while( true );
}


