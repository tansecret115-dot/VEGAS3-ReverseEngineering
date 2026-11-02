/* Module: encn3260.dll
   Function: FUN_66496000
   Address: 66496000
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66496000(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,&local_c);
  if (999999 < local_8) {
    local_c = local_8 / 1000000 + local_c;
    local_8 = local_8 % 1000000;
  }
  *(undefined4 *)((int)param_1 + 0x4e) = 1;
  iVar1 = local_c - *(int *)((int)param_1 + 0x1ae);
  for (iVar2 = local_8 - *(int *)((int)param_1 + 0x1b2); iVar2 < 0; iVar2 = iVar2 + 1000000) {
    iVar1 = iVar1 + -1;
  }
  *(int *)((int)param_1 + 0x1b6) = *(int *)((int)param_1 + 0x1b6) + iVar1;
  iVar2 = *(int *)((int)param_1 + 0x1ba) + iVar2;
  *(int *)((int)param_1 + 0x1ba) = iVar2;
  while (999999 < iVar2) {
    iVar2 = *(int *)((int)param_1 + 0x1ba) + -1000000;
    *(int *)((int)param_1 + 0x1b6) = *(int *)((int)param_1 + 0x1b6) + 1;
    *(int *)((int)param_1 + 0x1ba) = iVar2;
  }
  *(int *)((int)param_1 + 0x1ae) = local_c;
  *(int *)((int)param_1 + 0x1b2) = local_8;
  iVar1 = local_c - *(int *)((int)param_1 + 0x1ce);
  for (iVar2 = local_8 - *(int *)((int)param_1 + 0x1d2); iVar2 < 0; iVar2 = iVar2 + 1000000) {
    iVar1 = iVar1 + -1;
  }
  *(int *)((int)param_1 + 0x1d6) = *(int *)((int)param_1 + 0x1d6) + iVar1;
  iVar2 = *(int *)((int)param_1 + 0x1da) + iVar2;
  *(int *)((int)param_1 + 0x1da) = iVar2;
  while (999999 < iVar2) {
    iVar2 = *(int *)((int)param_1 + 0x1da) + -1000000;
    *(int *)((int)param_1 + 0x1d6) = *(int *)((int)param_1 + 0x1d6) + 1;
    *(int *)((int)param_1 + 0x1da) = iVar2;
  }
  *(int *)((int)param_1 + 0x1ce) = local_c;
  *(int *)((int)param_1 + 0x1d2) = local_8;
  return;
}


