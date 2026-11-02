/* Module: sfconfigmgr.dll
   Function: FUN_00402540
   Address: 00402540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00402540(void *this,int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = 0;
  piVar3 = *(int **)((int)this + 0xc);
  if ((piVar3 != (int *)0x0) && (iVar4 = 0, 0 < *piVar3)) {
    do {
      iVar1 = *(int *)(piVar3[2] + iVar4 * 4);
      if (iVar1 != 0) {
        uVar2 = FUN_00401e60(param_1,param_2,*(int **)(iVar1 + 0x150),(short *)(iVar1 + 0x50),
                             iVar1 + 0xd0,*(int *)(iVar1 + 0x154),*(int *)(iVar1 + 0x158));
      }
      piVar3 = *(int **)((int)this + 0xc);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *piVar3);
  }
  return uVar2;
}


