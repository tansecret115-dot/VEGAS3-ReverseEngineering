/* Module: encn3260.dll
   Function: FUN_664bcbd0
   Address: 664bcbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664bcbd0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *this;
  
  puVar3 = param_2;
  piVar1 = (int *)(param_1 + 100);
  iVar2 = -(uint)(*(int *)(param_1 + 0x2c) != 0);
  *piVar1 = iVar2;
  if (iVar2 == 0) {
    return 0x80004005;
  }
  this = (void *)(param_1 + 0x24);
  param_1 = 0;
  FUN_664be0c0(this,piVar1,param_2,&param_1);
  puVar4 = (undefined4 *)FUN_664bd020(param_1);
  *puVar3 = *puVar4;
  uVar5 = FUN_664bd150(param_1);
  *param_3 = uVar5;
  return 0;
}


