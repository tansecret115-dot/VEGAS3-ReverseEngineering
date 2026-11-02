/* Module: aviplug.dll
   Function: FUN_5f9684b0
   Address: 5f9684b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9684b0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_20 = param_2 + 0x100;
  local_c = 8;
  piVar9 = param_2;
  param_2 = param_2 + 0x140;
  do {
    local_10 = 2;
    do {
      local_14 = 2;
      do {
        local_18 = 2;
        do {
          local_1c = 4;
          iVar7 = *param_2 * DAT_5f9f41f0 + DAT_5f9f41e8;
          iVar5 = DAT_5f9f41e8 - (*local_20 * DAT_5f9f41f8 + *param_2 * DAT_5f9f41f4);
          iVar3 = DAT_5f9f41e8 + *local_20 * DAT_5f9f41fc;
          puVar6 = (undefined1 *)(param_1 + 2);
          do {
            piVar10 = piVar9;
            iVar1 = (*piVar10 << ((byte)DAT_5f9f41e4 & 0x1f)) + DAT_5f9f41e0;
            bVar2 = (byte)DAT_5f9f41ec;
            iVar4 = iVar7 + iVar1 >> (bVar2 & 0x1f);
            iVar8 = iVar5 + iVar1 >> (bVar2 & 0x1f);
            iVar1 = iVar1 + iVar3 >> (bVar2 & 0x1f);
            if (iVar4 < 0x100) {
              if (iVar4 < 0) {
                iVar4 = 0;
              }
            }
            else {
              iVar4 = 0xff;
            }
            puVar6[-2] = (char)iVar4;
            if (iVar8 < 0x100) {
              if (iVar8 < 0) {
                iVar8 = 0;
              }
            }
            else {
              iVar8 = 0xff;
            }
            puVar6[-1] = (char)iVar8;
            if (iVar1 < 0x100) {
              if (iVar1 < 0) {
                iVar1 = 0;
              }
            }
            else {
              iVar1 = 0xff;
            }
            *puVar6 = (char)iVar1;
            piVar9 = piVar10 + 1;
            puVar6 = puVar6 + 3;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
          param_2 = param_2 + 1;
          local_20 = local_20 + 1;
          param_1 = param_1 + 0xc;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        piVar9 = piVar10 + 0x39;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      param_1 = param_1 + param_4;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    piVar9 = piVar10 + -0xbf;
    param_1 = param_1 + -0x60 + param_3 + param_4 * -2;
    local_c = local_c + -1;
  } while (local_c != 0);
  return;
}


