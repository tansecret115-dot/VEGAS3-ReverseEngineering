/* Module: sfppack1.dll
   Function: FUN_5cdb3740
   Address: 5cdb3740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cdb3740(int param_1,undefined4 *param_2)

{
  double *pdVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  pdVar1 = (double *)(param_1 + 0x20);
  pdVar6 = pdVar1;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pdVar6 = *param_2;
    param_2 = param_2 + 1;
    pdVar6 = (double *)((int)pdVar6 + 4);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x48) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (_DAT_5ce12be0 <= *pdVar1) {
    if (*pdVar1 <= _DAT_5ce12bd8) {
      bVar3 = true;
    }
    else {
      *(undefined4 *)pdVar1 = 0;
      *(undefined4 *)(param_1 + 0x24) = 0x40e86a00;
      bVar3 = false;
    }
  }
  else {
    *(undefined4 *)pdVar1 = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x40b38800;
    bVar3 = false;
  }
  bVar2 = 50000 < *(uint *)(param_1 + 0x2c);
  if (bVar2) {
    *(undefined4 *)(param_1 + 0x2c) = 50000;
  }
  iVar5 = FUN_5cdb3830(param_1);
  iVar4 = FUN_5cdb3870();
  LeaveCriticalSection(lpCriticalSection);
  if ((uint)bVar2 + (uint)!bVar3 + (2 - (uint)(iVar5 != 0)) != (uint)(iVar4 != 0)) {
    LeaveCriticalSection(lpCriticalSection);
    return 0x80004005;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


