/* Module: mp3plug.dll
   Function: FUN_5f705250
   Address: 5f705250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f705250(uint *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  if (uVar2 + param_3 < *param_1) {
    uVar1 = uVar2 + param_3;
  }
  uVar1 = uVar1 - uVar2;
  FUN_5f6d5090(param_2,(undefined4 *)(param_1[3] + uVar2 * 4),uVar1);
  uVar2 = param_3 - uVar1;
  param_1[1] = (uVar1 + param_1[1]) % *param_1;
  if (uVar2 != 0) {
    FUN_5f6d5090(param_2 + uVar1,(undefined4 *)(param_1[3] + param_1[1] * 4),uVar2);
    param_1[1] = (uVar2 + param_1[1]) % *param_1;
  }
  return 1;
}


