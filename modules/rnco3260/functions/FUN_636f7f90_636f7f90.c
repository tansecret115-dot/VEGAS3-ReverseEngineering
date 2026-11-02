/* Module: rnco3260.dll
   Function: FUN_636f7f90
   Address: 636f7f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f7f90(uint *param_1,undefined4 param_2,undefined1 *param_3,uint param_4)

{
  uint3 uVar1;
  uint3 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_4 != 0) {
    puVar5 = param_3 + 3;
    uVar4 = (uint)CONCAT21(CONCAT11(*param_3,param_3[1]),param_3[2]);
    param_4 = param_4 - 1;
    *param_1 = uVar4;
    puVar8 = param_1 + 1;
    if (1 < (int)param_4) {
      param_3 = (undefined1 *)(param_4 >> 1);
      puVar6 = puVar5;
      puVar7 = puVar8;
      do {
        puVar5 = puVar6 + 6;
        uVar2 = CONCAT21(CONCAT11(*puVar6,puVar6[1]),puVar6[2]);
        uVar3 = (uint)uVar2;
        puVar7[1] = uVar3;
        *puVar7 = ((uVar3 ^ uVar4) >> 1 & 0x7f7f7f) + (uVar3 & uVar4);
        puVar8 = puVar7 + 4;
        uVar1 = CONCAT21(CONCAT11(puVar6[3],puVar6[4]),puVar6[5]);
        uVar4 = (uint)uVar1;
        puVar7[3] = uVar4;
        puVar7[2] = ((uint3)((uVar2 ^ uVar1) >> 1) & 0x7f7f7f) + (uint)(uVar2 & uVar1);
        param_4 = param_4 - 2;
        param_3 = param_3 + -1;
        puVar6 = puVar5;
        puVar7 = puVar8;
      } while (param_3 != (undefined1 *)0x0);
    }
    if (param_4 != 0) {
      uVar3 = (uint)CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]);
      puVar8[1] = uVar3;
      puVar8[2] = uVar3;
      *puVar8 = ((uVar3 ^ uVar4) >> 1 & 0x7f7f7f) + (uVar3 & uVar4);
      return;
    }
    *puVar8 = uVar4;
  }
  return;
}


