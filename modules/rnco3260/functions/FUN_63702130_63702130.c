/* Module: rnco3260.dll
   Function: FUN_63702130
   Address: 63702130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_63702130(uint *param_1,int *param_2,uint *param_3,uint param_4,ushort *param_5)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar5 = param_1;
  puVar4 = param_3;
  piVar1 = (int *)param_4;
  puVar3 = (uint *)param_2;
  while (((param_2 = piVar1, ((uint)puVar4 & 3) != 0 && (((uint)param_5 & 3) != 0)) &&
         (param_2 != (int *)0x0))) {
    uVar2 = (uint)*param_5;
    param_5 = param_5 + 1;
    uVar2 = (((uVar2 & 0xf800) << 3 | uVar2 & 0x7e0) << 2 | uVar2 & 0x1f) << 3;
    *puVar4 = uVar2;
    *puVar3 = ((*puVar5 ^ uVar2) >> 1 & 0x7f7f7f) + (*puVar5 & uVar2);
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    piVar1 = (int *)((int)param_2 - 1);
  }
  if (3 < (int)param_2) {
    param_3 = (uint *)((uint)param_2 >> 2);
    param_1 = puVar3;
    do {
      uVar2 = (uint)*param_5;
      uVar2 = (((uVar2 & 0xf800) << 3 | uVar2 & 0x7e0) << 2 | uVar2 & 0x1f) << 3;
      *puVar4 = uVar2;
      *param_1 = ((*puVar5 ^ uVar2) >> 1 & 0x7f7f7f) + (*puVar5 & uVar2);
      uVar2 = (uint)param_5[1];
      uVar2 = (((uVar2 & 0xf800) << 3 | uVar2 & 0x7e0) << 2 | uVar2 & 0x1f) << 3;
      puVar4[1] = uVar2;
      param_1[1] = ((puVar5[1] ^ uVar2) >> 1 & 0x7f7f7f) + (puVar5[1] & uVar2);
      uVar2 = (uint)param_5[2];
      uVar2 = (((uVar2 & 0xf800) << 3 | uVar2 & 0x7e0) << 2 | uVar2 & 0x1f) << 3;
      puVar4[2] = uVar2;
      param_1[2] = ((puVar5[2] ^ uVar2) >> 1 & 0x7f7f7f) + (puVar5[2] & uVar2);
      uVar2 = (uint)param_5[3];
      uVar2 = (((uVar2 & 0xf800) << 3 | uVar2 & 0x7e0) << 2 | uVar2 & 0x1f) << 3;
      puVar4[3] = uVar2;
      param_5 = param_5 + 4;
      puVar3 = param_1 + 4;
      param_1[3] = ((puVar5[3] ^ uVar2) >> 1 & 0x7f7f7f) + (puVar5[3] & uVar2);
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
      param_2 = param_2 + -1;
      param_3 = (uint *)((int)param_3 + -1);
      param_1 = puVar3;
    } while (param_3 != (uint *)0x0);
  }
  for (; param_2 != (int *)0x0; param_2 = (int *)((int)param_2 - 1)) {
    uVar2 = (uint)*param_5;
    param_5 = param_5 + 1;
    uVar2 = (((uVar2 & 0xf800) << 3 | uVar2 & 0x7e0) << 2 | uVar2 & 0x1f) << 3;
    *puVar4 = uVar2;
    *puVar3 = ((*puVar5 ^ uVar2) >> 1 & 0x7f7f7f) + (*puVar5 & uVar2);
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


