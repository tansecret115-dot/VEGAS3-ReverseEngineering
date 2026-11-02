/* Module: mpgaout.dll
   Function: FUN_1000ad4c
   Address: 1000ad4c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000ad4c(int *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 1 << ((char)param_3 - 1U & 0x1f);
  uVar3 = param_3;
  if (0 < (int)param_3) {
    do {
      iVar2 = param_1[9];
      param_1[9] = iVar2 * 2;
      if ((param_2 & uVar4) != 0) {
        param_1[9] = iVar2 * 2 | 1;
      }
      iVar2 = param_1[0xb];
      uVar4 = uVar4 >> 1;
      param_1[0xb] = iVar2 + -1;
      if (iVar2 == 1) {
        if (param_1[0x10] == 0) {
          *(char *)(param_1[10] + *param_1) = (char)param_1[9];
          param_1[10] = param_1[10] + 1;
          if (param_1[10] == param_1[1]) {
            (*(code *)param_1[6])(param_1);
          }
        }
        param_1[0xb] = 8;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (uint *)(param_1 + 0xe);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + param_3;
  param_1[0xf] = param_1[0xf] + ((int)param_3 >> 0x1f) + (uint)CARRY4(uVar3,param_3);
  return;
}


