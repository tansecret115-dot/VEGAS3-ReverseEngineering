/* Module: vegas30.exe
   Function: FUN_005dda70
   Address: 005dda70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005dda70(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                undefined4 param_5,int param_6,int param_7,int param_8,undefined4 param_9,
                undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  undefined8 uVar9;
  uint local_44;
  uint local_40;
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 uStack_1c;
  double local_18;
  int local_10 [4];
  
  local_28 = param_4;
  local_24 = param_5;
  local_3c = 0;
  local_40 = 0;
  iVar2 = riff64_GetNumListEntries(param_1,&local_40,&local_28);
  uVar1 = param_3;
  if (-1 < iVar2) {
    param_4 = 0;
    local_18 = (double)(param_8 - param_7) * _DAT_00612af0;
    if (local_40 != 0) {
      local_44 = 0;
      do {
        iVar5 = param_8;
        iVar2 = param_6;
        if ((*(byte *)(param_6 + 0x1c) & 1) != 0) {
          return -0x7ffb1ff4;
        }
        local_20 = local_44 / local_40;
        uStack_1c = 0;
        iVar3 = ftol();
        iVar4 = iVar3 + param_7;
        if (iVar5 < iVar3 + param_7) {
          iVar4 = iVar5;
        }
        FUN_004e7320(iVar2,iVar4);
        iVar2 = riff64_ReadChunkHeader(param_1,local_10,&local_38);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar5 = 4;
        bVar8 = true;
        piVar6 = &DAT_0062a530;
        piVar7 = local_10;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar8 = *piVar6 == *piVar7;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        } while (bVar8);
        if (bVar8) {
          param_3 = 0;
          iVar2 = riff64_SaveLocation(param_1,&local_30);
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar2 = FUN_005da1c0(1,1,local_30,local_2c,local_38);
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar2 = FUN_005c4410(uVar1,param_2,&param_3,param_9,param_10,param_11,0,0);
          if (iVar2 < 0) {
            return iVar2;
          }
          if (iVar2 == 0x4e003) {
            local_3c = 1;
          }
          iVar2 = FUN_005da1c0(0,0,0,0,0,0);
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar2 = riff64_RestoreLocation(param_1,local_30,local_2c);
          if (iVar2 < 0) {
            return iVar2;
          }
          uVar9 = riff64_SkipChunk(param_1,local_38);
          local_38 = uVar9;
          FUN_005f2a30(param_4);
        }
        else {
          riff64_SkipChunk(param_1,local_38);
        }
        param_4 = param_4 + 1;
        local_44 = local_44 + 100;
      } while (param_4 < local_40);
    }
    if ((-1 < iVar2) && (local_3c != 0)) {
      iVar2 = 0x4e002;
    }
  }
  return iVar2;
}


