/* Module: sfcd.cdd
   Function: FUN_00406e30
   Address: 00406e30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00406e30(undefined4 *param_1,byte *param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint local_68;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_55;
  undefined1 local_54;
  uint local_4e;
  char local_44;
  char local_43;
  byte *local_1c;
  int local_18;
  ulong local_c;
  
  iVar1 = param_1[0x58];
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x2a);
  if (param_2 != (byte *)0x0) {
    local_68 = 0;
    pbVar4 = local_1c;
    if (param_3 != 0) {
      do {
        if (param_5 == 0) {
          pbVar6 = param_2;
          pbVar7 = pbVar4;
          for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined4 *)pbVar7 = *(undefined4 *)pbVar6;
            pbVar6 = pbVar6 + 4;
            pbVar7 = pbVar7 + 4;
          }
          pbVar4 = pbVar4 + param_4;
          for (uVar2 = param_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *pbVar7 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            pbVar7 = pbVar7 + 1;
          }
        }
        else {
          CreateRawSectors(pbVar4,param_2,*(int *)(iVar1 + 0x1d8) + local_68,1,1);
          pbVar4 = pbVar4 + 0x930;
        }
        param_2 = param_2 + param_4;
        FUN_00401430((int *)(iVar1 + 500),pbVar4);
        pbVar4 = pbVar4 + 0x10;
        local_68 = local_68 + 1;
      } while (local_68 < param_3);
    }
    if (param_5 != 0) {
      param_4 = 0x930;
    }
  }
  local_60 = 10;
  local_5b = 0;
  local_5a = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1dc) >> 0x18);
  local_59 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1dc) >> 0x10);
  local_58 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1dc) >> 8);
  local_57 = *(undefined1 *)(iVar1 + 0x1dc);
  iVar5 = (param_4 + 0x10) * param_3;
  local_55 = 0;
  local_54 = (char)param_3;
  local_18 = iVar5;
  uVar2 = FUN_00406d10(param_1,local_64);
  do {
    if ((uVar2 == 0) || (iVar3 = SfScsi_IsCheckCondition(local_c), iVar3 == 0)) {
      *(uint *)(iVar1 + 0x1dc) = *(int *)(iVar1 + 0x1dc) + param_3;
      *(uint *)(iVar1 + 0x1d8) = *(int *)(iVar1 + 0x1d8) + param_3;
      return uVar2;
    }
    switch(local_4e & 0xf) {
    case 0:
    case 1:
    case 6:
      goto switchD_00406fa1_caseD_0;
    case 2:
      if (local_44 != '\x04') {
        return 0x8004e0c8;
      }
      if (local_43 != '\b') {
        return 0x8004e0c8;
      }
switchD_00406fa1_caseD_0:
      SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x2a);
      local_60 = 10;
      local_5b = 0;
      local_5a = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1dc) >> 0x18);
      local_59 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1dc) >> 0x10);
      local_58 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1dc) >> 8);
      local_57 = *(undefined1 *)(iVar1 + 0x1dc);
      local_55 = 0;
      local_54 = (char)param_3;
      local_18 = iVar5;
      uVar2 = FUN_00406d10(param_1,local_64);
      break;
    default:
      return 0x8004e0c8;
    }
  } while( true );
}


