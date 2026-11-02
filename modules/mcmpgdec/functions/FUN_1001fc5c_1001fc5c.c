/* Module: mcmpgdec.dll
   Function: FUN_1001fc5c
   Address: 1001fc5c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1001fc5c(uint *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int local_10;
  
  iVar1 = param_3 - param_5 >> 1;
  iVar2 = 0;
  pbVar5 = (byte *)*param_4;
  pbVar6 = (byte *)param_4[2];
  pbVar7 = (byte *)param_4[1];
  if (0 < param_6 >> 1) {
    iVar3 = param_5 >> 1;
    do {
      local_10 = 0;
      iVar2 = iVar2 + 1;
      if (0 < iVar3 + -7) {
        do {
          uVar4 = (uint)*pbVar6 << 0x10 | (uint)*pbVar7;
          *param_1 = (uint)*pbVar5 << 8 | uVar4 | (uint)pbVar5[1] << 0x18;
          *(uint *)(param_2 + (int)param_1) =
               uVar4 | (uint)pbVar5[param_3] << 8 | (uint)pbVar5[param_3 + 1] << 0x18;
          uVar4 = (uint)pbVar6[1] << 0x10 | (uint)pbVar7[1];
          param_1[1] = (uint)pbVar5[2] << 8 | uVar4 | (uint)pbVar5[3] << 0x18;
          *(uint *)(param_2 + 4 + (int)param_1) =
               uVar4 | (uint)pbVar5[param_3 + 2] << 8 | (uint)pbVar5[param_3 + 3] << 0x18;
          uVar4 = (uint)pbVar6[2] << 0x10 | (uint)pbVar7[2];
          param_1[2] = (uint)pbVar5[4] << 8 | uVar4 | (uint)pbVar5[5] << 0x18;
          *(uint *)(param_2 + 8 + (int)param_1) =
               uVar4 | (uint)pbVar5[param_3 + 4] << 8 | (uint)pbVar5[param_3 + 5] << 0x18;
          uVar4 = (uint)pbVar6[3] << 0x10 | (uint)pbVar7[3];
          param_1[3] = (uint)pbVar5[6] << 8 | uVar4 | (uint)pbVar5[7] << 0x18;
          *(uint *)(param_2 + 0xc + (int)param_1) =
               uVar4 | (uint)pbVar5[param_3 + 6] << 8 | (uint)pbVar5[param_3 + 7] << 0x18;
          uVar4 = (uint)pbVar6[4] << 0x10 | (uint)pbVar7[4];
          param_1[4] = (uint)pbVar5[8] << 8 | uVar4 | (uint)pbVar5[9] << 0x18;
          *(uint *)(param_2 + 0x10 + (int)param_1) =
               uVar4 | (uint)pbVar5[param_3 + 8] << 8 | (uint)pbVar5[param_3 + 9] << 0x18;
          uVar4 = (uint)pbVar6[5] << 0x10 | (uint)pbVar7[5];
          param_1[5] = (uint)pbVar5[10] << 8 | uVar4 | (uint)pbVar5[0xb] << 0x18;
          *(uint *)(param_2 + 0x14 + (int)param_1) =
               uVar4 | (uint)pbVar5[param_3 + 10] << 8 | (uint)pbVar5[param_3 + 0xb] << 0x18;
          uVar4 = (uint)pbVar6[6] << 0x10 | (uint)pbVar7[6];
          param_1[6] = (uint)pbVar5[0xc] << 8 | uVar4 | (uint)pbVar5[0xd] << 0x18;
          *(uint *)(param_2 + 0x18 + (int)param_1) =
               uVar4 | (uint)pbVar5[param_3 + 0xc] << 8 | (uint)pbVar5[param_3 + 0xd] << 0x18;
          uVar4 = (uint)pbVar6[7] << 0x10 | (uint)pbVar7[7];
          param_1[7] = (uint)pbVar5[0xe] << 8 | uVar4 | (uint)pbVar5[0xf] << 0x18;
          pbVar6 = pbVar6 + 8;
          pbVar7 = pbVar7 + 8;
          *(uint *)(param_2 + 0x1c + (int)param_1) =
               uVar4 | (uint)pbVar5[param_3 + 0xe] << 8 | (uint)pbVar5[param_3 + 0xf] << 0x18;
          pbVar5 = pbVar5 + 0x10;
          param_1 = param_1 + 8;
          local_10 = local_10 + 8;
        } while (local_10 < iVar3 + -7);
      }
      if (local_10 < iVar3) {
        local_10 = iVar3 - local_10;
        do {
          uVar4 = (uint)*pbVar6 << 0x10 | (uint)*pbVar7;
          *param_1 = (uint)*pbVar5 << 8 | uVar4 | (uint)pbVar5[1] << 0x18;
          pbVar6 = pbVar6 + 1;
          pbVar7 = pbVar7 + 1;
          *(uint *)(param_2 + (int)param_1) =
               uVar4 | (uint)pbVar5[param_3] << 8 | (uint)pbVar5[param_3 + 1] << 0x18;
          pbVar5 = pbVar5 + 2;
          param_1 = param_1 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      pbVar5 = pbVar5 + (param_3 * 2 - param_5);
      pbVar6 = pbVar6 + iVar1;
      pbVar7 = pbVar7 + iVar1;
      param_1 = (uint *)((int)param_1 + (param_2 - param_5) * 2);
    } while (iVar2 < param_6 >> 1);
  }
  return;
}


