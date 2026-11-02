/* Module: erv33260.dll
   Function: FUN_6708dfd0
   Address: 6708dfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6708dfd0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_24 [6];
  int local_c;
  int *local_8;
  
  piVar1 = (int *)(param_1 + 0x10);
  local_8 = local_24;
  local_c = 4;
  do {
    piVar2 = (int *)*local_8;
    iVar5 = *piVar2 + piVar2[3];
    iVar7 = *piVar2 - piVar2[3];
    iVar9 = piVar2[1] + piVar2[2];
    iVar6 = piVar2[1] - piVar2[2];
    *piVar2 = (iVar5 + iVar9) * 0xd;
    piVar2[1] = iVar6 * 7 + iVar7 * 0x11;
    piVar2[2] = (iVar5 - iVar9) * 0xd;
    piVar2[3] = iVar7 * 7 + iVar6 * -0x11;
    local_8 = local_8 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  iVar9 = (param_1 + 0x20) - (int)piVar1;
  iVar5 = (param_1 + 0x30) - (int)piVar1;
  local_8 = (int *)0x4;
  piVar2 = piVar1;
  do {
    iVar4 = *(int *)((param_1 - (int)piVar1) + (int)piVar2);
    iVar7 = *(int *)(iVar5 + (int)piVar2);
    iVar8 = *(int *)(iVar9 + (int)piVar2);
    piVar3 = piVar2 + 1;
    iVar6 = iVar7 + iVar4;
    iVar4 = iVar4 - iVar7;
    iVar7 = iVar8 + *piVar2;
    iVar8 = *piVar2 - iVar8;
    *(int *)((param_1 - (int)piVar1) + -4 + (int)piVar3) = (iVar6 + iVar7) * 0xd;
    *piVar2 = iVar8 * 7 + iVar4 * 0x11;
    *(int *)(iVar9 + -4 + (int)piVar3) = (iVar6 - iVar7) * 0xd;
    *(int *)(iVar5 + -4 + (int)piVar3) = iVar4 * 7 + iVar8 * -0x11;
    local_8 = (int *)((int)local_8 + -1);
    piVar2 = piVar3;
  } while (local_8 != (int *)0x0);
  return;
}


