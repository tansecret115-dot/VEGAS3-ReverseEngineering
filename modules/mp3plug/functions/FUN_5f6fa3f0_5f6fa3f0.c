/* Module: mp3plug.dll
   Function: FUN_5f6fa3f0
   Address: 5f6fa3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_5f6fa3f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  local_20 = (byte *)0x0;
  if (param_2 == 0) {
    local_28 = 4;
  }
  else {
    local_28 = 6;
  }
  iVar2 = *(int *)(param_1 + 0x208);
  if (iVar2 != *(int *)(param_1 + 0x20c)) {
    local_20 = (byte *)0x0;
    do {
      local_24 = (int)local_20;
      iVar2 = iVar2 * 2;
      FUN_5f6f85e0(*(int **)(param_1 + 0x200),(byte *)((int)local_20 + param_3),4);
      iVar4 = (int)local_20 + 4;
      if (param_2 != 0) {
        uVar5 = (int)local_20 + 2;
        local_2c = 0xffff;
        local_20 = (byte *)iVar4;
        local_1c = uVar5;
        local_18 = iVar4;
        local_14 = iVar2;
        do {
          FUN_5f70bf70(0x8005,0x8000,&local_2c,*(byte *)(uVar5 + param_3));
          iVar2 = local_14;
          iVar3 = local_18;
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < iVar4);
        FUN_5f6f85e0(*(int **)(param_1 + 0x200),(byte *)(local_18 + param_3),2);
        iVar4 = iVar3 + 2;
      }
      iVar3 = *(int *)(param_1 + iVar2 * 4);
      FUN_5f6f85e0(*(int **)(param_1 + 0x200),(byte *)(iVar4 + param_3),
                   ((int)(iVar3 + ((uint)(iVar3 >> 2) >> 0x1d)) >> 3) - local_28);
      if (param_2 != 0) {
        iVar3 = *(int *)(param_1 + iVar2 * 4);
        local_1c = 0;
        iVar3 = (int)(iVar3 + ((uint)(iVar3 >> 2) >> 0x1d)) >> 3;
        if (iVar3 != local_28 && -1 < iVar3 - local_28) {
          pbVar6 = (byte *)(param_3 + iVar4);
          iVar3 = 0;
          local_20 = pbVar6;
          local_18 = iVar4;
          do {
            FUN_5f70bf70(0x8005,0x8000,&local_2c,*pbVar6);
            iVar1 = *(int *)(param_1 + iVar2 * 4);
            iVar3 = iVar3 + 1;
            pbVar6 = pbVar6 + 1;
            iVar4 = local_18;
          } while (iVar3 < ((int)(iVar1 + ((uint)(iVar1 >> 2) >> 0x1d)) >> 3) - local_28);
        }
        uVar5 = local_2c & 0xffff;
        *(char *)(param_3 + -2 + iVar4) = (char)(local_2c >> 8);
        local_2c._0_1_ = (undefined1)uVar5;
        *(undefined1 *)(param_3 + -1 + iVar4) = (undefined1)local_2c;
        local_2c = uVar5;
      }
      iVar3 = *(int *)(param_1 + iVar2 * 4);
      local_20 = (byte *)((((int)(iVar3 + ((uint)(iVar3 >> 2) >> 0x1d)) >> 3) - local_28) + iVar4);
      iVar4 = FUN_5f6f89e0(*(int *)(param_1 + 0x204));
      iVar2 = *(int *)(param_1 + 4 + iVar2 * 4);
      iVar4 = (int)(iVar4 + ((uint)(iVar4 >> 2) >> 0x1d)) >> 3;
      uVar7 = ((int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1d)) >> 3) - iVar4;
      local_1c = uVar7;
      FUN_5f6f85e0(*(int **)(param_1 + 0x204),(byte *)((int)local_20 + param_3),iVar4);
      puVar8 = (undefined4 *)(param_3 + iVar4 + (int)local_20);
      for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      iVar3 = *(int *)(param_1 + 0x208) + 1;
      local_20 = (byte *)(local_1c + iVar4 + (int)local_20);
      iVar2 = *(int *)(param_1 + 0x210);
      *(int *)(param_1 + 0x210) = iVar2 + 1;
      *(uint *)(param_1 + 0x208) =
           iVar3 - (((uint)(iVar3 >> 5) >> 0x1a) + 1 + *(int *)(param_1 + 0x208) & 0xffffffc0);
      *(int *)(param_1 + 0x214 + iVar2 * 4) = (int)local_20 - local_24;
      iVar2 = *(int *)(param_1 + 0x208);
    } while (iVar2 != *(int *)(param_1 + 0x20c));
  }
  return (int)local_20;
}


