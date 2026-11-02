/* Module: encn3260.dll
   Function: FUN_6649e2f0
   Address: 6649e2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_6649e2f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = param_5;
  uVar1 = param_4;
  param_1 = *(int *)(param_1 + 0x24);
  while (param_1 != 0) {
    piVar3 = (int *)FUN_664bab40(&param_1);
    if (*piVar3 != 0) {
      piVar3 = *(int **)(*piVar3 + 0xc);
      (**(code **)(*piVar3 + 0x38))(piVar3,param_2,param_3,uVar1,uVar2);
    }
  }
  return 0;
}


