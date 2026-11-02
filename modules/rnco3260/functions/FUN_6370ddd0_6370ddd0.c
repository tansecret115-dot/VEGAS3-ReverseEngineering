/* Module: rnco3260.dll
   Function: FUN_6370ddd0
   Address: 6370ddd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370ddd0(ushort *param_1,byte *param_2,ushort *param_3,int param_4,byte *param_5,int param_6)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  byte *pbVar6;
  
  puVar5 = param_3;
  pbVar6 = param_2;
  param_2 = param_5;
  param_3 = (ushort *)param_4;
  puVar4 = param_1;
  param_1 = (ushort *)(param_4 >> 1);
  if (param_4 == 0) {
    return;
  }
  do {
    uVar3 = (uint)*param_2;
    uVar3 = (*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) & 0xfc |
            (*(byte *)(&DAT_637956a0 + uVar3) & 0xf8) << 5) << 3 |
            (uint)(*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) >> 3);
    uVar1 = *puVar4;
    param_2 = param_2 + 1;
    uVar2 = (ushort)uVar3;
    do {
      *puVar5 = uVar2;
      *(ushort *)pbVar6 = ((ushort)((uVar1 ^ uVar3) >> 1) & 0x7bef) + (uVar1 & uVar2);
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      pbVar6 = pbVar6 + 2;
      param_3 = (ushort *)((int)param_3 + -1);
      if (param_3 == (ushort *)0x0) {
        return;
      }
      param_1 = (ushort *)((int)param_1 - param_6);
    } while (-1 < (int)param_1);
    param_1 = (ushort *)((int)param_1 + param_4);
  } while( true );
}


