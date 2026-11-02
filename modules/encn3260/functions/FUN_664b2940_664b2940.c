/* Module: encn3260.dll
   Function: FUN_664b2940
   Address: 664b2940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664b2940(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)((int)param_1 + 0x42) != 0) {
    uVar1 = (**(code **)(*param_1 + 0xc))
                      (param_1,param_2,*(int *)((int)param_1 + 0x42),param_3,param_4);
    return uVar1;
  }
  return 0x80004005;
}


