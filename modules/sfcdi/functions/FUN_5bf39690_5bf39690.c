/* Module: sfcdi.dll
   Function: FUN_5bf39690
   Address: 5bf39690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf39690(uint *param_1)

{
  int *piVar1;
  bool bVar2;
  LPCSTR pCVar3;
  undefined3 extraout_var;
  int iVar4;
  uint uVar5;
  uint local_84;
  uchar local_80 [128];
  
  uVar5 = 0;
  iVar4 = 1;
  if (param_1 == (uint *)0x0) {
    local_84 = 0;
  }
  else {
    local_84 = *param_1;
  }
  if ((int)local_84 < 1) {
    return 0;
  }
  do {
    piVar1 = *(int **)(param_1[2] + uVar5 * 4);
    if (*piVar1 == 3) {
      pCVar3 = (LPCSTR)FUN_5bf39820((int)piVar1);
      bVar2 = FUN_5bf39650(piVar1,pCVar3);
      piVar1[1] = iVar4;
      if (CONCAT31(extraout_var,bVar2) != 0) {
        FUN_5bf395a0(piVar1,local_80);
        FUN_5bf39510(param_1,uVar5,(int)piVar1,local_80);
      }
      iVar4 = iVar4 + 1;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < (int)local_84);
  return 0;
}


