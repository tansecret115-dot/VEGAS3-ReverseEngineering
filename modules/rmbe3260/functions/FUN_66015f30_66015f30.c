/* Module: rmbe3260.dll
   Function: FUN_66015f30
   Address: 66015f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66015f30(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint local_4c;
  uint local_48;
  short local_44;
  undefined2 local_42;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  uint local_28;
  byte local_24;
  undefined3 uStack_23;
  undefined1 uStack_20;
  byte local_1f;
  undefined3 uStack_1e;
  undefined1 uStack_1b;
  uint local_1a;
  byte *local_16;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  
  FUN_6602f240(&local_10);
  pbVar2 = param_1;
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
    local_10 = *(undefined4 *)(param_1 + 0xa6);
    local_c = 0;
    local_8 = 4;
    (**(code **)(**(int **)(param_1 + 0x88) + 0x2c))(&local_10,0,0);
    pbVar3 = (byte *)FUN_6602f740(*(void **)(pbVar2 + 0x88),0,&param_1);
    if (pbVar3 != (byte *)0x0) {
      if (param_1 != (byte *)0x0) {
        local_4c = (uint)*pbVar3 << 0x18 | (uint)pbVar3[1] << 0x10 | (uint)pbVar3[2] << 8 |
                   (uint)pbVar3[3];
        local_48 = (uint)pbVar3[4] << 0x18 | (uint)pbVar3[5] << 0x10 | (uint)pbVar3[6] << 8 |
                   (uint)pbVar3[7];
        local_44 = CONCAT11(pbVar3[8],pbVar3[9]);
        if (local_44 == 0) {
          local_42 = CONCAT11(pbVar3[10],pbVar3[0xb]);
          local_40 = (uint)pbVar3[0xc] << 0x18 | (uint)pbVar3[0xd] << 0x10 | (uint)pbVar3[0xe] << 8
                     | (uint)pbVar3[0xf];
          local_3c = (uint)pbVar3[0x10] << 0x18 | (uint)pbVar3[0x11] << 0x10 |
                     (uint)pbVar3[0x12] << 8 | (uint)pbVar3[0x13];
          local_38 = (uint)pbVar3[0x14] << 0x18 | (uint)pbVar3[0x15] << 0x10 |
                     (uint)pbVar3[0x16] << 8 | (uint)pbVar3[0x17];
          local_34 = (uint)pbVar3[0x18] << 0x18 | (uint)pbVar3[0x19] << 0x10 |
                     (uint)pbVar3[0x1a] << 8 | (uint)pbVar3[0x1b];
          local_30 = (uint)pbVar3[0x1c] << 0x18 | (uint)pbVar3[0x1d] << 0x10 |
                     (uint)pbVar3[0x1e] << 8 | (uint)pbVar3[0x1f];
          local_28 = (uint)pbVar3[0x24] << 0x18 | (uint)pbVar3[0x25] << 0x10 |
                     (uint)pbVar3[0x26] << 8 | (uint)pbVar3[0x27];
          bVar1 = pbVar3[0x28];
          pbVar5 = pbVar3 + 0x29;
          _local_24 = CONCAT31(uStack_23,bVar1);
          pbVar4 = pbVar5 + bVar1;
          if ((int)pbVar4 - (int)pbVar3 <= (int)param_1) {
            uStack_23 = SUB43(pbVar5,0);
            _local_24 = CONCAT31(uStack_23,bVar1);
            uStack_20 = (undefined1)((uint)pbVar5 >> 0x18);
            bVar1 = *pbVar4;
            _local_1f = CONCAT31(uStack_1e,bVar1);
            pbVar4 = pbVar4 + 1;
            pbVar5 = pbVar4 + bVar1;
            if ((int)pbVar5 - (int)pbVar3 <= (int)param_1) {
              uStack_1e = SUB43(pbVar4,0);
              _local_1f = CONCAT31(uStack_1e,bVar1);
              uStack_1b = (undefined1)((uint)pbVar4 >> 0x18);
              local_1a = (uint)*pbVar5 << 0x18 | (uint)pbVar5[1] << 0x10 | (uint)pbVar5[2] << 8 |
                         (uint)pbVar5[3];
              if (pbVar5 + 4 + (local_1a - (int)pbVar3) <= param_1) {
                local_16 = pbVar5 + 4;
              }
            }
          }
        }
      }
      local_2c = *(undefined4 *)(pbVar2 + 0xb0);
      FUN_660162d0(&local_4c,pbVar3,(int *)&param_1);
    }
    (**(code **)(**(int **)(pbVar2 + 0x88) + 0x24))();
    if (*(undefined4 **)(pbVar2 + 0x88) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(pbVar2 + 0x88))(1);
    }
    pbVar2[0x88] = 0;
    pbVar2[0x89] = 0;
    pbVar2[0x8a] = 0;
    pbVar2[0x8b] = 0;
  }
  if (*(void **)(pbVar2 + 0x90) != (void *)0x0) {
    local_10 = *(undefined4 *)(pbVar2 + 0xa6);
    local_c = 0;
    local_8 = 4;
    pbVar3 = (byte *)FUN_6602f740(*(void **)(pbVar2 + 0x90),0,&param_1);
    if (pbVar3 != (byte *)0x0) {
      FUN_660164d0(&local_4c,pbVar3,param_1);
      local_2c = *(undefined4 *)(pbVar2 + 0xb0);
      FUN_660162d0(&local_4c,pbVar3,(int *)&param_1);
    }
    (**(code **)(**(int **)(pbVar2 + 0x90) + 0x24))();
    if (*(undefined4 **)(pbVar2 + 0x90) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(pbVar2 + 0x90))(1);
    }
    pbVar2[0x90] = 0;
    pbVar2[0x91] = 0;
    pbVar2[0x92] = 0;
    pbVar2[0x93] = 0;
  }
  (**(code **)(*(int *)pbVar2 + 0x3c))(pbVar2);
  if (*(void **)(pbVar2 + 0x9e) != (void *)0x0) {
    operator_delete(*(void **)(pbVar2 + 0x9e));
    pbVar2[0x9e] = 0;
    pbVar2[0x9f] = 0;
    pbVar2[0xa0] = 0;
    pbVar2[0xa1] = 0;
    pbVar2[0xa2] = 0;
    pbVar2[0xa3] = 0;
    pbVar2[0xa4] = 0;
    pbVar2[0xa5] = 0;
  }
  pbVar2[0x8c] = 0;
  pbVar2[0x8d] = 0;
  pbVar2[0x8e] = 0;
  pbVar2[0x8f] = 0;
  pbVar2[0x84] = 0;
  pbVar2[0x85] = 0;
  pbVar2[0x86] = 0;
  pbVar2[0x87] = 0;
  if (*(undefined4 **)(pbVar2 + 0x44) != (undefined4 *)0x0) {
    FUN_6603c1b0(*(undefined4 **)(pbVar2 + 0x44));
    pbVar2[0x44] = 0;
    pbVar2[0x45] = 0;
    pbVar2[0x46] = 0;
    pbVar2[0x47] = 0;
  }
  return 0;
}


