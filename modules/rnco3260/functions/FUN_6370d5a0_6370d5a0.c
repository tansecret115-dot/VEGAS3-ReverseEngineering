/* Module: rnco3260.dll
   Function: FUN_6370d5a0
   Address: 6370d5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370d5a0(ushort *param_1,short *param_2,ushort *param_3,int param_4,ushort *param_5,int param_6)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  short *psVar4;
  ushort *puVar5;
  
  psVar4 = param_2;
  param_2 = (short *)param_4;
  puVar5 = param_1;
  param_1 = (ushort *)(param_4 >> 1);
  if (param_4 == 0) {
    return;
  }
  do {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    uVar2 = *puVar5;
    uVar3 = (uVar1 & 0x7fe0) << 1 | uVar1 & 0x1f;
    uVar1 = (ushort)uVar3;
    do {
      *param_3 = uVar1;
      *psVar4 = ((ushort)((uVar2 ^ uVar3) >> 1) & 0x7bef) + (uVar2 & uVar1);
      puVar5 = puVar5 + 1;
      param_3 = param_3 + 1;
      psVar4 = psVar4 + 1;
      param_2 = (short *)((int)param_2 + -1);
      if (param_2 == (short *)0x0) {
        return;
      }
      param_1 = (ushort *)((int)param_1 - param_6);
    } while (-1 < (int)param_1);
    param_1 = (ushort *)((int)param_1 + param_4);
  } while( true );
}


