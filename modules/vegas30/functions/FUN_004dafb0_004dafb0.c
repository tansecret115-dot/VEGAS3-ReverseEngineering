/* Module: vegas30.exe
   Function: FUN_004dafb0
   Address: 004dafb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004dafb0(undefined4 param_1,undefined4 param_2,uchar *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,int *param_8)

{
  int *piVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  int local_b4;
  LPCRITICAL_SECTION local_b0;
  int local_ac;
  undefined4 local_a8 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  
  piVar1 = (int *)FUN_005b8760(param_1);
  DVar2 = GetCurrentThreadId();
  bVar6 = DVar2 == DAT_00647208;
  if (param_8 == (int *)0x0) {
    param_8 = &local_ac;
  }
  *param_8 = -1;
  if (piVar1 == (int *)0x0) {
    return -0x7fffbffb;
  }
  local_b0 = (LPCRITICAL_SECTION)(piVar1 + 3);
  EnterCriticalSection(local_b0);
  if (bVar6) {
    iVar4 = *piVar1;
    local_b4 = 0;
    if (0 < iVar4) {
      do {
        iVar3 = *(int *)(piVar1[2] + local_b4 * 4);
        if (iVar3 == 0) {
          *param_8 = -1;
          iVar4 = 1;
          goto LAB_004db144;
        }
        iVar3 = lstrcmpiA(*(LPCSTR *)(iVar3 + 0xa4),(LPCSTR)param_3);
        if (iVar3 == 0) {
          iVar4 = 1;
          *param_8 = local_b4;
          goto LAB_004db144;
        }
        local_b4 = local_b4 + 1;
      } while (local_b4 < iVar4);
    }
    if (param_3 == (uchar *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = lstrlenA((LPCSTR)param_3);
      iVar4 = iVar4 + 1;
    }
    puVar5 = local_a8;
    for (iVar3 = 0x2a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_a8[1] = param_5;
    local_a8[0] = param_4;
    local_a8[3] = param_7;
    local_a8[2] = param_6;
    local_88 = 0;
    local_84 = 0;
    local_80 = 0;
    local_7c = 0;
    iVar4 = _SfList_AllocAndInsertItem_20(piVar1,local_a8,iVar4 + 0xa8,0,&local_b4);
    if (-1 < iVar4) {
      *param_8 = local_b4;
      iVar4 = *(int *)(piVar1[2] + local_b4 * 4);
      *(uchar **)(iVar4 + 0xa4) = (uchar *)(iVar4 + 0xa8);
      _mbscpy((uchar *)(iVar4 + 0xa8),param_3);
      if (((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0x70) != 0)) &&
         (iVar3 = *(int *)(*(int *)(DAT_0064762c + 0x70) + 0xf1c), iVar3 != 0)) {
        FUN_004daed0(iVar3,1,iVar4);
      }
      iVar4 = 0;
    }
  }
  else {
    iVar4 = -0x7fffbffb;
  }
LAB_004db144:
  LeaveCriticalSection(local_b0);
  return iVar4;
}


