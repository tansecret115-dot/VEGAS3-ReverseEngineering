/* Module: rnco3260.dll
   Function: FUN_636f71a0
   Address: 636f71a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f71a0(uint *param_1,undefined4 param_2,ushort *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if (param_4 != 0) {
    uVar3 = (uint)*param_3;
    puVar7 = param_3 + 1;
    puVar5 = param_1 + 1;
    uVar3 = (((uVar3 & 0x7c00) << 3 | uVar3 & 0x3e0) << 3 | uVar3 & 0x1f) << 3;
    param_4 = param_4 - 1;
    *param_1 = uVar3;
    if (1 < (int)param_4) {
      param_3 = (ushort *)(param_4 >> 1);
      puVar4 = puVar5;
      puVar6 = puVar7;
      do {
        puVar5 = puVar4 + 4;
        uVar1 = (uint)*puVar6;
        puVar7 = puVar6 + 2;
        uVar1 = ((uVar1 & 0x7c00) << 3 | uVar1 & 0x3e0) << 3 | uVar1 & 0x1f;
        uVar2 = uVar1 << 3;
        puVar4[1] = uVar2;
        *puVar4 = ((uVar2 ^ uVar3) >> 1) + (uVar2 & uVar3);
        uVar3 = (uint)puVar6[1];
        uVar2 = ((uVar3 & 0x7c00) << 3 | uVar3 & 0x3e0) << 3 | uVar3 & 0x1f;
        uVar3 = uVar2 << 3;
        puVar4[3] = uVar3;
        puVar4[2] = (uVar1 ^ uVar2) * 4 + (uVar1 & uVar2) * 8;
        param_4 = param_4 - 2;
        param_3 = (ushort *)((int)param_3 + -1);
        puVar4 = puVar5;
        puVar6 = puVar7;
      } while (param_3 != (ushort *)0x0);
    }
    if (param_4 != 0) {
      uVar1 = (uint)*puVar7;
      uVar1 = (((uVar1 & 0x7c00) << 3 | uVar1 & 0x3e0) << 3 | uVar1 & 0x1f) << 3;
      puVar5[1] = uVar1;
      puVar5[2] = uVar1;
      *puVar5 = ((uVar1 ^ uVar3) >> 1) + (uVar1 & uVar3);
      return;
    }
    *puVar5 = uVar3;
  }
  return;
}


