/* Module: rnco3260.dll
   Function: FUN_636fe160
   Address: 636fe160
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fe160(ushort *param_1,undefined4 param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if (param_4 != 0) {
    puVar5 = param_1 + 1;
    uVar3 = (uint)*param_3;
    puVar7 = param_3 + 1;
    param_4 = param_4 - 1;
    *param_1 = *param_3;
    if (1 < (int)param_4) {
      param_3 = (ushort *)(param_4 >> 1);
      puVar4 = puVar5;
      puVar6 = puVar7;
      do {
        puVar5 = puVar4 + 4;
        uVar1 = *puVar6;
        puVar7 = puVar6 + 2;
        puVar4[1] = uVar1;
        *puVar4 = ((ushort)((uVar1 ^ uVar3) >> 1) & 0x3def) + (uVar1 & (ushort)uVar3);
        uVar2 = puVar6[1];
        uVar3 = (uint)uVar2;
        puVar4[3] = uVar2;
        puVar4[2] = ((uVar1 ^ uVar2) >> 1 & 0x3def) + (uVar1 & uVar2);
        param_4 = param_4 - 2;
        param_3 = (ushort *)((int)param_3 + -1);
        puVar4 = puVar5;
        puVar6 = puVar7;
      } while (param_3 != (ushort *)0x0);
    }
    if (param_4 != 0) {
      uVar1 = *puVar7;
      puVar5[1] = uVar1;
      puVar5[2] = uVar1;
      *puVar5 = ((ushort)((uVar1 ^ uVar3) >> 1) & 0x3def) + (uVar1 & (ushort)uVar3);
      return;
    }
    *puVar5 = (ushort)uVar3;
  }
  return;
}


