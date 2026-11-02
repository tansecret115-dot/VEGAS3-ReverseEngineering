/* Module: pngu3266.dll
   Function: FUN_6061b150
   Address: 6061b150
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6061b150(HKEY param_1)

{
  HKEY pHVar1;
  
  pHVar1 = param_1;
  thunk_FUN_60618b70(&param_1->unused);
  param_1 = (HKEY)0x0;
  RegOpenKeyA((HKEY)0x80000002,s_System_CurrentControlSet_Service_606495c8,&param_1);
  if (param_1 != (HKEY)0x0) {
    FUN_6061b2c0(param_1,s_NameServer_606495bc,&pHVar1->unused);
    if (*(int *)(pHVar1->unused + -8) == 0) {
      FUN_6061b2c0(param_1,s_DhcpNameServer_606495ac,&pHVar1->unused);
    }
    RegCloseKey(param_1);
  }
  if (*(int *)(pHVar1->unused + -8) == 0) {
    RegOpenKeyA((HKEY)0x80000002,s_System_CurrentControlSet_Service_60649580,&param_1);
    if (param_1 != (HKEY)0x0) {
      FUN_6061b2c0(param_1,s_NameServer_606495bc,&pHVar1->unused);
      if (*(int *)(pHVar1->unused + -8) == 0) {
        FUN_6061b2c0(param_1,s_DhcpNameServer_606495ac,&pHVar1->unused);
      }
      RegCloseKey(param_1);
    }
  }
  if (*(int *)(pHVar1->unused + -8) == 0) {
    RegOpenKeyA((HKEY)0x80000002,s_System_CurrentControlSet_Service_6064954c,&param_1);
    if (param_1 != (HKEY)0x0) {
      FUN_6061b2c0(param_1,s_NameServer_606495bc,&pHVar1->unused);
      if (*(int *)(pHVar1->unused + -8) == 0) {
        FUN_6061b2c0(param_1,s_DhcpNameServer_606495ac,&pHVar1->unused);
      }
      RegCloseKey(param_1);
    }
  }
  if (*(int *)(pHVar1->unused + -8) == 0) {
    RegOpenKeyA((HKEY)0x80000002,s_System_CurrentControlSet_Service_60649524,&param_1);
    if (param_1 != (HKEY)0x0) {
      FUN_6061b2c0(param_1,s_NameServer_606495bc,&pHVar1->unused);
      if (*(int *)(pHVar1->unused + -8) == 0) {
        FUN_6061b2c0(param_1,s_DhcpNameServer_606495ac,&pHVar1->unused);
      }
      RegCloseKey(param_1);
    }
  }
  return;
}


