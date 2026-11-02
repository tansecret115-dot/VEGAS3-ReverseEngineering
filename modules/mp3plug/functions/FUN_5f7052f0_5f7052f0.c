/* Module: mp3plug.dll
   Function: FUN_5f7052f0
   Address: 5f7052f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f7052f0(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  if (uVar1 + param_2 < *param_1) {
    uVar2 = uVar1 + param_2;
  }
  uVar2 = uVar2 - uVar1;
  FUN_5f6d8bb0(0,param_1[3] + uVar1 * 4,uVar2);
  param_1[1] = (uVar2 + param_1[1]) % *param_1;
  uVar2 = param_2 - uVar2;
  if (uVar2 != 0) {
    FUN_5f6d8bb0(0,param_1[3] + param_1[1] * 4,uVar2);
    param_1[1] = (uVar2 + param_1[1]) % *param_1;
  }
  return 1;
}


