/* Module: oggplug.dll
   Function: FUN_004324d0
   Address: 004324d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004324d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_14 [5];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  FUN_00441de0(local_14,*param_2,param_2[1]);
  uVar2 = FUN_00442100(local_14,1);
  if (uVar2 != 0) {
    return 0xffffff79;
  }
  iVar4 = 0;
  for (iVar3 = *(int *)(iVar1 + 8); 1 < iVar3; iVar3 = iVar3 >> 1) {
    iVar4 = iVar4 + 1;
  }
  uVar2 = FUN_00442100(local_14,iVar4);
  if (uVar2 != 0xffffffff) {
    return *(undefined4 *)(iVar1 + **(int **)(iVar1 + 0x24 + uVar2 * 4) * 4);
  }
  return 0xffffff78;
}


