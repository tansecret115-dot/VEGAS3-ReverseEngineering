/* Module: rnco3260.dll
   Function: FUN_6370b6c0
   Address: 6370b6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370b6c0(ushort *param_1,uint *param_2,ushort *param_3,int param_4,uint *param_5,int param_6)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  puVar6 = param_3;
  puVar4 = param_2;
  param_2 = param_5;
  param_3 = (ushort *)param_4;
  puVar5 = param_1;
  param_1 = (ushort *)(param_4 >> 1);
  if (param_4 == 0) {
    return;
  }
  do {
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    uVar1 = *puVar5;
    uVar3 = ((uVar3 & 0xfc00 | uVar3 >> 3 & 0x1f0000) >> 2 | uVar3 & 0xf8) >> 3;
    uVar2 = (ushort)uVar3;
    do {
      *puVar6 = uVar2;
      *(ushort *)puVar4 = ((ushort)((uVar1 ^ uVar3) >> 1) & 0x7bef) + (uVar1 & uVar2);
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      puVar4 = (uint *)((int)puVar4 + 2);
      param_3 = (ushort *)((int)param_3 + -1);
      if (param_3 == (ushort *)0x0) {
        return;
      }
      param_1 = (ushort *)((int)param_1 - param_6);
    } while (-1 < (int)param_1);
    param_1 = (ushort *)((int)param_1 + param_4);
  } while( true );
}


