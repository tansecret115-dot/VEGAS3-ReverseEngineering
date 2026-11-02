/* Module: mp3plug.dll
   Function: FUN_5f7058a0
   Address: 5f7058a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f7058a0(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_1[2];
  uVar1 = *(undefined4 *)((param_1[3] - 4) + uVar2 * 4);
  while (uVar2 = uVar2 - 1, uVar2 != 0) {
    *(undefined4 *)(param_1[3] + uVar2 * 4) = *(undefined4 *)((param_1[3] - 4) + uVar2 * 4);
  }
  *(undefined4 *)param_1[3] = uVar1;
  FUN_5f6d8bb0(0,*(uint *)param_1[3],*param_1);
  uVar2 = param_1[2];
  if (param_1[1] + 1 < uVar2) {
    uVar2 = param_1[1] + 1;
  }
  param_1[1] = uVar2;
  return 1;
}


