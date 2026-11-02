/* Module: rmme3260.dll
   Function: FUN_66251ab0
   Address: 66251ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66251ab0(int param_1,undefined4 *param_2,undefined4 *param_3)

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
  FUN_66252bf0(this,piVar1,param_2,&param_1);
  puVar4 = (undefined4 *)FUN_66252150(param_1);
  *puVar3 = *puVar4;
  uVar5 = FUN_662521e0(param_1);
  *param_3 = uVar5;
  return 0;
}


