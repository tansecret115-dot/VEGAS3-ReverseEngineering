/* Module: 28_83260.dll
   Function: FUN_100047a0
   Address: 100047a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100047a0(short *param_1,float *param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined *local_14;
  short local_10;
  undefined4 local_c;
  float *local_8;
  
  if (DAT_1000cd34 == 8000) {
    iVar5 = 0;
    if (DAT_1000cd28 < 1) {
      return 0;
    }
    do {
      sVar1 = *param_1;
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 1;
      *param_2 = (float)(int)sVar1 * _DAT_100070e4;
      param_2 = param_2 + 1;
    } while (iVar5 < DAT_1000cd28);
    return 0;
  }
  if (DAT_1000cd34 != 0x2b11) {
    if ((DAT_1000cd34 != 0x5622) && (DAT_1000cd34 != 0xac44)) {
      return 0;
    }
    if (DAT_1000cd34 != 0x2b11) {
      if (DAT_1000cd34 == 0x5622) {
        local_8 = (float *)&DAT_10008f58;
        local_14 = &DAT_100092c8;
        local_c = DAT_100092c4;
        local_10 = 4;
        uVar2 = DAT_10008ea8;
      }
      else {
        local_8 = (float *)&DAT_10009028;
        local_14 = &DAT_10009350;
        local_c = DAT_1000934c;
        local_10 = 2;
        uVar2 = DAT_10008eac;
      }
      goto LAB_10004890;
    }
  }
  local_8 = (float *)&DAT_10008ef0;
  local_14 = &DAT_100091c0;
  local_c = DAT_100091bc;
  local_10 = 8;
  uVar2 = DAT_10008ea4;
LAB_10004890:
  uVar3 = (uint)DAT_1000cd28;
  sVar1 = (short)uVar2;
  uVar6 = sVar1 * 2;
  puVar7 = (undefined4 *)((int)DAT_1000cd30 + uVar6);
  for (uVar4 = (uVar3 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *(undefined4 *)param_1;
    param_1 = param_1 + 2;
    puVar7 = puVar7 + 1;
  }
  for (iVar5 = (uVar3 & 1) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(char *)puVar7 = (char)*param_1;
    param_1 = (short *)((int)param_1 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  FUN_10004990(local_8,sVar1,DAT_1000cd28,(short *)((int)DAT_1000cd30 + uVar6),DAT_1000cd2c);
  puVar7 = (undefined4 *)((int)DAT_1000cd30 + DAT_1000cd28 * 2);
  puVar8 = DAT_1000cd30;
  for (uVar3 = ((int)sVar1 & 0x7fffffffU) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  uVar3 = (uint)(short)local_c;
  FUN_10004d20(DAT_1000cd2c,DAT_1000cd3c + uVar3,local_10,DAT_1000cd28);
  FUN_10004a10((int)local_14,local_c,local_10 * DAT_1000cd28,(int)(DAT_1000cd3c + uVar3),
               (int)param_2,local_10,0xb);
  puVar7 = DAT_1000cd3c + (int)DAT_1000cd28 * (int)local_10;
  puVar8 = DAT_1000cd3c;
  for (uVar3 = uVar3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  return 0;
}


