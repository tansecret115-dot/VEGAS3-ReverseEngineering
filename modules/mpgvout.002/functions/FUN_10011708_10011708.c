/* Module: mpgvout.002
   Function: FUN_10011708
   Address: 10011708
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10011708(int *param_1,size_t param_2,void *param_3)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1[0x10] == 0) {
    if ((uint)param_1[1] <= param_2 + param_1[10]) {
      (*(code *)param_1[6])(param_1);
    }
    if (param_1[0x10] == 0) {
      memcpy((void *)(param_1[10] + *param_1),param_3,param_2);
      param_1[10] = param_1[10] + param_2;
      puVar1 = (uint *)(param_1 + 0xe);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + param_2 * 8;
      param_1[0xf] = param_1[0xf] + (uint)CARRY4(uVar2,param_2 * 8);
    }
  }
  return;
}


