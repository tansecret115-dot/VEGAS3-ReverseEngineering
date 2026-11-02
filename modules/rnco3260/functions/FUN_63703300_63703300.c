/* Module: rnco3260.dll
   Function: FUN_63703300
   Address: 63703300
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63703300(uint *param_1,byte *param_2,uint *param_3,int param_4,byte *param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  byte *pbVar5;
  
  puVar4 = param_3;
  pbVar5 = param_2;
  param_2 = param_5;
  param_3 = (uint *)param_4;
  puVar3 = param_1;
  param_1 = (uint *)(param_4 >> 1);
  if (param_4 == 0) {
    return;
  }
  do {
    uVar1 = (uint)*param_2;
    uVar2 = (uint)CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar1),
                                    *(undefined1 *)((int)&DAT_637956a0 + uVar1 * 4 + 1)),
                           *(undefined1 *)((int)&DAT_637956a0 + uVar1 * 4 + 2));
    uVar1 = *puVar3;
    param_2 = param_2 + 1;
    do {
      *puVar4 = uVar2;
      *(uint *)pbVar5 = ((uVar1 ^ uVar2) >> 1 & 0x7f7f7f) + (uVar1 & uVar2);
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      pbVar5 = pbVar5 + 4;
      param_3 = (uint *)((int)param_3 + -1);
      if (param_3 == (uint *)0x0) {
        return;
      }
      param_1 = (uint *)((int)param_1 - param_6);
    } while (-1 < (int)param_1);
    param_1 = (uint *)((int)param_1 + param_4);
  } while( true );
}


