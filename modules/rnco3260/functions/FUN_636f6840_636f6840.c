/* Module: rnco3260.dll
   Function: FUN_636f6840
   Address: 636f6840
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f6840(uint *param_1,undefined4 param_2,uint3 *param_3,uint param_4)

{
  uint3 uVar1;
  uint3 uVar2;
  uint uVar3;
  uint3 *puVar4;
  uint3 *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_4 != 0) {
    puVar4 = (uint3 *)((int)param_3 + 3);
    uVar3 = (uint)*param_3;
    param_4 = param_4 - 1;
    *param_1 = uVar3;
    puVar8 = param_1 + 1;
    if (1 < (int)param_4) {
      param_3 = (uint3 *)(param_4 >> 1);
      puVar5 = puVar4;
      puVar7 = puVar8;
      do {
        uVar1 = *puVar5;
        puVar4 = (uint3 *)((int)puVar5 + 6);
        uVar6 = (uint)uVar1;
        puVar8 = puVar7 + 4;
        puVar7[1] = uVar6;
        *puVar7 = ((uVar6 ^ uVar3) >> 1 & 0x7f7f7f) + (uVar6 & uVar3);
        uVar2 = *(uint3 *)((int)puVar5 + 3);
        uVar3 = (uint)uVar2;
        puVar7[3] = uVar3;
        puVar7[2] = ((uint3)((uVar1 ^ uVar2) >> 1) & 0x7f7f7f) + (uint)(uVar1 & uVar2);
        param_4 = param_4 - 2;
        param_3 = (uint3 *)((int)param_3 + -1);
        puVar5 = puVar4;
        puVar7 = puVar8;
      } while (param_3 != (uint3 *)0x0);
    }
    if (param_4 != 0) {
      uVar6 = (uint)*puVar4;
      puVar8[1] = uVar6;
      puVar8[2] = uVar6;
      *puVar8 = ((uVar6 ^ uVar3) >> 1 & 0x7f7f7f) + (uVar6 & uVar3);
      return;
    }
    *puVar8 = uVar3;
  }
  return;
}


