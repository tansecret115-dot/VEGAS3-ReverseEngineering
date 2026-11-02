/* Module: rnco3260.dll
   Function: FUN_636f88a0
   Address: 636f88a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f88a0(uint *param_1,undefined4 param_2,ushort *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  if (param_4 != 0) {
    uVar2 = (uint)*param_3;
    puVar6 = param_3 + 1;
    puVar4 = param_1 + 1;
    uVar2 = ((uVar2 & 0x1f) << 0xd | uVar2 & 0x3e0) << 6 | (uVar2 & 0x7c00) >> 7;
    param_4 = param_4 - 1;
    *param_1 = uVar2;
    if (1 < (int)param_4) {
      param_3 = (ushort *)(param_4 >> 1);
      puVar3 = puVar4;
      puVar5 = puVar6;
      do {
        puVar4 = puVar3 + 4;
        uVar1 = (uint)*puVar5;
        puVar6 = puVar5 + 2;
        uVar1 = ((uVar1 & 0x1f) << 0xd | uVar1 & 0x3e0) << 6 | (uVar1 & 0x7c00) >> 7;
        puVar3[1] = uVar1;
        *puVar3 = ((uVar1 ^ uVar2) >> 1) + (uVar1 & uVar2);
        uVar2 = (uint)puVar5[1];
        uVar2 = ((uVar2 & 0x1f) << 0xd | uVar2 & 0x3e0) << 6 | (uVar2 & 0x7c00) >> 7;
        puVar3[3] = uVar2;
        puVar3[2] = ((uVar1 ^ uVar2) >> 1) + (uVar1 & uVar2);
        param_4 = param_4 - 2;
        param_3 = (ushort *)((int)param_3 + -1);
        puVar3 = puVar4;
        puVar5 = puVar6;
      } while (param_3 != (ushort *)0x0);
    }
    if (param_4 != 0) {
      uVar1 = (uint)*puVar6;
      uVar1 = ((uVar1 & 0x1f) << 0xd | uVar1 & 0x3e0) << 6 | (uVar1 & 0x7c00) >> 7;
      puVar4[1] = uVar1;
      puVar4[2] = uVar1;
      *puVar4 = ((uVar1 ^ uVar2) >> 1) + (uVar1 & uVar2);
      return;
    }
    *puVar4 = uVar2;
  }
  return;
}


