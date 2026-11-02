/* Module: vidcap30.exe
   Function: FUN_00498230
   Address: 00498230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00498230(int param_1,undefined4 param_2)

{
  HDWP hWinPosInfo;
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_78;
  undefined4 local_70 [4];
  int local_60 [24];
  
  puVar5 = local_70;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (*(int *)(param_1 + 0x4c8) != 0) {
    *(int *)(param_1 + 0x4c8) =
         *(int *)(param_1 + 0xc1c) + *(int *)(param_1 + 0xc18) + *(int *)(param_1 + 0x4c4);
  }
  puVar5 = (undefined4 *)(param_1 + 0x10);
  local_78 = 0;
  piVar2 = local_60;
  ppuVar3 = &PTR_FUN_005b6d1c;
  puVar4 = puVar5;
  do {
    iVar1 = (*(code *)*ppuVar3)(param_1,*puVar4,5,piVar2,param_2);
    if (iVar1 != 0) {
      local_78 = local_78 + 1;
    }
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
    piVar2 = piVar2 + 4;
  } while (ppuVar3 < &DAT_005b6d34);
  if (local_78 != 0) {
    hWinPosInfo = BeginDeferWindowPos(local_78);
    piVar2 = local_60 + 2;
    local_78 = 6;
    do {
      if ((((piVar2[-2] != 0) || (piVar2[-1] != 0)) || (*piVar2 != 0)) || (piVar2[1] != 0)) {
        DeferWindowPos(hWinPosInfo,(HWND)*puVar5,(HWND)0x0,piVar2[-2],piVar2[-1],*piVar2,piVar2[1],
                       0x214);
      }
      puVar5 = puVar5 + 1;
      piVar2 = piVar2 + 4;
      local_78 = local_78 + -1;
    } while (local_78 != 0);
    EndDeferWindowPos(hWinPosInfo);
  }
  return;
}


