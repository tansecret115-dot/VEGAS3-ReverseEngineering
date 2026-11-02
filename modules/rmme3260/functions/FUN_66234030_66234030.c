/* Module: rmme3260.dll
   Function: FUN_66234030
   Address: 66234030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66234030(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = param_2;
  param_1 = *(int *)(param_1 + 0x24);
  while (param_1 != 0) {
    piVar2 = (int *)FUN_66250bf0(&param_1);
    if (*piVar2 != 0) {
      piVar2 = *(int **)(*piVar2 + 0xc);
      (**(code **)(*piVar2 + 0x3c))(piVar2,uVar1);
    }
  }
  return 0;
}


