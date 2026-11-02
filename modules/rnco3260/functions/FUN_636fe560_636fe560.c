/* Module: rnco3260.dll
   Function: FUN_636fe560
   Address: 636fe560
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fe560(ushort *param_1,int param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  
  puVar6 = param_1;
  param_1 = (ushort *)param_3;
  iVar5 = param_2 >> 1;
  iVar7 = param_2;
  if (param_2 == 0) {
    return;
  }
  do {
    uVar4 = (uint)(byte)*param_1;
    bVar1 = *(byte *)(&DAT_637956a0 + uVar4);
    bVar2 = *(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1);
    bVar3 = *(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2);
    param_1 = (ushort *)((int)param_1 + 1);
    do {
      *puVar6 = (bVar2 & 0xf8 | (bVar1 & 0xf8) << 5) << 2 | (ushort)(bVar3 >> 3);
      puVar6 = puVar6 + 1;
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
        return;
      }
      iVar5 = iVar5 - param_4;
    } while (-1 < iVar5);
    iVar5 = iVar5 + param_2;
  } while( true );
}


