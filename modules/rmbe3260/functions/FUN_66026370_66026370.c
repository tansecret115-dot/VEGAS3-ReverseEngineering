/* Module: rmbe3260.dll
   Function: FUN_66026370
   Address: 66026370
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66026370(int *param_1)

{
  uint *puVar1;
  int iVar2;
  char local_404 [1024];
  
  iVar2 = 0;
  if ((param_1[0xc] != 0) && (iVar2 = (**(code **)(*param_1 + 0x28))(), iVar2 < 0)) {
    return iVar2;
  }
  FUN_6605cdc0(param_1 + 8,9,0xffffffff);
  puVar1 = &DAT_660671b8;
  do {
    FUN_6602e290(*puVar1 | 0x5dd0000,local_404,0x400);
    if (-1 < iVar2) {
      iVar2 = *param_1;
      FUN_6605b7e0(&stack0xfffffbe4,local_404);
      iVar2 = (**(code **)(iVar2 + 0x2c))(param_1);
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x660671dc);
  param_1[0xc] = 1;
  return iVar2;
}


