/* Module: vegas30k.dll
   Function: FUN_0113b220
   Address: 0113b220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0113b220(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_011362b0();
  puVar3 = (undefined4 *)FUN_01163ac0();
  if (0 < param_1[7]) {
    uVar1 = *puVar3;
    puVar3[5] = param_1[8];
    *(int **)(iVar2 + 8) = param_1;
    (**(code **)(*param_1 + 4))(param_1);
    return uVar1;
  }
  uVar1 = *puVar3;
  puVar3[5] = param_1[4];
  *(int **)(iVar2 + 8) = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return uVar1;
}


