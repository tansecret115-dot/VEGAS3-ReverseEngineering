/* Module: sfcd.cdd
   Function: FUN_00416e70
   Address: 00416e70
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00416e70(undefined4 param_1,HSFCD__ *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0x160);
  FUN_00416c60(param_2);
  uVar2 = cdr_GetSpeed(param_2,0);
  if (*(uint *)(iVar1 + 0x1dc) == uVar2) {
    return 0;
  }
  *(uint *)(iVar1 + 0x1dc) = uVar2;
  lVar3 = FUN_00416d70(param_2,*(undefined4 *)(param_3 + 0xc));
  return lVar3;
}


