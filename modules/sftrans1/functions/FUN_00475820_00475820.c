/* Module: sftrans1.dll
   Function: FUN_00475820
   Address: 00475820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00475820(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iStack00000034;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_14;
  int local_10;
  int local_8;
  
  puVar1 = param_2;
  if (_DAT_00555910 <= *(double *)(param_1 + 0x30)) {
    iVar2 = ftol();
    local_2c = ftol();
    iVar9 = 1;
    param_1 = 1;
    iStack00000034 = 1;
    if (iVar2 < 0) {
      param_1 = -1;
      iVar9 = -1;
    }
    if (local_2c < 0) {
      iStack00000034 = -1;
      param_2 = (undefined4 *)((int)param_2 + (param_5 + -1) * param_3);
    }
    if (0 < param_5) {
      local_28 = local_2c + -1 + param_5;
      iVar7 = local_2c * param_3;
      iVar3 = local_28 * param_3;
      local_8 = param_5;
      do {
        if (param_6 == 4) {
          puVar6 = param_2;
          if (iVar9 < 0) {
            puVar6 = param_2 + param_4 + -1;
          }
          local_20 = local_2c;
          local_14 = iVar7;
          if (iStack00000034 < 0) {
            local_20 = local_28;
            local_14 = iVar3;
          }
          iVar9 = 0;
          if (0 < param_4) {
            local_24 = param_4 + iVar2;
            iVar11 = iVar2 * 4;
            iVar8 = local_24 * 4;
            do {
              local_24 = local_24 + -1;
              iVar8 = iVar8 + -4;
              iVar4 = iVar9 + iVar2;
              iVar10 = iVar11;
              if (param_1 < 0) {
                iVar4 = local_24;
                iVar10 = iVar8;
              }
              if (((iVar4 < 0) || (param_4 <= iVar4)) || ((local_20 < 0 || (param_5 <= local_20))))
              {
                *(undefined1 *)puVar6 = 0;
                *(undefined1 *)((int)puVar6 + 1) = 0;
                *(undefined1 *)((int)puVar6 + 2) = 0;
                *(undefined1 *)((int)puVar6 + 3) = 0xff;
              }
              else {
                *puVar6 = *(undefined4 *)(local_14 + iVar10 + (int)puVar1);
              }
              puVar6 = puVar6 + param_1;
              iVar9 = iVar9 + 1;
              iVar11 = iVar11 + 4;
            } while (iVar9 < param_4);
          }
        }
        else {
          puVar6 = param_2;
          if (iVar9 < 0) {
            puVar6 = param_2 + param_4 * 4 + -4;
          }
          local_14 = local_2c;
          local_10 = iVar7;
          if (iStack00000034 < 0) {
            local_14 = local_28;
            local_10 = iVar3;
          }
          iVar9 = 0;
          if (0 < param_4) {
            local_20 = param_4 + iVar2;
            local_24 = local_20 * 0x10;
            iVar11 = iVar2 << 4;
            do {
              local_20 = local_20 + -1;
              local_24 = local_24 + -0x10;
              iVar8 = iVar9 + iVar2;
              iVar4 = iVar11;
              if (param_1 < 0) {
                iVar8 = local_20;
                iVar4 = local_24;
              }
              if ((((iVar8 < 0) || (param_4 <= iVar8)) || (local_14 < 0)) || (param_5 <= local_14))
              {
                puVar6[3] = 0x3f800000;
                *puVar6 = 0;
                puVar6[1] = 0;
                puVar6[2] = 0;
              }
              else {
                puVar5 = (undefined4 *)(local_10 + iVar4 + (int)puVar1);
                *puVar6 = *puVar5;
                puVar6[1] = puVar5[1];
                puVar6[2] = puVar5[2];
                puVar6[3] = puVar5[3];
              }
              puVar6 = puVar6 + param_1 * 4;
              iVar9 = iVar9 + 1;
              iVar11 = iVar11 + 0x10;
            } while (iVar9 < param_4);
          }
        }
        iVar7 = iVar7 + param_3;
        param_2 = (undefined4 *)((int)param_2 + iStack00000034 * param_3);
        local_2c = local_2c + 1;
        iVar3 = iVar3 - param_3;
        local_28 = local_28 + -1;
        local_8 = local_8 + -1;
        iVar9 = param_1;
      } while (local_8 != 0);
    }
  }
  return;
}


