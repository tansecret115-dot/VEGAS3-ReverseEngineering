/* Module: rnco3260.dll
   Function: FUN_636fad80
   Address: 636fad80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fad80(undefined1 *param_1,uint param_2,byte *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  pbVar4 = param_3;
  for (; ((((uint)param_1 & 3) != 0 && (((uint)pbVar4 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    uVar6 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
    uVar1 = *(undefined1 *)(&DAT_637956a0 + uVar6);
    uVar2 = *(undefined1 *)((int)&DAT_637956a0 + uVar6 * 4 + 2);
    param_1[1] = *(undefined1 *)((int)&DAT_637956a0 + uVar6 * 4 + 1);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    param_1 = param_1 + 3;
  }
  if (3 < (int)param_2) {
    param_3 = (byte *)(param_2 >> 2);
    puVar3 = param_1;
    pbVar5 = pbVar4;
    do {
      param_1 = puVar3 + 0xc;
      uVar6 = (uint)*pbVar5;
      pbVar4 = pbVar5 + 4;
      param_2 = param_2 - 4;
      uVar1 = *(undefined1 *)(&DAT_637956a0 + uVar6);
      uVar2 = *(undefined1 *)((int)&DAT_637956a0 + uVar6 * 4 + 2);
      puVar3[1] = *(undefined1 *)((int)&DAT_637956a0 + uVar6 * 4 + 1);
      puVar3[2] = uVar1;
      *puVar3 = uVar2;
      uVar6 = (uint)pbVar5[1];
      uVar1 = *(undefined1 *)(&DAT_637956a0 + uVar6);
      uVar2 = *(undefined1 *)((int)&DAT_637956a0 + uVar6 * 4 + 2);
      puVar3[4] = *(undefined1 *)((int)&DAT_637956a0 + uVar6 * 4 + 1);
      puVar3[5] = uVar1;
      puVar3[3] = uVar2;
      uVar6 = (uint)pbVar5[2];
      uVar1 = *(undefined1 *)(&DAT_637956a0 + uVar6);
      uVar2 = *(undefined1 *)((int)&DAT_637956a0 + uVar6 * 4 + 2);
      puVar3[7] = *(undefined1 *)((int)&DAT_637956a0 + uVar6 * 4 + 1);
      puVar3[8] = uVar1;
      puVar3[6] = uVar2;
      uVar6 = (uint)pbVar5[3];
      uVar1 = *(undefined1 *)(&DAT_637956a0 + uVar6);
      uVar2 = *(undefined1 *)((int)&DAT_637956a0 + uVar6 * 4 + 2);
      puVar3[10] = *(undefined1 *)((int)&DAT_637956a0 + uVar6 * 4 + 1);
      puVar3[0xb] = uVar1;
      puVar3[9] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = param_1;
      pbVar5 = pbVar4;
    } while (param_3 != (byte *)0x0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar6 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
    uVar1 = *(undefined1 *)(&DAT_637956a0 + uVar6);
    uVar2 = *(undefined1 *)((int)&DAT_637956a0 + uVar6 * 4 + 2);
    param_1[1] = *(undefined1 *)((int)&DAT_637956a0 + uVar6 * 4 + 1);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    param_1 = param_1 + 3;
  }
  return;
}


