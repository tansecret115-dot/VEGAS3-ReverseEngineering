/* Module: mp3plug.dll
   Function: FUN_5f705390
   Address: 5f705390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f705390(uint *param_1,undefined4 *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = ((uVar1 + param_1[1]) - param_4) % uVar1;
  uVar3 = param_3 + uVar2;
  if (uVar1 <= param_3 + uVar2) {
    uVar3 = uVar1;
  }
  uVar3 = uVar3 - uVar2;
  FUN_5f6d5090((undefined4 *)(param_1[3] + uVar2 * 4),param_2,uVar3);
  if (param_3 - uVar3 != 0) {
    FUN_5f6d5090((undefined4 *)(param_1[3] + ((uVar2 + uVar3) % *param_1) * 4),param_2 + uVar3,
                 param_3 - uVar3);
  }
  return 1;
}


