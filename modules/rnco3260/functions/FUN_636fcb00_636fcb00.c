/* Module: rnco3260.dll
   Function: FUN_636fcb00
   Address: 636fcb00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fcb00(ushort *param_1,int param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  
  iVar5 = param_2;
  puVar6 = param_1;
  param_1 = (ushort *)(param_2 >> 1);
  if (param_2 == 0) {
    return;
  }
  do {
    uVar4 = (uint)*param_3;
    bVar1 = *(byte *)(&DAT_637956a0 + uVar4);
    bVar2 = *(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1);
    bVar3 = *(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2);
    param_3 = param_3 + 1;
    do {
      *puVar6 = (bVar2 & 0xfc | (bVar1 & 0xf8) << 5) << 3 | (ushort)(bVar3 >> 3);
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        return;
      }
      param_1 = (ushort *)((int)param_1 - param_4);
    } while (-1 < (int)param_1);
    param_1 = (ushort *)((int)param_1 + param_2);
  } while( true );
}


