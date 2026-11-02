/* Module: erv23260.dll
   Function: FUN_637fe050
   Address: 637fe050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_637fe050(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,
                 uint param_5,int param_6,int param_7,undefined4 param_8,int param_9,int param_10,
                 int param_11)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  puVar3 = (undefined4 *)(param_9 + param_11 + param_10);
  uVar5 = param_4;
  uVar6 = param_5;
  do {
    for (; (uVar5 & 0xfffffff0) != 0; uVar5 = uVar5 - 0x10) {
      uVar2 = param_1[1];
      *puVar3 = *param_1;
      puVar3[1] = uVar2;
      uVar2 = param_1[3];
      puVar3[2] = param_1[2];
      puVar3[3] = uVar2;
      param_1 = param_1 + 4;
      puVar3 = puVar3 + 4;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = param_1[1];
      *puVar3 = *param_1;
      puVar3[1] = uVar2;
      param_1 = param_1 + 2;
      puVar3 = puVar3 + 2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
    }
    param_1 = (undefined4 *)((int)param_1 + (param_6 - param_4));
    uVar6 = uVar6 - 1;
    uVar5 = param_4;
  } while (uVar6 != 0);
  uVar4 = param_4 >> 1;
  uVar5 = uVar4;
  uVar6 = param_5 >> 1;
  do {
    for (; uVar7 = uVar6, puVar8 = param_3, (uVar5 & 0xfffffff8) != 0; uVar5 = uVar5 - 8) {
      uVar2 = puVar8[1];
      *puVar3 = *puVar8;
      puVar3[1] = uVar2;
      param_3 = puVar8 + 2;
      puVar3 = puVar3 + 2;
      uVar6 = uVar7;
    }
    while( true ) {
      if ((uVar5 & 4) != 0) {
        uVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = uVar2;
        puVar3 = puVar3 + 1;
      }
      if ((uVar5 & 2) != 0) {
        uVar1 = *(undefined2 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 2);
        *(undefined2 *)puVar3 = uVar1;
        puVar3 = (undefined4 *)((int)puVar3 + 2);
      }
      param_3 = (undefined4 *)((int)puVar8 + (param_7 - uVar4));
      uVar6 = uVar7 - 1;
      uVar7 = param_5 >> 1;
      puVar8 = param_2;
      uVar5 = uVar4;
      if (uVar6 != 0) break;
      while (uVar5 = uVar4, (uVar4 & 0xfffffff8) != 0) {
        do {
          puVar10 = puVar3;
          puVar9 = puVar8;
          puVar3 = puVar10 + 2;
          uVar2 = puVar9[1];
          *puVar10 = *puVar9;
          puVar10[1] = uVar2;
          puVar8 = puVar9 + 2;
          uVar5 = uVar5 - 8;
        } while ((uVar5 & 0xfffffff8) != 0);
        if ((uVar5 & 4) != 0) {
          uVar2 = *puVar8;
          puVar8 = puVar9 + 3;
          *puVar3 = uVar2;
          puVar3 = puVar10 + 3;
        }
        if ((uVar5 & 2) != 0) {
          uVar1 = *(undefined2 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 2);
          *(undefined2 *)puVar3 = uVar1;
          puVar3 = (undefined4 *)((int)puVar3 + 2);
        }
        uVar7 = uVar7 - 1;
        puVar8 = (undefined4 *)((int)puVar8 + (param_7 - uVar4));
        if (uVar7 == 0) {
          return;
        }
      }
    }
  } while( true );
}


