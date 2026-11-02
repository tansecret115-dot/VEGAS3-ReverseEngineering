/* Module: rnco3260.dll
   Function: FUN_63704a60
   Address: 63704a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_63704a60(uint *param_1,int *param_2,uint *param_3,uint param_4,ushort *param_5)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar5 = param_1;
  puVar4 = param_3;
  piVar2 = (int *)param_4;
  param_1 = (uint *)param_2;
  while (((param_2 = piVar2, ((uint)puVar4 & 3) != 0 && (((uint)param_5 & 3) != 0)) &&
         (param_2 != (int *)0x0))) {
    uVar3 = (uint)*param_5;
    param_5 = param_5 + 1;
    uVar3 = (uVar3 & 0x7e0 | (uVar3 & 0x1f) << 0xe) << 5 | (uVar3 & 0xf800) >> 8;
    *puVar4 = uVar3;
    *param_1 = ((*puVar5 ^ uVar3) >> 1 & 0x7f7f7f) + (*puVar5 & uVar3);
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
    piVar2 = (int *)((int)param_2 - 1);
  }
  if (3 < (int)param_2) {
    param_3 = (uint *)((uint)param_2 >> 2);
    do {
      uVar3 = (uint)*param_5;
      uVar3 = (uVar3 & 0x7e0 | (uVar3 & 0x1f) << 0xe) << 5 | (uVar3 & 0xf800) >> 8;
      *puVar4 = uVar3;
      *param_1 = ((*puVar5 ^ uVar3) >> 1 & 0x7f7f7f) + (*puVar5 & uVar3);
      uVar3 = (uint)param_5[1];
      uVar3 = (uVar3 & 0x7e0 | (uVar3 & 0x1f) << 0xe) << 5 | (uVar3 & 0xf800) >> 8;
      puVar4[1] = uVar3;
      param_1[1] = ((puVar5[1] ^ uVar3) >> 1 & 0x7f7f7f) + (puVar5[1] & uVar3);
      uVar3 = (uint)param_5[2];
      uVar3 = (uVar3 & 0x7e0 | (uVar3 & 0x1f) << 0xe) << 5 | (uVar3 & 0xf800) >> 8;
      puVar4[2] = uVar3;
      param_1[2] = ((puVar5[2] ^ uVar3) >> 1 & 0x7f7f7f) + (puVar5[2] & uVar3);
      uVar3 = (uint)param_5[3];
      uVar3 = (uVar3 & 0x7e0 | (uVar3 & 0x1f) << 0xe) << 5 | (uVar3 & 0xf800) >> 8;
      puVar4[3] = uVar3;
      puVar1 = puVar5 + 3;
      param_5 = param_5 + 4;
      puVar5 = puVar5 + 4;
      param_1[3] = ((*puVar1 ^ uVar3) >> 1 & 0x7f7f7f) + (*puVar1 & uVar3);
      param_1 = param_1 + 4;
      puVar4 = puVar4 + 4;
      param_2 = param_2 + -1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  for (; param_2 != (int *)0x0; param_2 = (int *)((int)param_2 - 1)) {
    uVar3 = (uint)*param_5;
    param_5 = param_5 + 1;
    uVar3 = (uVar3 & 0x7e0 | (uVar3 & 0x1f) << 0xe) << 5 | (uVar3 & 0xf800) >> 8;
    *puVar4 = uVar3;
    *param_1 = ((*puVar5 ^ uVar3) >> 1 & 0x7f7f7f) + (*puVar5 & uVar3);
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}


