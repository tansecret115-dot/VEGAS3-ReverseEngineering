/* Module: rnco3260.dll
   Function: FUN_6370c760
   Address: 6370c760
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370c760(ushort *param_1,short *param_2,ushort *param_3,int param_4,byte *param_5,int param_6)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  short *psVar4;
  ushort *local_8;
  
  psVar4 = param_2;
  local_8 = param_1;
  param_1 = (ushort *)(param_4 >> 1);
  param_2 = (short *)param_4;
  if (param_4 == 0) {
    return;
  }
  do {
    uVar3 = (param_5[1] & 0xfc | (param_5[2] & 0xf8) << 5) << 3 | (uint)(*param_5 >> 3);
    param_5 = param_5 + 3;
    uVar1 = *local_8;
    uVar2 = (ushort)uVar3;
    do {
      *param_3 = uVar2;
      local_8 = local_8 + 1;
      *psVar4 = ((ushort)((uVar1 ^ uVar3) >> 1) & 0x7bef) + (uVar1 & uVar2);
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


