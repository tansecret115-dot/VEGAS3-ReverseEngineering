/* Module: rnco3260.dll
   Function: FUN_636fcf20
   Address: 636fcf20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fcf20(undefined2 *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  for (; ((((uint)puVar3 & 3) != 0 && (((uint)param_3 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    *puVar3 = (short)(((uVar1 & 0xf800 | uVar1 >> 3 & 0x1f0000) >> 3 | uVar1 & 0xf8) >> 3);
    puVar3 = puVar3 + 1;
  }
  if (3 < (int)param_2) {
    param_1 = (undefined2 *)(param_2 >> 2);
    puVar2 = puVar3;
    puVar4 = param_3;
    do {
      uVar1 = *puVar4;
      param_3 = puVar4 + 4;
      puVar3 = puVar2 + 4;
      *puVar2 = (short)(((uVar1 & 0xf800 | uVar1 >> 3 & 0x1f0000) >> 3 | uVar1 & 0xf8) >> 3);
      uVar1 = puVar4[1];
      param_2 = param_2 - 4;
      puVar2[1] = (short)(((uVar1 & 0xf800 | uVar1 >> 3 & 0x1f0000) >> 3 | uVar1 & 0xf8) >> 3);
      uVar1 = puVar4[2];
      puVar2[2] = (short)(((uVar1 & 0xf800 | uVar1 >> 3 & 0x1f0000) >> 3 | uVar1 & 0xf8) >> 3);
      uVar1 = puVar4[3];
      puVar2[3] = (short)(((uVar1 & 0xf800 | uVar1 >> 3 & 0x1f0000) >> 3 | uVar1 & 0xf8) >> 3);
      param_1 = (undefined2 *)((int)param_1 + -1);
      puVar2 = puVar3;
      puVar4 = param_3;
    } while (param_1 != (undefined2 *)0x0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    *puVar3 = (short)(((uVar1 & 0xf800 | uVar1 >> 3 & 0x1f0000) >> 3 | uVar1 & 0xf8) >> 3);
    puVar3 = puVar3 + 1;
  }
  return;
}


