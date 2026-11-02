/* Module: rnco3260.dll
   Function: FUN_636fd0f0
   Address: 636fd0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fd0f0(undefined2 *param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_4 != 0) {
    uVar3 = *param_3;
    puVar8 = param_3 + 1;
    puVar6 = param_1 + 1;
    uVar3 = ((uVar3 & 0xf800 | uVar3 >> 3 & 0x1f0000) >> 3 | uVar3 & 0xf8) >> 3;
    param_4 = param_4 - 1;
    *param_1 = (short)uVar3;
    if (1 < (int)param_4) {
      param_3 = (uint *)(param_4 >> 1);
      puVar5 = puVar6;
      puVar7 = puVar8;
      do {
        uVar2 = *puVar7;
        puVar8 = puVar7 + 2;
        uVar2 = (uVar2 & 0xf800 | uVar2 >> 3 & 0x1f0000) >> 3 | uVar2 & 0xf8;
        puVar6 = puVar5 + 4;
        uVar1 = (ushort)(uVar2 >> 3);
        puVar5[1] = uVar1;
        *puVar5 = ((ushort)((uVar2 >> 3 ^ uVar3) >> 1) & 0x3def) + (uVar1 & (ushort)uVar3);
        uVar3 = puVar7[1];
        uVar4 = (uVar3 & 0xf800 | uVar3 >> 3 & 0x1f0000) >> 3 | uVar3 & 0xf8;
        uVar3 = uVar4 >> 3;
        puVar5[3] = (ushort)uVar3;
        puVar5[2] = ((ushort)((uVar2 ^ uVar4) >> 4) & 0x3def) + (short)((uVar2 & uVar4) >> 3);
        param_4 = param_4 - 2;
        param_3 = (uint *)((int)param_3 + -1);
        puVar5 = puVar6;
        puVar7 = puVar8;
      } while (param_3 != (uint *)0x0);
    }
    if (param_4 != 0) {
      uVar2 = *puVar8;
      uVar2 = ((uVar2 & 0xf800 | uVar2 >> 3 & 0x1f0000) >> 3 | uVar2 & 0xf8) >> 3;
      uVar1 = (ushort)uVar2;
      puVar6[1] = uVar1;
      puVar6[2] = uVar1;
      *puVar6 = ((ushort)((uVar2 ^ uVar3) >> 1) & 0x3def) + (uVar1 & (ushort)uVar3);
      return;
    }
    *puVar6 = (ushort)uVar3;
  }
  return;
}


