/* Module: mpgaout.dll
   Function: FUN_1000ace8
   Address: 1000ace8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000ace8(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)(param_1 + 0xe);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  param_1[0xf] = param_1[0xf] + (uint)(0xfffffffe < uVar2);
  iVar3 = param_1[0xb];
  param_1[9] = param_1[9] * 2 | param_2 & 1;
  param_1[0xb] = iVar3 + -1;
  if (iVar3 == 1) {
    if (param_1[0x10] == 0) {
      *(char *)(param_1[10] + *param_1) = (char)param_1[9];
      param_1[10] = param_1[10] + 1;
      if (param_1[10] == param_1[1]) {
        (*(code *)param_1[6])(param_1);
      }
    }
    param_1[0xb] = 8;
  }
  return;
}


