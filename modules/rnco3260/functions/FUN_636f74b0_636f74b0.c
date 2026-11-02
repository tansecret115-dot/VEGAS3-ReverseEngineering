/* Module: rnco3260.dll
   Function: FUN_636f74b0
   Address: 636f74b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f74b0(uint *param_1,uint param_2,byte *param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  
  puVar2 = param_1;
  for (; ((((uint)puVar2 & 3) != 0 && (((uint)param_3 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    uVar4 = (uint)*param_3;
    param_3 = param_3 + 1;
    *puVar2 = (uint)CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar4),
                                      *(undefined1 *)((int)&DAT_637956a0 + uVar4 * 4 + 1)),
                             *(undefined1 *)((int)&DAT_637956a0 + uVar4 * 4 + 2));
    puVar2 = puVar2 + 1;
  }
  if (3 < (int)param_2) {
    param_1 = (uint *)(param_2 >> 2);
    puVar1 = puVar2;
    pbVar3 = param_3;
    do {
      uVar4 = (uint)*pbVar3;
      param_3 = pbVar3 + 4;
      puVar2 = puVar1 + 4;
      param_2 = param_2 - 4;
      *puVar1 = (uint)CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar4),
                                        *(undefined1 *)((int)&DAT_637956a0 + uVar4 * 4 + 1)),
                               *(undefined1 *)((int)&DAT_637956a0 + uVar4 * 4 + 2));
      uVar4 = (uint)pbVar3[1];
      puVar1[1] = (uint)CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar4),
                                          *(undefined1 *)((int)&DAT_637956a0 + uVar4 * 4 + 1)),
                                 *(undefined1 *)((int)&DAT_637956a0 + uVar4 * 4 + 2));
      uVar4 = (uint)pbVar3[2];
      puVar1[2] = (uint)CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar4),
                                          *(undefined1 *)((int)&DAT_637956a0 + uVar4 * 4 + 1)),
                                 *(undefined1 *)((int)&DAT_637956a0 + uVar4 * 4 + 2));
      uVar4 = (uint)pbVar3[3];
      puVar1[3] = (uint)CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar4),
                                          *(undefined1 *)((int)&DAT_637956a0 + uVar4 * 4 + 1)),
                                 *(undefined1 *)((int)&DAT_637956a0 + uVar4 * 4 + 2));
      param_1 = (uint *)((int)param_1 + -1);
      puVar1 = puVar2;
      pbVar3 = param_3;
    } while (param_1 != (uint *)0x0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar4 = (uint)*param_3;
    param_3 = param_3 + 1;
    *puVar2 = (uint)CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar4),
                                      *(undefined1 *)((int)&DAT_637956a0 + uVar4 * 4 + 1)),
                             *(undefined1 *)((int)&DAT_637956a0 + uVar4 * 4 + 2));
    puVar2 = puVar2 + 1;
  }
  return;
}


