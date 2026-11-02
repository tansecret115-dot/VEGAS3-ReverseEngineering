/* Module: rmto3260.dll
   Function: FUN_662dac30
   Address: 662dac30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662dac30(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint local_48;
  uint local_44;
  short local_40;
  undefined2 local_3e;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20;
  undefined3 uStack_1f;
  undefined1 uStack_1c;
  byte local_1b;
  undefined3 uStack_1a;
  undefined1 uStack_17;
  uint local_16;
  byte *local_12;
  byte *local_c;
  int local_8;
  
  local_8 = 0;
  if ((*(int *)(param_1 + 0x18) == 2) && (*(int *)(param_1 + 0x9c) == 0)) {
    local_8 = FUN_662db380(param_1);
  }
  iVar5 = local_8;
  if (-1 < local_8) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      local_8 = FUN_662dbf70(param_1);
    }
    iVar5 = local_8;
    if (-1 < local_8) {
      if ((*(int *)(param_1 + 0x80) != 0) &&
         (*(short *)((int)*(void **)(param_1 + 0x10) + 0x6e) == 1)) {
        local_c = (byte *)0x0;
        pbVar2 = (byte *)FUN_662e3080(*(void **)(param_1 + 0x10),0,&local_c);
        if (pbVar2 != (byte *)0x0) {
          if (local_c != (byte *)0x0) {
            local_48 = (uint)*pbVar2 << 0x18 | (uint)pbVar2[1] << 0x10 | (uint)pbVar2[2] << 8 |
                       (uint)pbVar2[3];
            local_44 = (uint)pbVar2[4] << 0x18 | (uint)pbVar2[5] << 0x10 | (uint)pbVar2[6] << 8 |
                       (uint)pbVar2[7];
            local_40 = CONCAT11(pbVar2[8],pbVar2[9]);
            if (local_40 == 0) {
              local_3e = CONCAT11(pbVar2[10],pbVar2[0xb]);
              local_3c = (uint)pbVar2[0xc] << 0x18 | (uint)pbVar2[0xd] << 0x10 |
                         (uint)pbVar2[0xe] << 8 | (uint)pbVar2[0xf];
              local_38 = (uint)pbVar2[0x10] << 0x18 | (uint)pbVar2[0x11] << 0x10 |
                         (uint)pbVar2[0x12] << 8 | (uint)pbVar2[0x13];
              local_34 = (uint)pbVar2[0x14] << 0x18 | (uint)pbVar2[0x15] << 0x10 |
                         (uint)pbVar2[0x16] << 8 | (uint)pbVar2[0x17];
              local_30 = (uint)pbVar2[0x18] << 0x18 | (uint)pbVar2[0x19] << 0x10 |
                         (uint)pbVar2[0x1a] << 8 | (uint)pbVar2[0x1b];
              local_2c = (uint)pbVar2[0x1c] << 0x18 | (uint)pbVar2[0x1d] << 0x10 |
                         (uint)pbVar2[0x1e] << 8 | (uint)pbVar2[0x1f];
              local_24 = (uint)pbVar2[0x24] << 0x18 | (uint)pbVar2[0x25] << 0x10 |
                         (uint)pbVar2[0x26] << 8 | (uint)pbVar2[0x27];
              bVar1 = pbVar2[0x28];
              pbVar4 = pbVar2 + 0x29;
              _local_20 = CONCAT31(uStack_1f,bVar1);
              pbVar3 = pbVar4 + bVar1;
              if ((int)pbVar3 - (int)pbVar2 <= (int)local_c) {
                uStack_1f = SUB43(pbVar4,0);
                _local_20 = CONCAT31(uStack_1f,bVar1);
                uStack_1c = (undefined1)((uint)pbVar4 >> 0x18);
                bVar1 = *pbVar3;
                _local_1b = CONCAT31(uStack_1a,bVar1);
                pbVar3 = pbVar3 + 1;
                pbVar4 = pbVar3 + bVar1;
                if ((int)pbVar4 - (int)pbVar2 <= (int)local_c) {
                  uStack_1a = SUB43(pbVar3,0);
                  _local_1b = CONCAT31(uStack_1a,bVar1);
                  uStack_17 = (undefined1)((uint)pbVar3 >> 0x18);
                  local_16 = (uint)*pbVar4 << 0x18 | (uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8
                             | (uint)pbVar4[3];
                  if (pbVar4 + 4 + (local_16 - (int)pbVar2) <= local_c) {
                    local_12 = pbVar4 + 4;
                  }
                }
              }
            }
          }
          local_28 = *(undefined4 *)(param_1 + 0x80);
          FUN_662c9730(&local_48,pbVar2,(int *)&local_c);
          iVar5 = local_8;
        }
      }
      if (-1 < iVar5) {
        (**(code **)(**(int **)(param_1 + 0x10) + 0x24))();
      }
    }
  }
  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x10))(1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return iVar5;
}


