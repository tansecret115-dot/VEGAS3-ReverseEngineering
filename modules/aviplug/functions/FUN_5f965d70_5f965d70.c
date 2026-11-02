/* Module: aviplug.dll
   Function: FUN_5f965d70
   Address: 5f965d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f965d70(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int local_54 [10];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  local_1c = param_3;
  if (param_4 < 0) {
    local_1c = param_3 + param_4 * -0x23f;
  }
  local_8 = *(int **)(param_1 + 0x4738);
  local_14 = 1;
  local_c = 1;
  local_10 = 0;
  puVar8 = param_2;
  do {
    if (local_10 == 6) {
      local_14 = 0;
    }
    puVar10 = puVar8;
    for (iVar6 = 0x78; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = 0xffffffff;
      puVar10 = puVar10 + 1;
    }
    bVar3 = (char)local_10 << 4;
    *(byte *)((int)puVar8 + 3) = *(byte *)((int)puVar8 + 3) & 0x3f | 0x80;
    *(byte *)(puVar8 + 1) = *(byte *)(puVar8 + 1) & 0xf8;
    *(byte *)((int)puVar8 + 1) = bVar3 | 7;
    *(byte *)((int)puVar8 + 5) = *(byte *)((int)puVar8 + 5) & 0x78;
    *(undefined1 *)puVar8 = 0x1f;
    *(undefined1 *)((int)puVar8 + 2) = 0;
    *(byte *)((int)puVar8 + 6) = *(byte *)((int)puVar8 + 6) & 0x78;
    *(byte *)((int)puVar8 + 7) = *(byte *)((int)puVar8 + 7) & 0x78;
    iVar6 = 0;
    local_18 = 0;
    puVar8 = puVar8 + 0x14;
    do {
      puVar10 = puVar8;
      *(undefined1 *)puVar10 = 0x3f;
      *(byte *)((int)puVar10 + 1) = bVar3 | 7;
      *(char *)((int)puVar10 + 2) = (char)local_18;
      pbVar4 = (byte *)((int)puVar10 + 3);
      iVar9 = 6;
      do {
        *pbVar4 = *pbVar4 & 0x7f | (char)local_14 << 7;
        pbVar4[1] = (pbVar4[1] ^ (byte)iVar6) & 0xf ^ pbVar4[1];
        pbVar4[3] = 0x13;
        if (((iVar6 == 0) || (iVar6 == 6)) || (iVar6 == 0xb)) {
          *pbVar4 = *pbVar4 & 0x8f;
        }
        iVar6 = iVar6 + 1;
        pbVar4 = pbVar4 + 8;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      puVar8 = puVar10 + 0x14;
      local_18 = local_18 + 1;
    } while (local_18 < 2);
    puVar5 = puVar10 + 0x48;
    if (local_c == 0) {
      puVar5 = (undefined4 *)((int)puVar10 + 0x53);
    }
    *(undefined1 *)puVar5 = 0x60;
    *(undefined4 *)((int)puVar5 + 1) = 0xffe0ffff;
    *(undefined1 *)((int)puVar5 + 5) = 0x61;
    *(undefined4 *)((int)puVar5 + 6) = 0xfffcc83f;
    iVar6 = 0;
    do {
      *(undefined1 *)puVar8 = 0x5f;
      *(char *)((int)puVar8 + 2) = (char)iVar6;
      *(byte *)((int)puVar8 + 1) = bVar3 | 7;
      puVar8 = puVar8 + 0x14;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    local_2c = 0;
    local_20 = 0;
    param_2 = (undefined4 *)0x0;
    local_28 = 9;
    do {
      *(undefined1 *)puVar8 = 0x7f;
      *(byte *)((int)puVar8 + 1) = bVar3 | 7;
      *(char *)((int)puVar8 + 2) = (char)local_2c;
      if (local_c == 0) {
        if (local_2c == 0) {
          *(undefined1 *)((int)puVar8 + 3) = 0x50;
          puVar8[1] = 0xc0e01f40;
        }
        else {
          if (local_2c != 1) goto LAB_5f965f44;
          *(undefined1 *)((int)puVar8 + 3) = 0x51;
          puVar8[1] = 0xffa0ff3f;
        }
      }
      else if (local_2c == 3) {
        *(undefined1 *)((int)puVar8 + 3) = 0x50;
        puVar8[1] = 0xc0e01f40;
      }
      else if (local_2c == 4) {
        *(undefined1 *)((int)puVar8 + 3) = 0x51;
        puVar8[1] = 0xffa0ff3f;
      }
      else {
LAB_5f965f44:
        *(undefined1 *)((int)puVar8 + 3) = 0xff;
        puVar8[1] = 0xffffffff;
      }
      local_2c = local_2c + 1;
      puVar10 = puVar8 + 2;
      for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      puVar8 = puVar8 + 0x14;
      local_24 = 3;
      do {
        piVar7 = local_8;
        piVar11 = local_8 + 0x3920;
        for (iVar6 = 0x168; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar11 = 0;
          piVar11 = piVar11 + 1;
        }
        FUN_5f977380(local_10,(int)param_2,local_54);
        piVar11 = local_54;
        local_18 = 5;
        do {
          FUN_5f96aa70((undefined4 *)(*piVar11 * 3 + local_1c + piVar11[1] * param_4),
                       (undefined8 *)piVar7,param_4);
          piVar2 = local_8;
          piVar7 = piVar7 + 0x180;
          piVar11 = piVar11 + 2;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        FUN_5f96ee40((undefined8 *)local_8);
        puVar1 = (uint *)(piVar2 + 0x2e2c);
        FUN_5f96ef00(piVar2,puVar1);
        FUN_5f972da0((undefined8 *)piVar2,puVar1);
        FUN_5f972fc0((ulonglong *)(piVar2 + 0xf00),(int)piVar2,puVar1,piVar2 + 0x2e6b);
        FUN_5f973840(param_1 + 0x700,*(int **)(param_1 + 0x4738));
        FUN_5f977030((int)puVar8,(char *)(param_1 + 0x700),*(int *)(param_1 + 0x4738));
        iVar6 = 5;
        do {
          *(undefined1 *)puVar8 = 0x9f;
          *(byte *)((int)puVar8 + 1) = bVar3 | 7;
          *(char *)((int)puVar8 + 2) = (char)local_20;
          local_20 = local_20 + 1;
          puVar8 = puVar8 + 0x14;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        param_2 = (undefined4 *)((int)param_2 + 1);
        local_24 = local_24 + -1;
      } while (local_24 != 0);
      local_28 = local_28 + -1;
    } while (local_28 != 0);
    local_c = (uint)(local_c == 0);
    local_10 = local_10 + 1;
    if (0xb < local_10) {
      return;
    }
  } while( true );
}


