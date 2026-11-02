/* Module: rnco3260.dll
   Function: FUN_63705a10
   Address: 63705a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_63705a10(uint *param_1,int *param_2,uint *param_3,uint param_4,byte *param_5)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  puVar2 = param_3;
  piVar1 = (int *)param_4;
  param_1 = (uint *)param_2;
  while (((param_2 = piVar1, ((uint)puVar2 & 3) != 0 && (((uint)param_5 & 3) != 0)) &&
         (param_2 != (int *)0x0))) {
    uVar3 = (uint)*param_5;
    uVar3 = (uint)CONCAT21(CONCAT11(*(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 2),
                                    *(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 1)),
                           *(undefined1 *)(&DAT_637956a0 + uVar3));
    param_5 = param_5 + 1;
    *puVar2 = uVar3;
    *param_1 = ((*puVar4 ^ uVar3) >> 1 & 0x7f7f7f) + (*puVar4 & uVar3);
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
    piVar1 = (int *)((int)param_2 - 1);
  }
  if (3 < (int)param_2) {
    param_3 = (uint *)((uint)param_2 >> 2);
    do {
      uVar3 = (uint)*param_5;
      uVar3 = (uint)CONCAT21(CONCAT11(*(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 2),
                                      *(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 1)),
                             *(undefined1 *)(&DAT_637956a0 + uVar3));
      *puVar2 = uVar3;
      *param_1 = ((*puVar4 ^ uVar3) >> 1 & 0x7f7f7f) + (*puVar4 & uVar3);
      uVar3 = (uint)param_5[1];
      uVar3 = (uint)CONCAT21(CONCAT11(*(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 2),
                                      *(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 1)),
                             *(undefined1 *)(&DAT_637956a0 + uVar3));
      puVar2[1] = uVar3;
      param_1[1] = ((puVar4[1] ^ uVar3) >> 1 & 0x7f7f7f) + (puVar4[1] & uVar3);
      uVar3 = (uint)param_5[2];
      uVar3 = (uint)CONCAT21(CONCAT11(*(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 2),
                                      *(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 1)),
                             *(undefined1 *)(&DAT_637956a0 + uVar3));
      puVar2[2] = uVar3;
      param_1[2] = ((puVar4[2] ^ uVar3) >> 1 & 0x7f7f7f) + (puVar4[2] & uVar3);
      uVar3 = (uint)param_5[3];
      uVar3 = (uint)CONCAT21(CONCAT11(*(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 2),
                                      *(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 1)),
                             *(undefined1 *)(&DAT_637956a0 + uVar3));
      puVar2[3] = uVar3;
      param_5 = param_5 + 4;
      param_1[3] = ((puVar4[3] ^ uVar3) >> 1 & 0x7f7f7f) + (puVar4[3] & uVar3);
      param_1 = param_1 + 4;
      puVar4 = puVar4 + 4;
      puVar2 = puVar2 + 4;
      param_2 = param_2 + -1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  for (; param_2 != (int *)0x0; param_2 = (int *)((int)param_2 - 1)) {
    uVar3 = (uint)*param_5;
    uVar3 = (uint)CONCAT21(CONCAT11(*(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 2),
                                    *(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 1)),
                           *(undefined1 *)(&DAT_637956a0 + uVar3));
    param_5 = param_5 + 1;
    *puVar2 = uVar3;
    *param_1 = ((*puVar4 ^ uVar3) >> 1 & 0x7f7f7f) + (*puVar4 & uVar3);
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}


