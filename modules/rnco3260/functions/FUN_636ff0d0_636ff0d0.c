/* Module: rnco3260.dll
   Function: FUN_636ff0d0
   Address: 636ff0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636ff0d0(undefined1 *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  for (; ((((uint)puVar3 & 3) != 0 && (((uint)param_3 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    *puVar3 = (&DAT_63795aa0)[(uVar1 & 0xf000 | uVar1 >> 0xc & 0xf00) >> 8 | (uVar1 & 0xf0) << 4];
    puVar3 = puVar3 + 1;
  }
  if (3 < (int)param_2) {
    param_1 = (undefined1 *)(param_2 >> 2);
    puVar2 = puVar3;
    puVar4 = param_3;
    do {
      uVar1 = *puVar4;
      param_3 = puVar4 + 4;
      puVar3 = puVar2 + 4;
      param_2 = param_2 - 4;
      *puVar2 = (&DAT_63795aa0)[(uVar1 & 0xf000 | uVar1 >> 0xc & 0xf00) >> 8 | (uVar1 & 0xf0) << 4];
      uVar1 = puVar4[1];
      puVar2[1] = (&DAT_63795aa0)
                  [(uVar1 & 0xf000 | uVar1 >> 0xc & 0xf00) >> 8 | (uVar1 & 0xf0) << 4];
      uVar1 = puVar4[2];
      puVar2[2] = (&DAT_63795aa0)
                  [(uVar1 & 0xf000 | uVar1 >> 0xc & 0xf00) >> 8 | (uVar1 & 0xf0) << 4];
      uVar1 = puVar4[3];
      puVar2[3] = (&DAT_63795aa0)
                  [(uVar1 & 0xf000 | uVar1 >> 0xc & 0xf00) >> 8 | (uVar1 & 0xf0) << 4];
      param_1 = param_1 + -1;
      puVar2 = puVar3;
      puVar4 = param_3;
    } while (param_1 != (undefined1 *)0x0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    *puVar3 = (&DAT_63795aa0)[(uVar1 & 0xf000 | uVar1 >> 0xc & 0xf00) >> 8 | (uVar1 & 0xf0) << 4];
    puVar3 = puVar3 + 1;
  }
  return;
}


