/* Module: mp3plug.dll
   Function: FUN_5f6c7d10
   Address: 5f6c7d10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f6c7d10(int *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if (param_3 < uVar1) {
    uVar2 = param_3;
  }
  if (uVar2 == 0) {
    return 0;
  }
  param_1[1] = uVar1 - uVar2;
  if (*(int *)(param_1[7] + 0x18) == 0) {
    uVar1 = FUN_5f6c95d0(param_1[0xc],(byte *)*param_1,uVar2);
    param_1[0xc] = uVar1;
  }
  puVar3 = (undefined4 *)*param_1;
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar1 = uVar2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  *param_1 = *param_1 + uVar2;
  param_1[2] = param_1[2] + uVar2;
  return uVar2;
}


