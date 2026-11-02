/* Module: mcplugrw.dll
   Function: FUN_00450a30
   Address: 00450a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00450a30(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_4;
  
  piVar3 = param_1;
  local_4 = 0;
  if (0 < *(int *)((int)param_1 + 0x14d)) {
    param_1 = (int *)((int)param_1 + 0x151);
    do {
      iVar1 = *param_1;
      if (*(int *)(iVar1 + 0x49) == 0) {
        iVar2 = *(int *)(iVar1 + 0x10);
        if (((iVar2 < 0) || (3 < iVar2)) || (*(int *)((int)piVar3 + iVar2 * 4 + 0xc2) == 0)) {
          *(undefined4 *)(*piVar3 + 0x14) = 0x33;
          *(int *)(*piVar3 + 0x18) = iVar2;
          (**(code **)*piVar3)(piVar3);
        }
        puVar4 = (undefined4 *)(**(code **)piVar3[1])(piVar3,1,0x81);
        puVar6 = *(undefined4 **)((int)piVar3 + iVar2 * 4 + 0xc2);
        puVar7 = puVar4;
        for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        *(undefined4 **)(iVar1 + 0x49) = puVar4;
      }
      local_4 = local_4 + 1;
      param_1 = param_1 + 1;
    } while (local_4 < *(int *)((int)piVar3 + 0x14d));
  }
  return;
}


