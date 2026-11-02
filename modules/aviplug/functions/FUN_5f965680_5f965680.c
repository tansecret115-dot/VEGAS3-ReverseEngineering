/* Module: aviplug.dll
   Function: FUN_5f965680
   Address: 5f965680
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f965680(int param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  byte *pbVar5;
  uint *puVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  int local_50;
  int local_48;
  int local_44;
  int *local_40;
  int local_3c;
  int local_34;
  int local_30;
  int local_28 [10];
  
  local_44 = param_3;
  if (param_4 < 0) {
    local_44 = param_3 + param_4 * -0x23f;
  }
  iVar1 = *(int *)(param_1 + 0x4738);
  cVar3 = '\x01';
  bVar2 = true;
  local_50 = 0;
  puVar10 = param_2;
  do {
    if (local_50 == 6) {
      cVar3 = '\0';
    }
    puVar12 = puVar10;
    for (iVar8 = 0x78; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = 0xffffffff;
      puVar12 = puVar12 + 1;
    }
    bVar4 = (char)local_50 << 4;
    *(byte *)((int)puVar10 + 1) = bVar4 | 7;
    *(byte *)((int)puVar10 + 3) = *(byte *)((int)puVar10 + 3) & 0x3f | 0x80;
    *(byte *)(puVar10 + 1) = (byte)puVar10[1] & 0xf8;
    *(byte *)((int)puVar10 + 5) = *(byte *)((int)puVar10 + 5) & 0x78;
    *(undefined1 *)puVar10 = 0x1f;
    *(undefined1 *)((int)puVar10 + 2) = 0;
    *(byte *)((int)puVar10 + 6) = *(byte *)((int)puVar10 + 6) & 0x78;
    *(byte *)((int)puVar10 + 7) = *(byte *)((int)puVar10 + 7) & 0x78;
    iVar8 = 0;
    local_48 = 0;
    puVar10 = puVar10 + 0x14;
    do {
      puVar12 = puVar10;
      *(undefined1 *)puVar12 = 0x3f;
      *(byte *)((int)puVar12 + 1) = bVar4 | 7;
      *(char *)((int)puVar12 + 2) = (char)local_48;
      pbVar5 = (byte *)((int)puVar12 + 3);
      iVar11 = 6;
      do {
        *pbVar5 = *pbVar5 & 0x7f | cVar3 << 7;
        pbVar5[1] = (pbVar5[1] ^ (byte)iVar8) & 0xf ^ pbVar5[1];
        pbVar5[3] = 0x13;
        if (((iVar8 == 0) || (iVar8 == 6)) || (iVar8 == 0xb)) {
          *pbVar5 = *pbVar5 & 0x8f;
        }
        iVar8 = iVar8 + 1;
        pbVar5 = pbVar5 + 8;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      puVar10 = puVar12 + 0x14;
      local_48 = local_48 + 1;
    } while (local_48 < 2);
    puVar6 = puVar12 + 0x48;
    if (!bVar2) {
      puVar6 = (uint *)((int)puVar12 + 0x53);
    }
    *(undefined1 *)puVar6 = 0x60;
    *(undefined4 *)((int)puVar6 + 1) = 0xffe0ffff;
    *(undefined1 *)((int)puVar6 + 5) = 0x61;
    *(undefined4 *)((int)puVar6 + 6) = 0xfffcc83f;
    iVar8 = 0;
    do {
      *(undefined1 *)puVar10 = 0x5f;
      *(char *)((int)puVar10 + 2) = (char)iVar8;
      *(byte *)((int)puVar10 + 1) = bVar4 | 7;
      puVar10 = puVar10 + 0x14;
      iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
    cVar7 = '\0';
    iVar8 = 0;
    param_2 = (uint *)0x0;
    local_30 = 9;
    do {
      *(undefined1 *)puVar10 = 0x7f;
      *(byte *)((int)puVar10 + 1) = bVar4 | 7;
      *(char *)((int)puVar10 + 2) = (char)iVar8;
      if (bVar2) {
        if (iVar8 == 3) {
          *(undefined1 *)((int)puVar10 + 3) = 0x50;
          puVar10[1] = 0xc0e01f40;
        }
        else if (iVar8 == 4) {
          *(undefined1 *)((int)puVar10 + 3) = 0x51;
          puVar10[1] = 0xffa0ff3f;
        }
        else {
LAB_5f96586e:
          *(undefined1 *)((int)puVar10 + 3) = 0xff;
          puVar10[1] = 0xffffffff;
        }
      }
      else if (iVar8 == 0) {
        *(undefined1 *)((int)puVar10 + 3) = 0x50;
        puVar10[1] = 0xc0e01f40;
      }
      else {
        if (iVar8 != 1) goto LAB_5f96586e;
        *(undefined1 *)((int)puVar10 + 3) = 0x51;
        puVar10[1] = 0xffa0ff3f;
      }
      iVar8 = iVar8 + 1;
      puVar12 = puVar10 + 2;
      for (iVar11 = 0x12; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      puVar10 = puVar10 + 0x14;
      local_34 = 3;
      do {
        puVar13 = (undefined4 *)(iVar1 + 0xe480);
        for (iVar11 = 0x168; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        FUN_5f977380(local_50,(int)param_2,local_28);
        piVar9 = local_28;
        local_3c = 5;
        local_40 = (int *)(iVar1 + 0xc818);
        do {
          FUN_5f96a1b0(local_44 + piVar9[1] * param_4 + *piVar9 * 4,param_1,param_4);
          local_48 = 6;
          piVar14 = (int *)(iVar1 + 0xbab0);
          iVar11 = param_1;
          do {
            FUN_5f96c830(piVar14,piVar14 + 0x180,(int *)(param_1 + 0x600),iVar11);
            iVar11 = iVar11 + 0x100;
            piVar14 = piVar14 + 0x40;
            local_48 = local_48 + -1;
          } while (local_48 != 0);
          FUN_5f971e30(local_40 + -0x5a,(int *)(iVar1 + 0xbab0));
          FUN_5f971e30(local_40,(int *)(iVar1 + 0xc0b0));
          piVar9 = piVar9 + 2;
          local_40 = local_40 + 0x12;
          local_3c = local_3c + -1;
        } while (local_3c != 0);
        FUN_5f972460(param_1 + 0x700,*(int *)(param_1 + 0x4738));
        FUN_5f976150(puVar10,(char *)(param_1 + 0x700),*(int *)(param_1 + 0x4738));
        iVar11 = 5;
        do {
          *(undefined1 *)puVar10 = 0x9f;
          *(byte *)((int)puVar10 + 1) = bVar4 | 7;
          *(char *)((int)puVar10 + 2) = cVar7;
          cVar7 = cVar7 + '\x01';
          puVar10 = puVar10 + 0x14;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        param_2 = (uint *)((int)param_2 + 1);
        local_34 = local_34 + -1;
      } while (local_34 != 0);
      local_30 = local_30 + -1;
    } while (local_30 != 0);
    bVar2 = !bVar2;
    local_50 = local_50 + 1;
    if (0xb < local_50) {
      return;
    }
  } while( true );
}


