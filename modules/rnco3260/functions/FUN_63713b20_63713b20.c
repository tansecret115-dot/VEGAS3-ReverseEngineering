/* Module: rnco3260.dll
   Function: FUN_63713b20
   Address: 63713b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63713b20(byte *param_1,undefined1 *param_2,byte *param_3,int param_4,byte *param_5,int param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 *local_8;
  
  pbVar7 = param_5;
  local_8 = param_2;
  param_2 = (undefined1 *)(param_4 >> 1);
  param_5 = (byte *)param_4;
  if (param_4 == 0) {
    return;
  }
  do {
    pbVar1 = pbVar7 + 1;
    bVar3 = *pbVar7;
    pbVar2 = pbVar7 + 2;
    pbVar7 = pbVar7 + 3;
    bVar3 = (&DAT_63795aa0)[(uint)(bVar3 >> 4) | *pbVar1 & 0xf0 | (*pbVar2 & 0xf0) << 4];
    uVar5 = (uint)bVar3;
    uVar6 = (uint)*param_1;
    uVar4 = (&DAT_63795aa0)
            [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 2)) >> 4 |
                  (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) +
                  (uint)*(byte *)((int)&DAT_637956a0 + uVar6 * 4 + 1) & 0x1e0) >> 1 |
             ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)*(byte *)(&DAT_637956a0 + uVar6) &
             0x1e0) << 3];
    do {
      *param_3 = bVar3;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      *local_8 = uVar4;
      local_8 = local_8 + 1;
      param_5 = param_5 + -1;
      if (param_5 == (byte *)0x0) {
        return;
      }
      param_2 = param_2 + -param_6;
    } while (-1 < (int)param_2);
    param_2 = param_2 + param_4;
  } while( true );
}


