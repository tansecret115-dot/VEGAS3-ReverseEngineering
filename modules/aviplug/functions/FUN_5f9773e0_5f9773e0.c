/* Module: aviplug.dll
   Function: FUN_5f9773e0
   Address: 5f9773e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9773e0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_5f9e7578;
  uVar1 = *(uint *)(&DAT_5f9e7440 + (*param_1 >> 5) * 4);
  if (((int)uVar1 < 0) &&
     (uVar1 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f), param_1[1] % 0x30 < 0x18)) {
    uVar1 = uVar1 - 1;
    puVar2 = &DAT_5f9e75d4;
  }
  *param_2 = *(undefined4 *)(&DAT_5f9e749c + (param_1[1] / 0x30 + uVar1 * 10) * 4);
  *param_4 = *(undefined4 *)(&DAT_5f9e7564 + uVar1 * 4);
  *param_3 = *(undefined4 *)
              ((&PTR_DAT_5f9f2e60)[uVar1] +
              ((param_1[1] % 0x30 >> 3) + *(int *)(puVar2 + (*param_1 >> 5) * 4) * 6) * 4);
  return;
}


