/* Module: rnco3260.dll
   Function: FUN_637012f0
   Address: 637012f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_637012f0(uint *param_1,int *param_2,uint *param_3,uint param_4,uint *param_5)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar7 = param_1;
  puVar2 = param_3;
  piVar1 = (int *)param_4;
  param_1 = (uint *)param_2;
  while (((param_2 = piVar1, ((uint)puVar2 & 3) != 0 && (((uint)param_5 & 3) != 0)) &&
         (param_2 != (int *)0x0))) {
    uVar5 = *param_5;
    param_3._2_1_ = (undefined1)(uVar5 >> 0x10);
    uVar5 = (uint)CONCAT11((char)(uVar5 >> 8),param_3._2_1_) | (uVar5 & 0xff) << 0x10;
    param_5 = param_5 + 1;
    *puVar2 = uVar5;
    puVar2 = puVar2 + 1;
    *param_1 = ((*puVar7 ^ uVar5) >> 1 & 0x7f7f7f) + (*puVar7 & uVar5);
    param_1 = param_1 + 1;
    puVar7 = puVar7 + 1;
    piVar1 = (int *)((int)param_2 - 1);
  }
  puVar4 = param_5;
  if (3 < (int)param_2) {
    param_3 = (uint *)((uint)param_2 >> 2);
    puVar3 = param_5;
    puVar6 = puVar7;
    do {
      uVar5 = *puVar3;
      puVar4 = puVar3 + 4;
      puVar7 = puVar6 + 4;
      uVar5 = uVar5 & 0xff00 | (uVar5 & 0xff) << 0x10 | uVar5 >> 0x10 & 0xff;
      *puVar2 = uVar5;
      *param_1 = ((*puVar6 ^ uVar5) >> 1 & 0x7f7f7f) + (*puVar6 & uVar5);
      uVar5 = puVar3[1];
      uVar5 = uVar5 & 0xff00 | (uVar5 & 0xff) << 0x10 | uVar5 >> 0x10 & 0xff;
      puVar2[1] = uVar5;
      param_1[1] = ((puVar6[1] ^ uVar5) >> 1 & 0x7f7f7f) + (puVar6[1] & uVar5);
      uVar5 = puVar3[2];
      param_5._2_1_ = (undefined1)(uVar5 >> 0x10);
      uVar5 = (uint)CONCAT11((char)(uVar5 >> 8),param_5._2_1_) | (uVar5 & 0xff) << 0x10;
      puVar2[2] = uVar5;
      param_1[2] = ((puVar6[2] ^ uVar5) >> 1 & 0x7f7f7f) + (puVar6[2] & uVar5);
      uVar5 = puVar3[3];
      param_5._2_1_ = (undefined1)(uVar5 >> 0x10);
      uVar5 = (uint)CONCAT11((char)(uVar5 >> 8),param_5._2_1_) | (uVar5 & 0xff) << 0x10;
      puVar2[3] = uVar5;
      puVar2 = puVar2 + 4;
      param_1[3] = ((puVar6[3] ^ uVar5) >> 1 & 0x7f7f7f) + (puVar6[3] & uVar5);
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
      param_3 = (uint *)((int)param_3 + -1);
      puVar3 = puVar4;
      puVar6 = puVar7;
    } while (param_3 != (uint *)0x0);
  }
  for (; param_2 != (int *)0x0; param_2 = (int *)((int)param_2 - 1)) {
    uVar5 = *puVar4;
    uVar5 = uVar5 & 0xff00 | (uVar5 & 0xff) << 0x10 | uVar5 >> 0x10 & 0xff;
    *puVar2 = uVar5;
    *param_1 = ((*puVar7 ^ uVar5) >> 1 & 0x7f7f7f) + (*puVar7 & uVar5);
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  return;
}


