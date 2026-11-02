/* Module: rmbe3260.dll
   Function: FUN_66023e60
   Address: 66023e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66023e60(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[0x10]) {
    do {
      piVar1 = *(int **)(param_1[0xf] + iVar2 * 4);
      (**(code **)(*piVar1 + 8))(piVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[0x10]);
  }
  FUN_6605cdc0(param_1 + 0xf,0,0xffffffff);
  (**(code **)(*param_1 + 0x2c))(param_1);
  return 0;
}


