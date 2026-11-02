/* Module: pncrt.dll
   Function: FUN_7801c930
   Address: 7801c930
   Source: Ghidra pseudocode (Stage 10 batch) */


LPWSTR __cdecl FUN_7801c930(int param_1,LPCWSTR param_2,LPWSTR param_3,LPVOID param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  WCHAR WVar3;
  bool bVar4;
  uint uVar5;
  LPWSTR lpCommandLine;
  WCHAR *pWVar6;
  WCHAR *pWVar7;
  uint *puVar8;
  BOOL BVar9;
  DWORD DVar10;
  int *piVar11;
  ulong *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  _STARTUPINFOW *p_Var17;
  uint *puVar18;
  _PROCESS_INFORMATION local_54;
  _STARTUPINFOW local_44;
  
  lpCommandLine = param_3;
  uVar16 = 0;
  bVar4 = false;
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
    goto switchD_7801c94a_caseD_0;
  case 4:
    bVar4 = true;
switchD_7801c94a_caseD_0:
    WVar3 = *param_3;
    pWVar7 = param_3;
    break;
  default:
    piVar11 = _errno();
    *piVar11 = 0x16;
    puVar12 = __doserrno();
    *puVar12 = 0;
    return (LPWSTR)0xffffffff;
  }
  while (WVar3 != L'\0') {
    do {
      pWVar6 = pWVar7;
      pWVar7 = pWVar6 + 1;
    } while (*pWVar7 != L'\0');
    if (pWVar6[2] != L'\0') {
      *pWVar7 = L' ';
      pWVar7 = pWVar6 + 2;
    }
    WVar3 = *pWVar7;
  }
  p_Var17 = &local_44;
  for (iVar13 = 0x11; iVar13 != 0; iVar13 = iVar13 + -1) {
    p_Var17->cb = 0;
    p_Var17 = (_STARTUPINFOW *)&p_Var17->lpReserved;
  }
  local_44.cb = 0x44;
  uVar14 = DAT_78042840;
  do {
    uVar5 = uVar14;
    if (uVar5 == 0) break;
    uVar14 = uVar5 - 1;
  } while (*(char *)((&__pioinfo)[(int)uVar14 >> 5] + 4 + (uVar14 & 0x1f) * 0x24) == '\0');
  local_44.cbReserved2 = (short)uVar5 * 5 + 4;
  puVar8 = calloc((uint)local_44.cbReserved2,1);
  local_44.lpReserved2._0_2_ = SUB42(puVar8,0);
  local_44.lpReserved2._2_2_ = (undefined2)((uint)puVar8 >> 0x10);
  *puVar8 = uVar5;
  uVar14 = 0;
  puVar18 = puVar8 + 1;
  puVar15 = (undefined4 *)(uVar5 + 4 + (int)puVar8);
  if (0 < (int)uVar5) {
    do {
      puVar1 = (undefined4 *)((&__pioinfo)[(int)uVar14 >> 5] + (uVar14 & 0x1f) * 0x24);
      bVar2 = *(byte *)(puVar1 + 1);
      if ((bVar2 & 0x10) == 0) {
        *(byte *)puVar18 = bVar2;
        *puVar15 = *puVar1;
      }
      else {
        *(undefined1 *)puVar18 = 0;
        *puVar15 = 0xffffffff;
      }
      uVar14 = uVar14 + 1;
      puVar18 = (uint *)((int)puVar18 + 1);
      puVar15 = puVar15 + 1;
    } while ((int)uVar14 < (int)uVar5);
  }
  if (bVar4) {
    iVar13 = 0;
    puVar18 = puVar8 + 1;
    puVar15 = (undefined4 *)(uVar5 + 4 + (int)puVar8);
    while( true ) {
      uVar16 = uVar5;
      if (2 < (int)uVar5) {
        uVar16 = 3;
      }
      if ((int)uVar16 <= iVar13) break;
      *(undefined1 *)puVar18 = 0;
      iVar13 = iVar13 + 1;
      *puVar15 = 0xffffffff;
      puVar18 = (uint *)((int)puVar18 + 1);
      puVar15 = puVar15 + 1;
    }
    uVar16 = 8;
  }
  piVar11 = _errno();
  *piVar11 = 0;
  puVar12 = __doserrno();
  *puVar12 = 0;
  BVar9 = CreateProcessW(param_2,lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0
                         ,1,uVar16 | 0x400,param_4,(LPCWSTR)0x0,&local_44,&local_54);
  DVar10 = GetLastError();
  free((void *)CONCAT22(local_44.lpReserved2._2_2_,local_44.lpReserved2._0_2_));
  if (BVar9 == 0) {
    FUN_7800a870(DVar10);
    return (LPWSTR)0xffffffff;
  }
  if (param_1 == 2) {
                    /* WARNING: Subroutine does not return */
    _exit(0);
  }
  if (param_1 == 0) {
    WaitForSingleObject(local_54.hProcess,0xffffffff);
    GetExitCodeProcess(local_54.hProcess,(LPDWORD)&param_3);
    CloseHandle(local_54.hProcess);
    CloseHandle(local_54.hThread);
    return param_3;
  }
  if (param_1 == 4) {
    CloseHandle(local_54.hProcess);
    param_3 = (LPWSTR)0x0;
    CloseHandle(local_54.hThread);
    return param_3;
  }
  param_3 = local_54.hProcess;
  CloseHandle(local_54.hThread);
  return param_3;
}


