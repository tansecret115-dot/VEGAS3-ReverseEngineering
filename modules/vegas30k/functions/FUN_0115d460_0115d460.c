/* Module: vegas30k.dll
   Function: FUN_0115d460
   Address: 0115d460
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0115d460(int *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iStack_128;
  byte abStack_120 [12];
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 uStack_108;
  uint uStack_104;
  byte abStack_100 [256];
  
  puVar12 = *(undefined4 **)((int)param_1 + 0x51);
  abStack_120[4] = (byte)puVar12;
  abStack_120[5] = (byte)((uint)puVar12 >> 8);
  abStack_120[6] = (byte)((uint)puVar12 >> 0x10);
  abStack_120[7] = (byte)((uint)puVar12 >> 0x18);
  iStack_128 = puVar12[1];
  puVar6 = (undefined1 *)*puVar12;
  if (iStack_128 == 0) {
    uVar3 = (*(code *)puVar12[3])(param_1);
    if ((char)uVar3 == '\0') goto LAB_0115d780;
    iStack_128 = puVar12[1];
    puVar6 = (undefined1 *)*puVar12;
  }
  iStack_128 = iStack_128 + -1;
  uVar1 = *puVar6;
  puVar6 = puVar6 + 1;
  if (iStack_128 == 0) {
    uVar3 = (*(code *)puVar12[3])(param_1);
    if ((char)uVar3 == '\0') {
LAB_0115d780:
      return uVar3 & 0xffffff00;
    }
    iStack_128 = puVar12[1];
    puVar6 = (undefined1 *)*puVar12;
  }
  iStack_128 = iStack_128 + -1;
  pbVar7 = puVar6 + 1;
  puVar4 = (undefined4 *)(CONCAT11(uVar1,*puVar6) - 2);
  do {
    if ((int)puVar4 < 1) {
      puVar12[1] = iStack_128;
      *puVar12 = pbVar7;
      return CONCAT31((int3)((uint)puVar4 >> 8),1);
    }
    if (iStack_128 == 0) {
      uVar3 = (*(code *)puVar12[3])(param_1);
      if ((char)uVar3 == '\0') goto LAB_0115d780;
      iStack_128 = puVar12[1];
      pbVar7 = (byte *)*puVar12;
    }
    uStack_104 = (uint)*pbVar7;
    *(undefined4 *)(*param_1 + 0x14) = 0x4f;
    iVar10 = iStack_128 + -1;
    *(uint *)(*param_1 + 0x18) = uStack_104;
    pbVar7 = pbVar7 + 1;
    (**(code **)(*param_1 + 4))(param_1,1);
    iVar8 = 1;
    abStack_120[0] = 0;
    iStack_128 = 0;
    do {
      if (iVar10 == 0) {
        uVar3 = (*(code *)puVar4[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_0115d780;
        iVar10 = puVar4[1];
        pbVar7 = (byte *)*puVar4;
      }
      bVar2 = *pbVar7;
      abStack_120[iVar8] = bVar2;
      iVar10 = iVar10 + -1;
      pbVar7 = pbVar7 + 1;
      iStack_128 = iStack_128 + (uint)bVar2;
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x11);
    iVar8 = *param_1;
    *(uint *)(iVar8 + 0x18) =
         CONCAT12(abStack_120[3],CONCAT11(abStack_120[2],abStack_120[1])) & 0xff;
    *(uint *)(iVar8 + 0x1c) =
         CONCAT12(abStack_120[4],CONCAT11(abStack_120[3],abStack_120[2])) & 0xff;
    *(uint *)(iVar8 + 0x20) =
         CONCAT12(abStack_120[5],CONCAT11(abStack_120[4],abStack_120[3])) & 0xff;
    *(uint *)(iVar8 + 0x24) =
         CONCAT12(abStack_120[6],CONCAT11(abStack_120[5],abStack_120[4])) & 0xff;
    *(uint *)(iVar8 + 0x28) =
         CONCAT12(abStack_120[7],CONCAT11(abStack_120[6],abStack_120[5])) & 0xff;
    *(uint *)(iVar8 + 0x2c) =
         CONCAT12(abStack_120[8],CONCAT11(abStack_120[7],abStack_120[6])) & 0xff;
    *(uint *)(iVar8 + 0x30) =
         CONCAT12(abStack_120[9],CONCAT11(abStack_120[8],abStack_120[7])) & 0xff;
    *(uint *)(iVar8 + 0x34) =
         CONCAT12(abStack_120[10],CONCAT11(abStack_120[9],abStack_120[8])) & 0xff;
    *(undefined4 *)(*param_1 + 0x14) = 0x55;
    (**(code **)(*param_1 + 4))(param_1,2);
    iVar8 = *param_1;
    *(uint *)(iVar8 + 0x18) =
         CONCAT12(abStack_120[3],CONCAT11(abStack_120[2],abStack_120[1])) & 0xff;
    *(uint *)(iVar8 + 0x1c) =
         CONCAT12(abStack_120[4],CONCAT11(abStack_120[3],abStack_120[2])) & 0xff;
    *(uint *)(iVar8 + 0x20) =
         CONCAT12(abStack_120[5],CONCAT11(abStack_120[4],abStack_120[3])) & 0xff;
    *(uint *)(iVar8 + 0x24) =
         CONCAT12(abStack_120[6],CONCAT11(abStack_120[5],abStack_120[4])) & 0xff;
    *(uint *)(iVar8 + 0x28) =
         CONCAT12(abStack_120[7],CONCAT11(abStack_120[6],abStack_120[5])) & 0xff;
    *(uint *)(iVar8 + 0x2c) =
         CONCAT12(abStack_120[8],CONCAT11(abStack_120[7],abStack_120[6])) & 0xff;
    *(uint *)(iVar8 + 0x30) =
         CONCAT12(abStack_120[9],CONCAT11(abStack_120[8],abStack_120[7])) & 0xff;
    *(uint *)(iVar8 + 0x34) =
         CONCAT12(abStack_120[10],CONCAT11(abStack_120[9],abStack_120[8])) & 0xff;
    *(undefined4 *)(*param_1 + 0x14) = 0x55;
    (**(code **)(*param_1 + 4))(param_1,2);
    iVar8 = CONCAT13(abStack_120[3],CONCAT12(abStack_120[2],CONCAT11(abStack_120[1],abStack_120[0]))
                    );
    if ((0x100 < iVar8) || ((int)puVar4 < iVar8)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1c;
      (**(code **)*param_1)(param_1);
    }
    iVar5 = 0;
    abStack_120[0] = 0;
    abStack_120[1] = 0;
    abStack_120[2] = 0;
    abStack_120[3] = 0;
    if (0 < iVar8) {
      do {
        if (iVar10 == 0) {
          puVar12 = (undefined4 *)
                    CONCAT13(abStack_120[7],
                             CONCAT12(abStack_120[6],CONCAT11(abStack_120[5],abStack_120[4])));
          uVar3 = (*(code *)puVar12[3])(param_1);
          if ((char)uVar3 == '\0') goto LAB_0115d780;
          iVar10 = puVar12[1];
          pbVar7 = (byte *)*puVar12;
          iVar5 = CONCAT13(abStack_120[3],
                           CONCAT12(abStack_120[2],CONCAT11(abStack_120[1],abStack_120[0])));
        }
        iVar10 = iVar10 + -1;
        abStack_100[iVar5] = *pbVar7;
        pbVar7 = pbVar7 + 1;
        iVar5 = iVar5 + 1;
        abStack_120[0] = (byte)iVar5;
        abStack_120[1] = (byte)((uint)iVar5 >> 8);
        abStack_120[2] = (byte)((uint)iVar5 >> 0x10);
        abStack_120[3] = (byte)((uint)iVar5 >> 0x18);
        iStack_128 = iVar10;
      } while (iVar5 < iVar8);
    }
    puVar4 = (undefined4 *)((int)puVar4 - iVar8);
    if ((uStack_104 & 0x10) == 0) {
      iVar10 = uStack_104 * 4 + 0xd2;
      uVar3 = uStack_104;
    }
    else {
      iVar10 = (uStack_104 - 0x10) * 4 + 0xe2;
      uVar3 = uStack_104 - 0x10;
    }
    piVar11 = (int *)((int)param_1 + iVar10);
    if (((int)uVar3 < 0) || (3 < (int)uVar3)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1d;
      *(uint *)(*param_1 + 0x18) = uVar3;
      (**(code **)*param_1)(param_1);
    }
    if (*piVar11 == 0) {
      iVar10 = FUN_0115e830(param_1);
      *piVar11 = iVar10;
    }
    puVar12 = (undefined4 *)*piVar11;
    *puVar12 = CONCAT13(abStack_120[0xb],
                        CONCAT12(abStack_120[10],CONCAT11(abStack_120[9],abStack_120[8])));
    puVar12[1] = uStack_114;
    puVar12[2] = uStack_110;
    puVar12[3] = uStack_10c;
    *(undefined1 *)(puVar12 + 4) = uStack_108;
    pbVar9 = abStack_100;
    puVar12 = (undefined4 *)(*piVar11 + 0x11);
    for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar12 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      puVar12 = puVar12 + 1;
    }
    puVar12 = (undefined4 *)
              CONCAT13(abStack_120[7],
                       CONCAT12(abStack_120[6],CONCAT11(abStack_120[5],abStack_120[4])));
  } while( true );
}


