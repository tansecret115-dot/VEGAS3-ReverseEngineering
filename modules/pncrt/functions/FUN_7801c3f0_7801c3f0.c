/* Module: pncrt.dll
   Function: FUN_7801c3f0
   Address: 7801c3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR __cdecl FUN_7801c3f0(int param_1,LPCSTR param_2,LPSTR param_3,LPVOID param_4)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  LPSTR lpCommandLine;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  BOOL BVar9;
  int *piVar10;
  ulong *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  DWORD DVar15;
  _STARTUPINFOA *p_Var16;
  uint *puVar17;
  _PROCESS_INFORMATION local_54;
  _STARTUPINFOA local_44;
  
  lpCommandLine = param_3;
  DVar15 = 0;
  bVar4 = false;
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
    goto switchD_7801c40a_caseD_0;
  case 4:
    bVar4 = true;
switchD_7801c40a_caseD_0:
    cVar2 = *param_3;
    pcVar7 = param_3;
    break;
  default:
    piVar10 = _errno();
    *piVar10 = 0x16;
    puVar11 = __doserrno();
    *puVar11 = 0;
    return (LPSTR)0xffffffff;
  }
  while (cVar2 != '\0') {
    do {
      pcVar6 = pcVar7;
      pcVar7 = pcVar6 + 1;
    } while (pcVar6[1] != '\0');
    if (pcVar6[2] != '\0') {
      *pcVar7 = ' ';
      pcVar7 = pcVar6 + 2;
    }
    cVar2 = *pcVar7;
  }
  p_Var16 = &local_44;
  for (iVar12 = 0x11; iVar12 != 0; iVar12 = iVar12 + -1) {
    p_Var16->cb = 0;
    p_Var16 = (_STARTUPINFOA *)&p_Var16->lpReserved;
  }
  local_44.cb = 0x44;
  uVar13 = DAT_78042840;
  do {
    uVar5 = uVar13;
    if (uVar5 == 0) break;
    uVar13 = uVar5 - 1;
  } while (*(char *)((&__pioinfo)[(int)uVar13 >> 5] + 4 + (uVar13 & 0x1f) * 0x24) == '\0');
  local_44.cbReserved2 = (short)uVar5 * 5 + 4;
  puVar8 = calloc((uint)local_44.cbReserved2,1);
  local_44.lpReserved2._0_2_ = SUB42(puVar8,0);
  local_44.lpReserved2._2_2_ = (undefined2)((uint)puVar8 >> 0x10);
  *puVar8 = uVar5;
  uVar13 = 0;
  puVar17 = puVar8 + 1;
  puVar14 = (undefined4 *)(uVar5 + 4 + (int)puVar8);
  if (0 < (int)uVar5) {
    do {
      puVar1 = (undefined4 *)((&__pioinfo)[(int)uVar13 >> 5] + (uVar13 & 0x1f) * 0x24);
      bVar3 = *(byte *)(puVar1 + 1);
      if ((bVar3 & 0x10) == 0) {
        *(byte *)puVar17 = bVar3;
        *puVar14 = *puVar1;
      }
      else {
        *(undefined1 *)puVar17 = 0;
        *puVar14 = 0xffffffff;
      }
      uVar13 = uVar13 + 1;
      puVar17 = (uint *)((int)puVar17 + 1);
      puVar14 = puVar14 + 1;
    } while ((int)uVar13 < (int)uVar5);
  }
  if (bVar4) {
    iVar12 = 0;
    puVar17 = puVar8 + 1;
    puVar14 = (undefined4 *)(uVar5 + 4 + (int)puVar8);
    while( true ) {
      uVar13 = uVar5;
      if (2 < (int)uVar5) {
        uVar13 = 3;
      }
      if ((int)uVar13 <= iVar12) break;
      *(undefined1 *)puVar17 = 0;
      iVar12 = iVar12 + 1;
      *puVar14 = 0xffffffff;
      puVar17 = (uint *)((int)puVar17 + 1);
      puVar14 = puVar14 + 1;
    }
    DVar15 = 8;
  }
  piVar10 = _errno();
  *piVar10 = 0;
  puVar11 = __doserrno();
  *puVar11 = 0;
  BVar9 = CreateProcessA(param_2,lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0
                         ,1,DVar15,param_4,(LPCSTR)0x0,&local_44,&local_54);
  DVar15 = GetLastError();
  free((void *)CONCAT22(local_44.lpReserved2._2_2_,local_44.lpReserved2._0_2_));
  if (BVar9 == 0) {
    FUN_7800a870(DVar15);
    return (LPSTR)0xffffffff;
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
    param_3 = (LPSTR)0x0;
    CloseHandle(local_54.hThread);
    return param_3;
  }
  param_3 = local_54.hProcess;
  CloseHandle(local_54.hThread);
  return param_3;
}


