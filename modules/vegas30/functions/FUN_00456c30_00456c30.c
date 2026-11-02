/* Module: vegas30.exe
   Function: FUN_00456c30
   Address: 00456c30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456c30(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined8 uVar6;
  double local_18;
  
  iVar3 = 0;
  local_18 = 0.0;
  if (0 < *(int *)(param_1 + 0xd94)) {
    piVar4 = (int *)(param_1 + 0xd88);
    do {
      if ((((*piVar4 != 0) && (*(int *)(*piVar4 + 4) == 3)) && (*(int *)(param_1 + 0xd50) != 0)) &&
         (iVar1 = FUN_005f13f0(3), iVar1 != 0)) {
        local_18 = *(double *)(iVar1 + 0x48);
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xd94));
    if (local_18 != _DAT_00610fd8) goto LAB_00456ce7;
  }
  iVar3 = *(int *)(param_1 + 0xbc8);
  if ((*(int *)(param_1 + 0xbc8) != 0) || (iVar3 = DAT_0064b138, DAT_0064b138 != 0)) {
    uVar2 = FUN_005ba4b0(iVar3,0);
    fVar5 = (float10)FUN_005b8c00(iVar3,uVar2);
    local_18 = (double)fVar5;
  }
  if (local_18 == _DAT_00610fd8) {
    return;
  }
LAB_00456ce7:
  ftol();
  uVar6 = ftol();
  *param_2 = uVar6;
  uVar6 = ftol();
  *param_3 = uVar6;
  return;
}


