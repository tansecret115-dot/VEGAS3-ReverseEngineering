/* Module: encn3260.dll
   Function: FUN_664bc9e0
   Address: 664bc9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664bc9e0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *this;
  
  puVar2 = param_2;
  piVar1 = (int *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x60) == 0) {
    return 0x80004005;
  }
  this = (void *)(param_1 + 8);
  param_1 = 0;
  FUN_664be0c0(this,piVar1,param_2,&param_1);
  puVar3 = (undefined4 *)FUN_664bd020(param_1);
  *puVar2 = *puVar3;
  uVar4 = FUN_664bd0b0(param_1);
  *param_3 = uVar4;
  return 0;
}


