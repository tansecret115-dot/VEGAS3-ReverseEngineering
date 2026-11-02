/* Module: rnco3260.dll
   Function: FUN_636f6280
   Address: 636f6280
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f6280(uint *param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (param_4 != 0) {
    puVar4 = param_1 + 1;
    uVar2 = *param_3;
    puVar6 = param_3 + 1;
    param_4 = param_4 - 1;
    *param_1 = uVar2;
    if (1 < (int)param_4) {
      param_3 = (uint *)(param_4 >> 1);
      puVar3 = puVar4;
      puVar5 = puVar6;
      do {
        uVar1 = *puVar5;
        puVar6 = puVar5 + 2;
        puVar3[1] = uVar1;
        *puVar3 = ((uVar1 ^ uVar2) >> 1 & 0x7f7f7f) + (uVar1 & uVar2);
        uVar2 = puVar5[1];
        puVar3[3] = uVar2;
        puVar4 = puVar3 + 4;
        puVar3[2] = ((uVar1 ^ uVar2) >> 1 & 0x7f7f7f) + (uVar1 & uVar2);
        param_4 = param_4 - 2;
        param_3 = (uint *)((int)param_3 + -1);
        puVar3 = puVar4;
        puVar5 = puVar6;
      } while (param_3 != (uint *)0x0);
    }
    if (param_4 != 0) {
      uVar1 = *puVar6;
      puVar4[1] = uVar1;
      puVar4[2] = uVar1;
      *puVar4 = ((uVar1 ^ uVar2) >> 1 & 0x7f7f7f) + (uVar1 & uVar2);
      return;
    }
    *puVar4 = uVar2;
  }
  return;
}


