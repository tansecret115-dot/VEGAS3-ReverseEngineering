/* Module: aviplug.dll
   Function: FUN_5f963440
   Address: 5f963440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f963440(int param_1,int *param_2,int param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int local_6c [10];
  int local_44 [6];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  local_20 = param_3;
  if (param_4 < 0) {
    local_20 = param_3 + param_4 * -0x1df;
  }
  local_44[0] = 0;
  local_8 = *(int **)(param_1 + 0x4738);
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_1c = 1;
  local_c = 1;
  local_10 = 0;
  piVar9 = param_2;
  do {
    iVar7 = 0;
    if (local_10 == 5) {
      local_1c = 0;
    }
    piVar8 = piVar9;
    for (iVar6 = 0x78; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar8 = -1;
      piVar8 = piVar8 + 1;
    }
    bVar3 = (char)local_10 << 4;
    *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) & 0xf8;
    *(byte *)((int)piVar9 + 1) = bVar3 | 7;
    *(byte *)((int)piVar9 + 3) = *(byte *)((int)piVar9 + 3) & 0x3f;
    *(byte *)((int)piVar9 + 5) = *(byte *)((int)piVar9 + 5) & 0x78;
    *(byte *)((int)piVar9 + 6) = *(byte *)((int)piVar9 + 6) & 0x78;
    *(undefined1 *)piVar9 = 0x1f;
    *(undefined1 *)((int)piVar9 + 2) = 0;
    *(byte *)((int)piVar9 + 7) = *(byte *)((int)piVar9 + 7) & 0x78;
    local_18 = 0;
    piVar9 = piVar9 + 0x14;
    do {
      piVar8 = piVar9;
      *(undefined1 *)piVar8 = 0x3f;
      *(byte *)((int)piVar8 + 1) = bVar3 | 7;
      *(char *)((int)piVar8 + 2) = (char)local_18;
      pbVar4 = (byte *)((int)piVar8 + 3);
      iVar6 = 6;
      do {
        *pbVar4 = *pbVar4 & 0x7f | (char)local_1c << 7;
        pbVar4[1] = (pbVar4[1] ^ (byte)iVar7) & 0xf ^ pbVar4[1];
        pbVar4[3] = 0x13;
        if (((iVar7 == 0) || (iVar7 == 6)) || (iVar7 == 0xb)) {
          *pbVar4 = *pbVar4 & 0x8f;
        }
        iVar7 = iVar7 + 1;
        pbVar4 = pbVar4 + 8;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      piVar9 = piVar8 + 0x14;
      local_18 = local_18 + 1;
    } while (local_18 < 2);
    piVar5 = piVar8 + 0x48;
    if (local_c == 0) {
      piVar5 = (int *)((int)piVar8 + 0x53);
    }
    *(undefined1 *)piVar5 = 0x60;
    *(undefined4 *)((int)piVar5 + 1) = 0xffc0ffff;
    *(undefined1 *)((int)piVar5 + 5) = 0x61;
    *(undefined4 *)((int)piVar5 + 6) = 0xfffcc83f;
    iVar7 = 0;
    do {
      *(undefined1 *)piVar9 = 0x5f;
      *(char *)((int)piVar9 + 2) = (char)iVar7;
      *(byte *)((int)piVar9 + 1) = bVar3 | 7;
      piVar9 = piVar9 + 0x14;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    local_44[5] = 0;
    local_28 = 0;
    local_14 = 0;
    local_44[4] = 0;
    local_18 = 0;
    do {
      *(undefined1 *)piVar9 = 0x7f;
      *(byte *)((int)piVar9 + 1) = bVar3 | 7;
      *(char *)((int)piVar9 + 2) = (char)local_44[5];
      *(undefined1 *)((int)piVar9 + 3) = 0xff;
      piVar9[1] = -1;
      if (local_c == 0) {
        if (local_44[5] == 0) {
          *(undefined1 *)((int)piVar9 + 3) = 0x50;
          piVar9[1] = -0x3f3fe0c0;
        }
        else if (local_44[5] == 1) goto LAB_5f963610;
      }
      else if (local_44[5] == 3) {
        *(undefined1 *)((int)piVar9 + 3) = 0x50;
        piVar9[1] = -0x3f3fe0c0;
      }
      else if (local_44[5] == 4) {
LAB_5f963610:
        *(undefined1 *)((int)piVar9 + 3) = 0x51;
        piVar9[1] = -0x5f00c1;
      }
      local_44[5] = local_44[5] + 1;
      piVar8 = piVar9 + 2;
      for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
      }
      piVar9 = piVar9 + 0x14;
      if (local_18 == 8) {
        local_44[4] = param_4 * 8 + -0x40;
      }
      local_2c = 3;
      do {
        piVar8 = local_8;
        piVar5 = local_8 + 0x3920;
        for (iVar7 = 0x168; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar5 = 0;
          piVar5 = piVar5 + 1;
        }
        FUN_5f977270(local_10,local_14,local_6c);
        param_2 = local_44;
        piVar5 = local_6c;
        local_24 = 5;
        do {
          FUN_5f968980((undefined4 *)(local_20 + piVar5[1] * param_4 + *piVar5 * 4),
                       (undefined8 *)piVar8,param_4,*param_2);
          piVar2 = local_8;
          piVar8 = piVar8 + 0x180;
          param_2 = param_2 + 1;
          piVar5 = piVar5 + 2;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        FUN_5f96ee40((undefined8 *)local_8);
        puVar1 = (uint *)(piVar2 + 0x2e2c);
        FUN_5f96ef00(piVar2,puVar1);
        FUN_5f972da0((undefined8 *)piVar2,puVar1);
        FUN_5f972fc0((ulonglong *)(piVar2 + 0xf00),(int)piVar2,puVar1,piVar2 + 0x2e6b);
        FUN_5f973840(param_1 + 0x700,*(int **)(param_1 + 0x4738));
        FUN_5f977030((int)piVar9,(char *)(param_1 + 0x700),*(int *)(param_1 + 0x4738));
        iVar7 = 5;
        do {
          *(undefined1 *)piVar9 = 0x9f;
          *(byte *)((int)piVar9 + 1) = bVar3 | 7;
          *(char *)((int)piVar9 + 2) = (char)local_28;
          local_28 = local_28 + 1;
          piVar9 = piVar9 + 0x14;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        local_14 = local_14 + 1;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
      local_18 = local_18 + 1;
    } while (local_18 < 9);
    local_c = (uint)(local_c == 0);
    local_10 = local_10 + 1;
    if (9 < local_10) {
      return;
    }
  } while( true );
}


