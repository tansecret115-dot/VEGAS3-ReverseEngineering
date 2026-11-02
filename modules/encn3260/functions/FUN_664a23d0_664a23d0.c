/* Module: encn3260.dll
   Function: FUN_664a23d0
   Address: 664a23d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a23d0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_2;
  if (*(int *)(param_1 + 0x5a) != 0) {
    piVar1 = (int *)(param_1 + 0x56);
    param_1 = *(int *)(param_1 + 0x5a);
    while( true ) {
      piVar3 = (int *)FUN_664bab80(param_1);
      if (piVar2 == (int *)*piVar3) break;
      FUN_664bab40(&param_1);
      if (param_1 == 0) {
        return 0;
      }
    }
    (**(code **)(*piVar2 + 8))(piVar2);
    (**(code **)(*piVar1 + 0xc))(param_1);
  }
  return 0;
}


