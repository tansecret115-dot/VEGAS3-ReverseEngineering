/* Module: sfpagepeel.dll
   Function: FUN_004112a0
   Address: 004112a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004112a0(void *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 local_c;
  
  iVar2 = param_1 - (int)param_2;
  iVar3 = (int)this - param_1;
  local_c = 1;
  piVar6 = (int *)(param_1 + 0xc);
  param_1 = 4;
  piVar1 = param_2;
  do {
    piVar5 = piVar1 + 2;
    iVar4 = *(int *)(iVar2 + (int)piVar5);
    if (iVar4 <= *piVar5) {
      iVar4 = *piVar5;
    }
    *(int *)((int)piVar5 + ((int)this - (int)param_2)) = iVar4;
    iVar4 = *piVar6;
    if (piVar1[3] <= *piVar6) {
      iVar4 = piVar1[3];
    }
    *(int *)(iVar3 + (int)piVar6) = iVar4;
    if (iVar4 <= *(int *)((int)piVar5 + ((int)this - (int)param_2))) {
      local_c = 0;
      puVar7 = (undefined4 *)((int)this + 8);
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    piVar6 = piVar6 + 2;
    param_1 = param_1 + -1;
    piVar1 = piVar5;
  } while (param_1 != 0);
  return local_c;
}


