/* Module: rnco3260.dll
   Function: FUN_63703f80
   Address: 63703f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63703f80(uint *param_1,uint *param_2,uint *param_3,undefined4 param_4,uint *param_5,
            uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_6 != (uint *)0x0) {
    puVar4 = param_1 + 2;
    uVar3 = *param_5;
    puVar7 = param_5 + 1;
    puVar5 = param_2 + 1;
    uVar6 = ((*param_1 ^ uVar3) >> 1 & 0x7f7f7f) + (*param_1 & uVar3);
    param_1 = (uint *)((int)param_6 - 1);
    *param_3 = uVar3;
    *param_2 = uVar6;
    puVar8 = param_3 + 1;
    param_5 = puVar4;
    param_6 = puVar7;
    if (1 < (int)param_1) {
      param_2 = (uint *)((uint)param_1 >> 1);
      puVar7 = puVar8;
      param_3 = puVar5;
      do {
        puVar8 = puVar7 + 4;
        uVar1 = *param_6;
        puVar7[1] = uVar1;
        *puVar7 = ((uVar1 ^ uVar3) >> 1 & 0x7f7f7f) + (uVar1 & uVar3);
        uVar2 = ((*param_5 ^ uVar1) >> 1 & 0x7f7f7f) + (*param_5 & uVar1);
        *param_3 = ((uVar2 ^ uVar6) >> 1 & 0x7f7f7f) + (uVar2 & uVar6);
        param_3[1] = uVar2;
        puVar5 = param_3 + 4;
        uVar3 = param_6[1];
        puVar7[3] = uVar3;
        puVar7[2] = ((uVar1 ^ uVar3) >> 1 & 0x7f7f7f) + (uVar1 & uVar3);
        uVar6 = ((param_5[2] ^ uVar3) >> 1 & 0x7f7f7f) + (param_5[2] & uVar3);
        param_3[3] = uVar6;
        param_3[2] = ((uVar2 ^ uVar6) >> 1 & 0x7f7f7f) + (uVar2 & uVar6);
        param_6 = param_6 + 2;
        param_5 = param_5 + 4;
        param_1 = (uint *)((int)param_1 + -2);
        param_2 = (uint *)((int)param_2 + -1);
        puVar7 = puVar8;
        param_3 = puVar5;
      } while (param_2 != (uint *)0x0);
    }
    if (param_1 != (uint *)0x0) {
      uVar1 = *param_6;
      puVar8[1] = uVar1;
      *puVar8 = ((uVar1 ^ uVar3) >> 1 & 0x7f7f7f) + (uVar1 & uVar3);
      puVar8[2] = uVar1;
      uVar3 = ((*param_5 ^ uVar1) >> 1 & 0x7f7f7f) + (*param_5 & uVar1);
      puVar5[1] = uVar3;
      puVar5[2] = uVar3;
      *puVar5 = ((uVar3 ^ uVar6) >> 1 & 0x7f7f7f) + (uVar3 & uVar6);
      return;
    }
    *puVar8 = uVar3;
    *puVar5 = uVar6;
  }
  return;
}


