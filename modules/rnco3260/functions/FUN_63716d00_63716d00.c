/* Module: rnco3260.dll
   Function: FUN_63716d00
   Address: 63716d00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63716d00(byte *param_1,undefined1 *param_2,byte *param_3,int param_4,byte *param_5,int param_6)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar6 = param_3;
  param_3 = (byte *)param_4;
  pbVar4 = param_5;
  param_5 = (byte *)(param_4 >> 1);
  if (param_4 == 0) {
    return;
  }
  do {
    bVar1 = *pbVar4;
    uVar3 = (uint)bVar1;
    pbVar4 = pbVar4 + 1;
    uVar5 = (uint)*param_1;
    uVar2 = (&DAT_63795aa0)
            [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) +
                   (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0x1e0 |
                  (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2)) >> 4) >> 1 |
             ((uint)*(byte *)(&DAT_637956a0 + uVar3) + (uint)*(byte *)(&DAT_637956a0 + uVar5) &
             0x1e0) << 3];
    do {
      *pbVar6 = bVar1;
      param_1 = param_1 + 1;
      pbVar6 = pbVar6 + 1;
      *param_2 = uVar2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      if (param_3 == (byte *)0x0) {
        return;
      }
      param_5 = param_5 + -param_6;
    } while (-1 < (int)param_5);
    param_5 = param_5 + param_4;
  } while( true );
}


