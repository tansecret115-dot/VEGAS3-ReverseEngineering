/* Module: rnco3260.dll
   Function: FUN_63700d80
   Address: 63700d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_63700d80(byte *param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint local_c;
  
  if (param_4 != 0) {
    uVar4 = (uint)*param_3;
    pbVar5 = param_3 + 1;
    param_4 = param_4 - 1;
    *param_1 = *param_3;
    pbVar7 = param_1 + 1;
    if (1 < (int)param_4) {
      param_3 = (byte *)(&DAT_637956a0 + uVar4);
      pbVar6 = (byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1);
      local_c = param_4 >> 1;
      pbVar8 = (byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2);
      do {
        bVar1 = *pbVar5;
        uVar3 = (uint)bVar1;
        *pbVar7 = (&DAT_63795aa0)
                  [(int)((uint)*pbVar6 + (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) & 0x1e0
                        | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) + (uint)*pbVar8)
                          >> 4) >> 1 |
                   ((uint)*param_3 + (uint)*(byte *)(&DAT_637956a0 + uVar3) & 0x1e0) << 3];
        pbVar7[1] = bVar1;
        bVar1 = pbVar5[1];
        uVar4 = (uint)bVar1;
        param_3 = (byte *)(&DAT_637956a0 + uVar4);
        pbVar6 = (byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1);
        pbVar8 = (byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2);
        param_4 = param_4 - 2;
        pbVar5 = pbVar5 + 2;
        pbVar7[2] = (&DAT_63795aa0)
                    [(int)((uint)*pbVar6 + (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) &
                           0x1e0 | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) +
                                        (uint)*pbVar8) >> 4) >> 1 |
                     ((uint)*param_3 + (uint)*(byte *)(&DAT_637956a0 + uVar3) & 0x1e0) << 3];
        pbVar7[3] = bVar1;
        pbVar7 = pbVar7 + 4;
        local_c = local_c - 1;
      } while (local_c != 0);
    }
    if (param_4 != 0) {
      bVar1 = *pbVar5;
      uVar3 = (uint)bVar1;
      bVar2 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar3) + (uint)*(byte *)(&DAT_637956a0 + uVar4) &
               0x1e0) << 3];
      pbVar7[1] = bVar1;
      *pbVar7 = bVar2;
      pbVar7[2] = bVar1;
      return;
    }
    *pbVar7 = (byte)uVar4;
  }
  return;
}


