/* Module: rnco3260.dll
   Function: FUN_63701c60
   Address: 63701c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63701c60(uint *param_1,uint *param_2,uint *param_3,undefined4 param_4,uint *param_5,uint param_6
            )

{
  uint3 uVar1;
  uint3 uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint3 *puVar8;
  uint3 *puVar9;
  
  if (param_6 != 0) {
    puVar3 = param_1 + 2;
    uVar4 = (uint)(uint3)*param_5;
    param_6 = param_6 - 1;
    uVar7 = ((*param_1 ^ uVar4) >> 1 & 0x7f7f7f) + (*param_1 & uVar4);
    puVar8 = (uint3 *)((int)param_5 + 3);
    puVar6 = param_2 + 1;
    *param_3 = uVar4;
    *param_2 = uVar7;
    param_5 = param_3 + 1;
    param_1 = puVar3;
    if (1 < (int)param_6) {
      param_2 = (uint *)(param_6 >> 1);
      puVar9 = puVar8;
      param_3 = puVar6;
      do {
        uVar1 = *puVar9;
        puVar8 = (uint3 *)((int)puVar9 + 6);
        uVar5 = (uint)uVar1;
        *param_5 = ((uVar5 ^ uVar4) >> 1 & 0x7f7f7f) + (uVar5 & uVar4);
        param_5[1] = uVar5;
        uVar5 = ((*param_1 ^ uVar5) >> 1 & 0x7f7f7f) + (*param_1 & uVar5);
        *param_3 = ((uVar5 ^ uVar7) >> 1 & 0x7f7f7f) + (uVar5 & uVar7);
        param_3[1] = uVar5;
        uVar2 = *(uint3 *)((int)puVar9 + 3);
        uVar4 = (uint)uVar2;
        param_5[2] = ((uint3)((uVar1 ^ uVar2) >> 1) & 0x7f7f7f) + (uint)(uVar1 & uVar2);
        param_5[3] = uVar4;
        uVar7 = ((param_1[2] ^ uVar4) >> 1 & 0x7f7f7f) + (param_1[2] & uVar4);
        param_3[3] = uVar7;
        param_3[2] = ((uVar5 ^ uVar7) >> 1 & 0x7f7f7f) + (uVar5 & uVar7);
        param_1 = param_1 + 4;
        param_5 = param_5 + 4;
        puVar6 = param_3 + 4;
        param_6 = param_6 - 2;
        param_2 = (uint *)((int)param_2 + -1);
        puVar9 = puVar8;
        param_3 = puVar6;
      } while (param_2 != (uint *)0x0);
    }
    if (param_6 != 0) {
      uVar5 = (uint)*puVar8;
      *param_5 = ((uVar5 ^ uVar4) >> 1 & 0x7f7f7f) + (uVar5 & uVar4);
      param_5[1] = uVar5;
      param_5[2] = uVar5;
      uVar4 = ((*param_1 ^ uVar5) >> 1 & 0x7f7f7f) + (*param_1 & uVar5);
      puVar6[1] = uVar4;
      puVar6[2] = uVar4;
      *puVar6 = ((uVar4 ^ uVar7) >> 1 & 0x7f7f7f) + (uVar4 & uVar7);
      return;
    }
    *param_5 = uVar4;
    *puVar6 = uVar7;
  }
  return;
}


