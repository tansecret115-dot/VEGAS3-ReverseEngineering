/* Module: rmto3260.dll
   Function: FUN_662ee000
   Address: 662ee000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662ee000(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *this;
  
  puVar3 = param_2;
  piVar1 = (int *)(param_1 + 0x60);
  iVar2 = -(uint)(*(int *)(param_1 + 0x10) != 0);
  *piVar1 = iVar2;
  if (iVar2 == 0) {
    return 0x80004005;
  }
  this = (void *)(param_1 + 8);
  param_1 = 0;
  FUN_662eeb30(this,piVar1,param_2,&param_1);
  puVar4 = (undefined4 *)FUN_662ee5c0(param_1);
  *puVar3 = *puVar4;
  uVar5 = FUN_662ee650(param_1);
  *param_3 = uVar5;
  return 0;
}


