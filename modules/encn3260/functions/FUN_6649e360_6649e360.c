/* Module: encn3260.dll
   Function: FUN_6649e360
   Address: 6649e360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649e360(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = param_2;
  param_1 = *(int *)(param_1 + 0x24);
  while (param_1 != 0) {
    piVar2 = (int *)FUN_664bab40(&param_1);
    if (*piVar2 != 0) {
      piVar2 = *(int **)(*piVar2 + 0xc);
      (**(code **)(*piVar2 + 0x3c))(piVar2,uVar1);
    }
  }
  return 0;
}


