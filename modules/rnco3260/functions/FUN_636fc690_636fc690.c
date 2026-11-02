/* Module: rnco3260.dll
   Function: FUN_636fc690
   Address: 636fc690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fc690(undefined2 *param_1,undefined4 param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if (param_4 != 0) {
    puVar7 = param_3 + 1;
    puVar5 = param_1 + 1;
    uVar3 = (*param_3 & 0x7fe0) << 1 | *param_3 & 0x1f;
    param_4 = param_4 - 1;
    *param_1 = (short)uVar3;
    if (1 < (int)param_4) {
      param_3 = (ushort *)(param_4 >> 1);
      puVar4 = puVar5;
      puVar6 = puVar7;
      do {
        puVar5 = puVar4 + 4;
        puVar7 = puVar6 + 2;
        uVar2 = (*puVar6 & 0x7fe0) << 1 | *puVar6 & 0x1f;
        uVar1 = (ushort)uVar2;
        puVar4[1] = uVar1;
        *puVar4 = ((ushort)((uVar2 ^ uVar3) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar3);
        uVar3 = puVar6[1] & 0x1f | (puVar6[1] & 0x7fe0) << 1;
        puVar4[3] = (ushort)uVar3;
        puVar4[2] = ((ushort)((uVar2 ^ uVar3) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar3);
        param_4 = param_4 - 2;
        param_3 = (ushort *)((int)param_3 + -1);
        puVar4 = puVar5;
        puVar6 = puVar7;
      } while (param_3 != (ushort *)0x0);
    }
    if (param_4 != 0) {
      uVar2 = (*puVar7 & 0x7fe0) << 1 | *puVar7 & 0x1f;
      uVar1 = (ushort)uVar2;
      puVar5[1] = uVar1;
      puVar5[2] = uVar1;
      *puVar5 = ((ushort)((uVar2 ^ uVar3) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar3);
      return;
    }
    *puVar5 = (ushort)uVar3;
  }
  return;
}


