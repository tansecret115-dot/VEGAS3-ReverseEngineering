/* Module: aviplug.dll
   Function: FUN_5f9682f0
   Address: 5f9682f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9682f0(byte *param_1,int *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int *piVar4;
  byte bVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 8;
  local_1c = param_2 + 0x140;
  local_18 = param_2 + 0x100;
  do {
    local_c = 2;
    do {
      local_10 = 2;
      do {
        local_14 = 2;
        piVar7 = param_2;
        do {
          param_2 = (int *)0x4;
          bVar1 = param_1[1];
          bVar2 = *param_1;
          iVar9 = (uint)param_1[2] * 4;
          pbVar3 = param_1 + 2;
          do {
            piVar8 = piVar7;
            piVar7 = piVar8 + 1;
            param_2 = (int *)((int)param_2 + -1);
            *piVar8 = (int)((((uint)pbVar3[-2] * DAT_5f9f41c4 + (uint)pbVar3[-1] * DAT_5f9f41c0 +
                             (uint)*pbVar3 * DAT_5f9f41bc) - DAT_5f9f41a8) + DAT_5f9f41ac) >>
                      ((byte)DAT_5f9f41b0 & 0x1f);
            pbVar3 = pbVar3 + 4;
          } while (param_2 != (int *)0x0);
          bVar5 = (byte)DAT_5f9f41b8;
          piVar4 = local_1c + 1;
          *local_1c = (int)(((DAT_5f9f41d0 * (uint)bVar2 * 4 - DAT_5f9f41cc * (uint)bVar1 * 4) -
                            DAT_5f9f41c8 * iVar9) + DAT_5f9f41b4) >> (bVar5 & 0x1f);
          param_1 = param_1 + 0x10;
          piVar6 = local_18 + 1;
          local_14 = local_14 + -1;
          *local_18 = (int)(((DAT_5f9f41d4 * iVar9 - DAT_5f9f41dc * (uint)bVar2 * 4) -
                            DAT_5f9f41d8 * (uint)bVar1 * 4) + DAT_5f9f41b4) >> (bVar5 & 0x1f);
          local_1c = piVar4;
          local_18 = piVar6;
        } while (local_14 != 0);
        param_2 = piVar8 + 0x39;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      param_1 = param_1 + param_4;
      local_c = local_c + -1;
    } while (local_c != 0);
    param_2 = piVar8 + -0xbf;
    param_1 = param_1 + param_3 + param_4 * -2 + -0x80;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}


