/* Module: sdpp3260.dll
   Function: FUN_100023a0
   Address: 100023a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_100023a0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *this;
  
  puVar3 = param_2;
  piVar1 = (int *)(param_1 + 0x68);
  iVar2 = -(uint)(*(int *)(param_1 + 0x48) != 0);
  *piVar1 = iVar2;
  if (iVar2 == 0) {
    return 0x80004005;
  }
  this = (void *)(param_1 + 0x40);
  param_1 = 0;
  FUN_10006460(this,piVar1,param_2,&param_1);
  puVar4 = (undefined4 *)FUN_100024c0(param_1);
  *puVar3 = *puVar4;
  uVar5 = FUN_100025f0(param_1);
  *param_3 = uVar5;
  return 0;
}


