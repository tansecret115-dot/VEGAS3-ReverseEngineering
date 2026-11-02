/* Module: rv303260.dll
   Function: FUN_67205ca0
   Address: 67205ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_67205ca0(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  ushort uVar3;
  char *pcVar4;
  
  uVar3 = 2;
  *param_1 = &PTR_FUN_67213220;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[1] = 0;
  puVar1 = FUN_67201040();
  iVar2 = FUN_6720e450(puVar1,uVar3);
  if (iVar2 == 0) {
    pcVar4 = &DAT_67216748;
    uVar3 = 2;
    puVar1 = FUN_67201040();
    FUN_6720e3c0(puVar1,uVar3,pcVar4);
  }
  return param_1;
}


