/* Module: rmme3260.dll
   Function: FUN_662380b0
   Address: 662380b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662380b0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_2;
  if (*(int *)(param_1 + 0x5a) != 0) {
    piVar1 = (int *)(param_1 + 0x56);
    param_1 = *(int *)(param_1 + 0x5a);
    while( true ) {
      piVar3 = (int *)FUN_66250c10(param_1);
      if (piVar2 == (int *)*piVar3) break;
      FUN_66250bf0(&param_1);
      if (param_1 == 0) {
        return 0;
      }
    }
    (**(code **)(*piVar2 + 8))(piVar2);
    (**(code **)(*piVar1 + 0xc))(param_1);
  }
  return 0;
}


