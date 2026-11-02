/* Module: qt4plug.dll
   Function: FUN_5f54de30
   Address: 5f54de30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f54de30(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,int *param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_9c;
  LONG local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_44;
  int local_40;
  uint local_38;
  uint local_34;
  int local_10;
  int local_c;
  
  if (param_4 == (int *)0x0) {
    local_80 = *param_2;
    local_7c = param_2[1];
    local_88 = 0;
    local_84 = 0;
  }
  else {
    local_88 = *param_4 << 0xe;
    local_80 = param_4[2];
    local_84 = param_4[1] << 0xe;
    local_7c = param_4[3];
  }
  local_80 = local_80 << 0xe;
  local_7c = local_7c << 0xe;
  if (param_8 == (int *)0x0) {
    local_90 = *param_2;
    local_8c = param_2[1];
    local_98 = 0;
    local_94 = 0;
  }
  else {
    local_90 = param_8[2];
    local_98 = *param_8 << 0xe;
    local_8c = param_8[3];
    local_94 = param_8[1] << 0xe;
  }
  local_8c = local_8c << 0xe;
  local_90 = local_90 << 0xe;
  iVar1 = FUN_5f553840(&local_78,param_1,param_2,param_3,&local_88,param_5,param_6,param_7,&local_98
                      );
  if (iVar1 != 0) {
    if ((local_10 == 0x4000) && (local_c == 0x4000)) {
      iVar1 = ((local_5c - local_64) - 1 | 0x3fff) + 1;
      local_9c = (int)(iVar1 + (iVar1 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar1 = ((local_60 - local_68) - 1 | 0x3fff) + 1;
      puVar5 = (undefined4 *)
               (((int)((local_38 & 0xffffc000) + ((int)local_38 >> 0x1f & 0x3fffU)) >> 0xe) *
                param_9 +
               local_44 +
               ((int)((local_34 & 0xffffc000) + ((int)local_34 >> 0x1f & 0x3fffU)) >> 0xe) *
               local_40);
      puVar2 = (undefined4 *)
               (((int)((local_68 & 0xffffc000) + ((int)local_68 >> 0x1f & 0x3fffU)) >> 0xe) *
                param_9 +
               local_74 +
               ((int)((local_64 & 0xffffc000) + ((int)local_64 >> 0x1f & 0x3fffU)) >> 0xe) *
               local_70);
      if (0 < local_9c) {
        uVar4 = ((int)(iVar1 + (iVar1 >> 0x1f & 0x3fffU)) >> 0xe) * param_9;
        do {
          puVar6 = puVar5;
          puVar7 = puVar2;
          for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          puVar5 = (undefined4 *)((int)puVar5 + local_40);
          puVar2 = (undefined4 *)((int)puVar2 + local_70);
          local_9c = local_9c + -1;
        } while (local_9c != 0);
        return 0;
      }
    }
    else {
      FUN_5f54da50(param_1,param_2,param_3,(int *)(-(uint)(param_4 != (int *)0x0) & (uint)&local_88)
                   ,param_5,param_6,param_7,
                   (LONG *)(-(uint)(param_8 != (int *)0x0) & (uint)&local_98),param_9,param_10);
    }
  }
  return 0;
}


