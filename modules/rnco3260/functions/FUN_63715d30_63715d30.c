/* Module: rnco3260.dll
   Function: FUN_63715d30
   Address: 63715d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63715d30(byte *param_1,byte *param_2,byte *param_3,int param_4,ushort *param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *local_8;
  
  local_8 = param_2;
  param_2 = param_3;
  param_3 = (byte *)param_4;
  pbVar5 = param_1;
  param_1 = (byte *)(param_4 >> 1);
  if (param_4 == 0) {
    return;
  }
  do {
    uVar3 = (uint)*param_5;
    param_5 = param_5 + 1;
    bVar1 = (&DAT_63795aa0)
            [((uVar3 & 0x3c0) >> 1 | uVar3 & 0x1e) >> 1 | ((uVar3 & 0x7800) >> 7) << 4];
    uVar3 = (uint)bVar1;
    uVar4 = (uint)*pbVar5;
    bVar2 = (&DAT_63795aa0)
            [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) +
                   (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) & 0x1e0 |
                  (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2)) >> 4) >> 1 |
             ((uint)*(byte *)(&DAT_637956a0 + uVar4) + (uint)*(byte *)(&DAT_637956a0 + uVar3) &
             0x1e0) << 3];
    do {
      pbVar5 = pbVar5 + 1;
      *param_2 = bVar1;
      param_2 = param_2 + 1;
      *local_8 = bVar2;
      local_8 = local_8 + 1;
      param_3 = param_3 + -1;
      if (param_3 == (byte *)0x0) {
        return;
      }
      param_1 = param_1 + -param_6;
    } while (-1 < (int)param_1);
    param_1 = param_1 + param_4;
  } while( true );
}


