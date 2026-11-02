/* Module: encn3260.dll
   Function: FUN_66490be0
   Address: 66490be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66490be0(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)((int)param_1 + 0x9a) == 0) {
    (**(code **)(**(int **)((int)param_1 + 0x10) + 0x18))(*(int **)((int)param_1 + 0x10),&local_1c);
    if (local_18 < 1000000) {
      local_8 = local_18;
      iVar5 = local_1c;
    }
    else {
      local_8 = local_18 % 1000000;
      iVar5 = local_18 / 1000000 + local_1c;
    }
    iVar4 = iVar5 - **(int **)((int)param_1 + 0x8a);
    for (iVar2 = local_8 - (*(int **)((int)param_1 + 0x8a))[1]; iVar2 < 0; iVar2 = iVar2 + 1000000)
    {
      iVar4 = iVar4 + -1;
    }
    local_14 = 0;
    local_18 = *(int *)((int)param_1 + 0x86) * 1000;
    local_10 = local_18;
    if (999999 < local_18) {
      local_14 = local_18 / 1000000;
      local_10 = local_18 % 1000000;
    }
    local_c = iVar5;
    if ((local_14 < iVar4) || ((iVar4 == local_14 && (local_10 <= iVar2)))) {
      FUN_66491a60(param_1);
      piVar1 = *(int **)((int)param_1 + 0x8a);
      local_1c = 0;
      *piVar1 = iVar5;
      piVar1[1] = local_8;
      local_18 = *(int *)((int)param_1 + 0x82) * 1000;
      if (999999 < local_18) {
        local_1c = local_18 / 1000000;
        local_18 = local_18 % 1000000;
      }
      local_1c = local_1c + iVar5;
      for (local_18 = local_18 + local_8; 999999 < local_18; local_18 = local_18 + -1000000) {
        local_1c = local_1c + 1;
      }
    }
    else {
      local_1c = 0;
      if (999999 < local_18) {
        local_1c = local_18 / 1000000;
        local_18 = local_18 % 1000000;
      }
      local_1c = local_1c - iVar4;
      for (local_18 = local_18 - iVar2; local_18 < 0; local_18 = local_18 + 1000000) {
        local_1c = local_1c + -1;
      }
    }
    if (*(int *)((int)param_1 + 0x9a) == 0) {
      *(undefined4 *)((int)param_1 + 0x9a) = 1;
      uVar3 = (**(code **)(**(int **)((int)param_1 + 0x10) + 0x10))
                        (*(int **)((int)param_1 + 0x10),*(undefined4 *)((int)param_1 + 0x92),
                         local_1c,local_18);
      *(undefined4 *)((int)param_1 + 0x8e) = uVar3;
    }
  }
  return;
}


