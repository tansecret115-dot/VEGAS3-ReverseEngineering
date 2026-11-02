/* Module: aviplug.dll
   Function: FUN_5f968680
   Address: 5f968680
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f968680(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_20 = param_2 + 0x140;
  local_c = 4;
  piVar11 = param_2;
  param_2 = param_2 + 0x100;
  do {
    local_10 = 2;
    piVar5 = param_2;
    piVar10 = local_20;
    do {
      local_20 = piVar10;
      param_2 = piVar5;
      local_14 = 2;
      piVar5 = param_2;
      piVar10 = local_20;
      do {
        local_20 = piVar10;
        param_2 = piVar5;
        local_18 = 2;
        piVar5 = param_2;
        piVar10 = local_20;
        do {
          local_20 = piVar10;
          param_2 = piVar5;
          local_1c = 2;
          iVar8 = *local_20 * DAT_5f9f41f0 + DAT_5f9f41e8;
          iVar6 = DAT_5f9f41e8 - (*param_2 * DAT_5f9f41f8 + *local_20 * DAT_5f9f41f4);
          iVar3 = DAT_5f9f41e8 + *param_2 * DAT_5f9f41fc;
          puVar7 = (undefined1 *)(param_1 + 2);
          do {
            piVar12 = piVar11;
            iVar1 = (*piVar12 << ((byte)DAT_5f9f41e4 & 0x1f)) + DAT_5f9f41e0;
            bVar2 = (byte)DAT_5f9f41ec;
            iVar4 = iVar8 + iVar1 >> (bVar2 & 0x1f);
            iVar9 = iVar6 + iVar1 >> (bVar2 & 0x1f);
            iVar1 = iVar1 + iVar3 >> (bVar2 & 0x1f);
            if (iVar4 < 0x100) {
              if (iVar4 < 0) {
                iVar4 = 0;
              }
            }
            else {
              iVar4 = 0xff;
            }
            puVar7[-2] = (char)iVar4;
            if (iVar9 < 0x100) {
              if (iVar9 < 0) {
                iVar9 = 0;
              }
            }
            else {
              iVar9 = 0xff;
            }
            puVar7[-1] = (char)iVar9;
            if (iVar1 < 0x100) {
              if (iVar1 < 0) {
                iVar1 = 0;
              }
            }
            else {
              iVar1 = 0xff;
            }
            *puVar7 = (char)iVar1;
            piVar11 = piVar12 + 1;
            puVar7 = puVar7 + 3;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
          piVar10 = local_20 + 1;
          piVar5 = param_2 + 1;
          param_1 = param_1 + 6;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        piVar11 = piVar12 + 0x3d;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      param_1 = param_1 + param_4;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    piVar11 = piVar12 + -0xb3;
    param_2 = param_2 + 9;
    local_20 = local_20 + 9;
    param_1 = param_1 + -0x30 + param_3 + param_4 * -2;
    local_c = local_c + -1;
  } while (local_c != 0);
  return;
}


