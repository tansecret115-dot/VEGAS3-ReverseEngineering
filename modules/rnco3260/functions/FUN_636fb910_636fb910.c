/* Module: rnco3260.dll
   Function: FUN_636fb910
   Address: 636fb910
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fb910(ushort *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  
  puVar2 = param_1;
  for (; ((((uint)puVar2 & 3) != 0 && (((uint)param_3 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    *puVar2 = (ushort)((uVar1 & 0xfc00 | uVar1 >> 0xe & 0x3e0) >> 5) | (ushort)((uVar1 & 0xf8) << 8)
    ;
    puVar2 = puVar2 + 1;
  }
  if (3 < (int)param_2) {
    param_1 = (ushort *)(param_2 >> 2);
    puVar3 = param_3;
    do {
      uVar1 = *puVar3;
      param_3 = puVar3 + 4;
      param_2 = param_2 - 4;
      *puVar2 = (ushort)((uVar1 & 0xfc00 | uVar1 >> 0xe & 0x3e0) >> 5) |
                (ushort)((uVar1 & 0xf8) << 8);
      uVar1 = puVar3[1];
      puVar2[1] = (ushort)((uVar1 & 0xfc00 | uVar1 >> 0xe & 0x3e0) >> 5) |
                  (ushort)((uVar1 & 0xf8) << 8);
      uVar1 = puVar3[2];
      puVar2[2] = (ushort)((uVar1 & 0xfc00 | uVar1 >> 0xe & 0x3e0) >> 5) |
                  (ushort)((uVar1 & 0xf8) << 8);
      uVar1 = puVar3[3];
      puVar2[3] = (ushort)((uVar1 & 0xfc00 | uVar1 >> 0xe & 0x3e0) >> 5) |
                  (ushort)((uVar1 & 0xf8) << 8);
      puVar2 = puVar2 + 4;
      param_1 = (ushort *)((int)param_1 + -1);
      puVar3 = param_3;
    } while (param_1 != (ushort *)0x0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    *puVar2 = (ushort)((uVar1 & 0xfc00 | uVar1 >> 0xe & 0x3e0) >> 5) | (ushort)((uVar1 & 0xf8) << 8)
    ;
    puVar2 = puVar2 + 1;
  }
  return;
}


