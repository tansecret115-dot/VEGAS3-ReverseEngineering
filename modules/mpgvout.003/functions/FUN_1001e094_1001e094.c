/* Module: mpgvout.003
   Function: FUN_1001e094
   Address: 1001e094
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_1001e094(int param_1,undefined8 *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
            int *param_7,int param_8,uint param_9,int param_10,int param_11)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  int *piVar13;
  
  iVar8 = *(int *)(param_1 + 0x568);
  iVar11 = param_11 * 0x40 * *(int *)(param_1 + 0x54c);
  iVar5 = iVar8 * param_10 + param_9;
  if (*(int *)(param_1 + 0x590) == 2) {
    iVar5 = iVar5 + *(int *)(param_1 + 0x550);
  }
  *param_4 = iVar5;
  puVar6 = (undefined8 *)(iVar5 + *param_3);
  iVar5 = ((int)param_9 >> 1) + (param_10 >> 1) * *(int *)(param_1 + 0x574);
  param_4[1] = iVar5;
  puVar12 = (undefined8 *)(param_3[1] + iVar5);
  puVar7 = (undefined8 *)(iVar5 + param_3[2]);
  *param_5 = iVar8;
  param_5[1] = *(int *)(param_1 + 0x574);
  if (*(int *)(param_1 + 0x2dc) == 0) {
    *param_6 = *(int *)(param_1 + 0x698);
    param_6[1] = *(int *)(param_1 + 0x698) + 0x100;
    param_6[2] = *(int *)(param_1 + 0x698) + 0x140;
  }
  else {
    *param_6 = *(int *)(param_1 + 0x698) + iVar11;
    param_6[1] = iVar11 + *(int *)(param_1 + 0x698) + 0x100;
    param_6[2] = iVar11 + *(int *)(param_1 + 0x698) + 0x140;
  }
  *param_7 = 0x10;
  param_7[1] = 8;
  piVar4 = *(int **)(param_1 + 0x548);
  piVar13 = piVar4;
  if ((param_9 & 0x20) == 0) {
    *piVar4 = (int)(puVar6 + 4);
    iVar8 = (int)(puVar6 + 4) + *param_5;
    piVar4[1] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar4[2] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar4[3] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar4[4] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar4[5] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar4[6] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar4[7] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar4[8] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar4[9] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar4[10] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar4[0xb] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar4[0xc] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar4[0xd] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar4[0xe] = iVar8;
    piVar4[0xf] = iVar8 + *param_5;
    piVar13 = piVar4 + 0x10;
    if ((param_9 & 0x40) == 0) {
      *piVar13 = (int)(puVar12 + 4);
      iVar8 = (int)(puVar12 + 4) + param_5[1];
      piVar4[0x11] = iVar8;
      iVar8 = iVar8 + param_5[1];
      piVar4[0x12] = iVar8;
      iVar8 = iVar8 + param_5[1];
      piVar4[0x13] = iVar8;
      iVar8 = iVar8 + param_5[1];
      piVar4[0x14] = iVar8;
      iVar8 = iVar8 + param_5[1];
      piVar4[0x15] = iVar8;
      iVar8 = iVar8 + param_5[1];
      piVar4[0x16] = iVar8;
      piVar4[0x17] = iVar8 + param_5[1];
      piVar4[0x18] = (int)(puVar7 + 4);
      iVar8 = (int)(puVar7 + 4) + param_5[1];
      piVar4[0x19] = iVar8;
      iVar8 = iVar8 + param_5[1];
      piVar4[0x1a] = iVar8;
      iVar8 = iVar8 + param_5[1];
      piVar4[0x1b] = iVar8;
      iVar8 = iVar8 + param_5[1];
      piVar4[0x1c] = iVar8;
      iVar8 = iVar8 + param_5[1];
      piVar4[0x1d] = iVar8;
      iVar8 = iVar8 + param_5[1];
      piVar4[0x1e] = iVar8;
      piVar4[0x1f] = iVar8 + param_5[1];
      piVar13 = piVar4 + 0x20;
    }
  }
  if (*(int *)(param_1 + 0x2dc) == 0) {
    if ((param_9 & 0x20) == 0) {
      iVar8 = *(int *)(param_1 + 0x660);
    }
    else {
      iVar8 = *(int *)(param_1 + 0x644);
    }
    iVar8 = param_10 * *(int *)(param_1 + 0x568) + 0x20 + param_9 + iVar8;
    *piVar13 = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar13[1] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar13[2] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar13[3] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar13[4] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar13[5] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar13[6] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar13[7] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar13[8] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar13[9] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar13[10] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar13[0xb] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar13[0xc] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar13[0xd] = iVar8;
    iVar8 = iVar8 + *param_5;
    piVar13[0xe] = iVar8;
    piVar13[0xf] = iVar8 + *param_5;
    *(undefined1 *)(param_8 + 1) = 0;
    uVar9 = FUN_1001dd00(param_1,param_8,param_3,param_9,param_10);
    puVar1 = (uint *)(param_1 + 0x3a0);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + uVar9;
    *(int *)(param_1 + 0x3a4) = *(int *)(param_1 + 0x3a4) + (uint)CARRY4(uVar3,uVar9);
    iVar8 = *(int *)(param_1 + 0x538) * 0x20;
    (**(code **)(param_1 + 0x51c))
              (param_1,*(undefined4 *)(param_1 + 0x638),*(undefined4 *)(param_1 + 0x654),
               *(undefined4 *)(param_1 + 0x644),*(undefined4 *)(param_1 + 0x660),
               *(undefined4 *)(param_1 + 0x670),param_9,param_10,
               *(undefined4 *)(iVar8 + 0xac + param_1),*(undefined4 *)(iVar8 + 0xb0 + param_1),
               *(undefined4 *)(iVar8 + 0xbc + param_1),*(undefined4 *)(iVar8 + 0xc0 + param_1),
               param_8);
    if ((*(byte *)(param_8 + 1) & 1) == 0) {
      if ((*(byte *)(param_8 + 1) & 0xc) == 0xc) {
        *(int *)(param_1 + 0x420) = *(int *)(param_1 + 0x420) + 1;
        uVar9 = *(uint *)(param_8 + 0x34);
        puVar1 = (uint *)(param_1 + 0x438);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 + uVar9;
        *(int *)(param_1 + 0x43c) = *(int *)(param_1 + 0x43c) + (uint)CARRY4(uVar3,uVar9);
      }
      else {
        *(int *)(param_1 + 0x41c) = *(int *)(param_1 + 0x41c) + 1;
        uVar9 = *(uint *)(param_8 + 0x34);
        puVar1 = (uint *)(param_1 + 0x430);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 + uVar9;
        *(int *)(param_1 + 0x434) = *(int *)(param_1 + 0x434) + (uint)CARRY4(uVar3,uVar9);
      }
    }
    else {
      *(int *)(param_1 + 0x418) = *(int *)(param_1 + 0x418) + 1;
      uVar9 = *(uint *)(param_8 + 0x34);
      puVar1 = (uint *)(param_1 + 0x428);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + uVar9;
      *(int *)(param_1 + 0x42c) = *(int *)(param_1 + 0x42c) + (uint)CARRY4(uVar3,uVar9);
    }
    if ((*(byte *)(param_8 + 1) & 1) == 0) {
      FUN_1001a0d0(param_1,(int *)(param_1 + 0x644),(int *)(param_1 + 0x660),param_6,
                   *(int *)(param_1 + 0x550),param_9,param_10,*(int *)(param_1 + 0x5bc),
                   *(undefined4 *)(param_1 + 0x590),0,param_8);
    }
    puVar2 = (undefined1 *)(*(int *)(param_1 + 0x6a8) + param_11 * 0xe);
    if (*(int *)(param_1 + 0x5bc) == 2) {
      *puVar2 = *(undefined1 *)(param_8 + 1);
      puVar2[1] = *(undefined1 *)(param_8 + 2);
      *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(param_8 + 0xc);
      *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(param_8 + 0xe);
      *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(param_8 + 0x10);
      *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(param_8 + 0x12);
      *(undefined2 *)(puVar2 + 10) = *(undefined2 *)(param_8 + 0x1c);
      *(undefined2 *)(puVar2 + 0xc) = *(undefined2 *)(param_8 + 0x1e);
    }
    else if (*(int *)(param_1 + 0x5bc) == 1) {
      *puVar2 = 0;
    }
  }
  else {
    iVar8 = *param_6;
    *piVar13 = iVar8 + 0x180;
    piVar13[1] = iVar8 + 0x1a0;
    piVar13[2] = iVar8 + 0x1c0;
    piVar13[3] = iVar8 + 0x1e0;
    piVar13[4] = iVar8 + 0x200;
    piVar13[5] = iVar8 + 0x220;
    piVar13[6] = iVar8 + 0x240;
    piVar13[7] = iVar8 + 0x260;
    piVar13[8] = iVar8 + 0x280;
    piVar13[9] = iVar8 + 0x2a0;
    piVar13[10] = iVar8 + 0x2c0;
    piVar13[0xb] = iVar8 + 0x2e0;
  }
  iVar8 = *(int *)(param_1 + 0x548);
  if ((*(byte *)(param_8 + 1) & 1) == 0) {
    (**(code **)(param_1 + 0x4ec))(*param_6,*param_7,puVar6,*param_5,param_2);
    (**(code **)(param_1 + 0x4ec))(*param_6 + 8,*param_7,puVar6 + 1,*param_5,param_2 + 0x10);
    (**(code **)(param_1 + 0x4ec))
              (*param_6 + *param_7 * 8,*param_7,puVar6 + *param_5,*param_5,param_2 + 0x20);
    (**(code **)(param_1 + 0x4ec))
              (*param_6 + 8 + *param_7 * 8,*param_7,puVar6 + *param_5 + 1,*param_5,param_2 + 0x30);
    (**(code **)(param_1 + 0x4ec))(param_6[1],param_7[1],puVar12,param_5[1],param_2 + 0x40);
    (**(code **)(param_1 + 0x4ec))(param_6[2],param_7[1],puVar7,param_5[1],param_2 + 0x50);
    uVar10 = *(undefined4 *)(iVar8 + 0x14);
  }
  else {
    FUN_100032c0(puVar6,*param_5,param_2);
    FUN_100032c0(puVar6 + 1,*param_5,param_2 + 0x10);
    FUN_100032c0(puVar6 + *param_5,*param_5,param_2 + 0x20);
    FUN_100032c0(puVar6 + *param_5 + 1,*param_5,param_2 + 0x30);
    FUN_100032c0(puVar12,param_5[1],param_2 + 0x40);
    FUN_100032c0(puVar7,param_5[1],param_2 + 0x50);
    uVar10 = *(undefined4 *)(iVar8 + 0x14);
  }
  *(int *)(param_1 + 0x548) = iVar8 + 0x18;
  return uVar10;
}


