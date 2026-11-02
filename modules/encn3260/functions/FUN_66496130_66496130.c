/* Module: encn3260.dll
   Function: FUN_66496130
   Address: 66496130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66496130(undefined4 *param_1)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_8;
  
  (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,&local_14);
  if (local_10 < 1000000) {
    local_8 = local_10;
  }
  else {
    local_14 = local_10 / 1000000 + local_14;
    local_8 = local_10 % 1000000;
  }
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = 1;
  iVar1 = local_14 - *(int *)((int)param_1 + 0x1ae);
  for (iVar3 = local_8 - *(int *)((int)param_1 + 0x1b2); iVar3 < 0; iVar3 = iVar3 + 1000000) {
    iVar1 = iVar1 + -1;
  }
  *(int *)((int)param_1 + 0x1be) = *(int *)((int)param_1 + 0x1be) + iVar1;
  iVar3 = *(int *)((int)param_1 + 0x1c2) + iVar3;
  *(int *)((int)param_1 + 0x1c2) = iVar3;
  while (999999 < iVar3) {
    iVar3 = *(int *)((int)param_1 + 0x1c2) + -1000000;
    *(int *)((int)param_1 + 0x1be) = *(int *)((int)param_1 + 0x1be) + 1;
    *(int *)((int)param_1 + 0x1c2) = iVar3;
  }
  *(int *)((int)param_1 + 0x1ae) = local_14;
  *(int *)((int)param_1 + 0x1b2) = local_8;
  iVar1 = local_14 - *(int *)((int)param_1 + 0x1ce);
  for (iVar3 = local_8 - *(int *)((int)param_1 + 0x1d2); iVar3 < 0; iVar3 = iVar3 + 1000000) {
    iVar1 = iVar1 + -1;
  }
  *(int *)((int)param_1 + 0x1de) = *(int *)((int)param_1 + 0x1de) + iVar1;
  iVar3 = *(int *)((int)param_1 + 0x1e2) + iVar3;
  *(int *)((int)param_1 + 0x1e2) = iVar3;
  while (999999 < iVar3) {
    iVar3 = *(int *)((int)param_1 + 0x1e2) + -1000000;
    *(int *)((int)param_1 + 0x1de) = *(int *)((int)param_1 + 0x1de) + 1;
    *(int *)((int)param_1 + 0x1e2) = iVar3;
  }
  *(int *)((int)param_1 + 0x1ce) = local_14;
  *(int *)((int)param_1 + 0x1d2) = local_8;
  DVar2 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x1fe) = DVar2;
  *(undefined4 *)((int)param_1 + 0x18a) = *(undefined4 *)((int)param_1 + 0x182);
  *(undefined4 *)((int)param_1 + 0x18e) = *(undefined4 *)((int)param_1 + 0x186);
  return;
}


