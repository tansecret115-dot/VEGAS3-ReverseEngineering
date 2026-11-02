/* Module: rnco3260.dll
   Function: FUN_636fd5f0
   Address: 636fd5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fd5f0(undefined2 *param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (param_4 != 0) {
    uVar3 = *param_3;
    puVar6 = param_3 + 1;
    puVar4 = param_1 + 1;
    uVar3 = (uVar3 & 0xf800 | uVar3 >> 0xd & 0x7c0) >> 6 | (uVar3 & 0xf8) << 7;
    param_4 = param_4 - 1;
    *param_1 = (short)uVar3;
    if (1 < (int)param_4) {
      param_3 = (uint *)(param_4 >> 1);
      puVar5 = puVar6;
      do {
        uVar2 = *puVar5;
        puVar6 = puVar5 + 2;
        uVar2 = (uVar2 & 0xf800 | uVar2 >> 0xd & 0x7c0) >> 6 | (uVar2 & 0xf8) << 7;
        uVar1 = (ushort)uVar2;
        puVar4[1] = uVar1;
        *puVar4 = ((ushort)((uVar2 ^ uVar3) >> 1) & 0x3def) + (uVar1 & (ushort)uVar3);
        uVar3 = puVar5[1];
        uVar3 = (uVar3 & 0xf8) << 7 | (uVar3 & 0xf800 | uVar3 >> 0xd & 0x7c0) >> 6;
        puVar4[3] = (ushort)uVar3;
        puVar4[2] = ((ushort)((uVar2 ^ uVar3) >> 1) & 0x3def) + (uVar1 & (ushort)uVar3);
        puVar4 = puVar4 + 4;
        param_4 = param_4 - 2;
        param_3 = (uint *)((int)param_3 + -1);
        puVar5 = puVar6;
      } while (param_3 != (uint *)0x0);
    }
    if (param_4 != 0) {
      uVar2 = *puVar6;
      uVar2 = (uVar2 & 0xf800 | uVar2 >> 0xd & 0x7c0) >> 6 | (uVar2 & 0xf8) << 7;
      uVar1 = (ushort)uVar2;
      puVar4[1] = uVar1;
      puVar4[2] = uVar1;
      *puVar4 = ((ushort)((uVar2 ^ uVar3) >> 1) & 0x3def) + (uVar1 & (ushort)uVar3);
      return;
    }
    *puVar4 = (ushort)uVar3;
  }
  return;
}


