/* Module: rnco3260.dll
   Function: FUN_63714c20
   Address: 63714c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63714c20(byte *param_1,byte *param_2,byte *param_3,int param_4,ushort *param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *local_8;
  
  local_8 = param_2;
  param_2 = param_3;
  param_3 = (byte *)param_4;
  pbVar6 = param_1;
  param_1 = (byte *)(param_4 >> 1);
  if (param_4 == 0) {
    return;
  }
  do {
    uVar3 = *param_5;
    param_5 = param_5 + 1;
    bVar1 = (&DAT_63795aa0)[(uVar3 & 0x1e | uVar3 >> 2 & 0x1e0) >> 1 | ((uVar3 & 0xf000) >> 8) << 4]
    ;
    uVar4 = (uint)bVar1;
    uVar5 = (uint)*pbVar6;
    bVar2 = (&DAT_63795aa0)
            [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) +
                   (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0x1e0 |
                  (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2)) >> 4) >> 1 |
             ((uint)*(byte *)(&DAT_637956a0 + uVar5) + (uint)*(byte *)(&DAT_637956a0 + uVar4) &
             0x1e0) << 3];
    do {
      pbVar6 = pbVar6 + 1;
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


