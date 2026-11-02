/* Module: rnco3260.dll
   Function: FUN_636f8230
   Address: 636f8230
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f8230(uint *param_1,uint param_2,ushort *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  ushort *puVar5;
  
  puVar4 = param_1;
  for (; ((((uint)puVar4 & 3) != 0 && (((uint)param_3 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    uVar2 = (uint)*param_3;
    param_3 = param_3 + 1;
    *puVar4 = ((uVar2 & 0x1f) << 0xe | uVar2 & 0x7e0) << 5 | (uVar2 & 0xf800) >> 8;
    puVar4 = puVar4 + 1;
  }
  if (3 < (int)param_2) {
    param_1 = (uint *)(param_2 >> 2);
    puVar3 = puVar4;
    puVar5 = param_3;
    do {
      puVar4 = puVar3 + 4;
      uVar2 = (uint)*puVar5;
      param_3 = puVar5 + 4;
      param_2 = param_2 - 4;
      *puVar3 = ((uVar2 & 0x1f) << 0xe | uVar2 & 0x7e0) << 5 | (uVar2 & 0xf800) >> 8;
      uVar1 = puVar5[1];
      puVar3[1] = ((uVar1 & 0x1f) << 0xe | uVar1 & 0x7e0) << 5 | (uVar1 & 0xf800) >> 8;
      uVar1 = puVar5[2];
      puVar3[2] = ((uVar1 & 0x1f) << 0xe | uVar1 & 0x7e0) << 5 | (uVar1 & 0xf800) >> 8;
      uVar1 = puVar5[3];
      puVar3[3] = ((uVar1 & 0x1f) << 0xe | uVar1 & 0x7e0) << 5 | (uVar1 & 0xf800) >> 8;
      param_1 = (uint *)((int)param_1 + -1);
      puVar3 = puVar4;
      puVar5 = param_3;
    } while (param_1 != (uint *)0x0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar2 = (uint)*param_3;
    param_3 = param_3 + 1;
    *puVar4 = ((uVar2 & 0x1f) << 0xe | uVar2 & 0x7e0) << 5 | (uVar2 & 0xf800) >> 8;
    puVar4 = puVar4 + 1;
  }
  return;
}


