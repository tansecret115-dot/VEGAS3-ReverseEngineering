/* Module: aviplug.dll
   Function: FUN_5f96a7f0
   Address: 5f96a7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96a7f0(undefined1 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  uVar1 = DAT_5f9f41ec;
  local_28 = param_2 + 0x140;
  local_24 = param_2 + 0x100;
  local_10 = 2;
  do {
    local_14 = 2;
    piVar3 = param_2;
    do {
      param_2 = piVar3;
      local_18 = 2;
      puVar2 = param_1;
      piVar3 = param_2;
      piVar4 = local_28;
      piVar5 = local_24;
      do {
        local_24 = piVar5;
        local_28 = piVar4;
        param_2 = piVar3;
        param_1 = puVar2;
        local_1c = 4;
        local_20 = param_1 + param_3 + 2;
        puVar2 = param_1;
        piVar3 = param_2;
        piVar4 = local_28;
        piVar5 = local_24;
        do {
          local_24 = piVar5;
          local_28 = piVar4;
          param_2 = piVar3;
          param_1 = puVar2;
          iVar8 = *local_24 * DAT_5f9f41fc;
          iVar12 = *local_28 * DAT_5f9f41f0;
          iVar9 = (*param_2 << ((byte)DAT_5f9f41e4 & 0x1f)) + DAT_5f9f41e0;
          iVar10 = DAT_5f9f41e8 + iVar9;
          bVar6 = (byte)uVar1;
          iVar11 = iVar12 + iVar10 >> (bVar6 & 0x1f);
          iVar7 = DAT_5f9f41e8 - (*local_24 * DAT_5f9f41f8 + *local_28 * DAT_5f9f41f4);
          iVar9 = iVar7 + iVar9 >> (bVar6 & 0x1f);
          iVar10 = iVar10 + iVar8 >> (bVar6 & 0x1f);
          if (iVar11 < 0x100) {
            if (iVar11 < 0) {
              iVar11 = 0;
            }
          }
          else {
            iVar11 = 0xff;
          }
          *param_1 = (char)iVar11;
          if (iVar9 < 0x100) {
            if (iVar9 < 0) {
              iVar9 = 0;
            }
          }
          else {
            iVar9 = 0xff;
          }
          local_20[-1 - param_3] = (char)iVar9;
          if (iVar10 < 0x100) {
            if (iVar10 < 0) {
              iVar10 = 0;
            }
          }
          else {
            iVar10 = 0xff;
          }
          param_1[2] = (char)iVar10;
          iVar9 = (param_2[0x10] << ((byte)DAT_5f9f41e4 & 0x1f)) + DAT_5f9f41e0;
          iVar10 = DAT_5f9f41e8 + iVar9;
          iVar11 = iVar12 + iVar10 >> (bVar6 & 0x1f);
          iVar9 = iVar9 + iVar7 >> (bVar6 & 0x1f);
          iVar10 = iVar10 + iVar8 >> (bVar6 & 0x1f);
          if (iVar11 < 0x100) {
            if (iVar11 < 0) {
              iVar11 = 0;
            }
          }
          else {
            iVar11 = 0xff;
          }
          local_20[-2] = (char)iVar11;
          if (iVar9 < 0x100) {
            if (iVar9 < 0) {
              iVar9 = 0;
            }
          }
          else {
            iVar9 = 0xff;
          }
          local_20[-1] = (char)iVar9;
          if (iVar10 < 0x100) {
            if (iVar10 < 0) {
              iVar10 = 0;
            }
          }
          else {
            iVar10 = 0xff;
          }
          *local_20 = (char)iVar10;
          local_20 = local_20 + 3;
          local_1c = local_1c + -1;
          puVar2 = param_1 + 3;
          piVar3 = param_2 + 1;
          piVar4 = local_28 + 1;
          piVar5 = local_24 + 1;
        } while (local_1c != 0);
        local_18 = local_18 + -1;
        piVar3 = param_2 + 0x3d;
      } while (local_18 != 0);
      local_28 = local_28 + 9;
      local_24 = local_24 + 9;
      param_1 = param_1 + param_3 * 2 + -0x15;
      local_14 = local_14 + -1;
      piVar3 = param_2 + -0x23;
    } while (local_14 != 0);
    param_2 = param_2 + 0x1d;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  return;
}


