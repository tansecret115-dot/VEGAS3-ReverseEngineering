/* Module: sfxpfx1.dll
   Function: FUN_5c984940
   Address: 5c984940
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c984940(int param_1)

{
  int iVar1;
  HMODULE hModule;
  int iVar2;
  undefined4 *puVar3;
  int local_38;
  HLOCAL local_34;
  undefined4 local_30;
  HLOCAL local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined4 auStack_20 [5];
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iVar2 = 0;
  local_30 = 0;
  local_34 = (HLOCAL)0x0;
  local_2c = (HLOCAL)0x0;
  local_38 = 0;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_25 = 0;
  local_24 = 0;
  local_23 = 1;
  if (param_1 == 0) {
    return 0x57;
  }
  iVar1 = FUN_5c984760();
  if (iVar1 == 0) {
    return 0;
  }
  hModule = GetModuleHandleA("advapi32.dll");
  if (hModule == (HMODULE)0x0) {
    return -0x7fffbffb;
  }
  if (DAT_5c99f01c == 0) {
    DAT_5c99f020 = GetProcAddress(hModule,"SetSecurityInfo");
    DAT_5c99f024 = GetProcAddress(hModule,"GetSecurityInfo");
    DAT_5c99f028 = GetProcAddress(hModule,"AllocateAndInitializeSid");
    DAT_5c99f02c = GetProcAddress(hModule,"FreeSid");
    DAT_5c99f030 = GetProcAddress(hModule,"SetEntriesInAclA");
    DAT_5c99f01c = 1;
  }
  if ((((DAT_5c99f020 != (FARPROC)0x0) && (DAT_5c99f024 != (FARPROC)0x0)) &&
      (DAT_5c99f028 != (FARPROC)0x0)) &&
     ((DAT_5c99f030 != (FARPROC)0x0 && (DAT_5c99f02c != (FARPROC)0x0)))) {
    iVar2 = (*DAT_5c99f024)(param_1,4,4,0,0,&local_30,0,&local_2c);
    if (iVar2 == 0) {
      iVar2 = (*DAT_5c99f028)(&local_28,1,0,0,0,0,0,0,0,0,&local_38);
      if (iVar2 == 0) {
        iVar2 = -0x7fffbffb;
      }
      else {
        puVar3 = auStack_20;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        iStack_4 = local_38;
        auStack_20[0] = 0xf003f;
        auStack_20[1] = 2;
        auStack_20[2] = 3;
        uStack_c = 0;
        uStack_8 = 5;
        iVar2 = (*DAT_5c99f030)(1,auStack_20,local_30,&local_34);
        if (iVar2 == 0) {
          iVar2 = (*DAT_5c99f020)(param_1,4,4,0,0,local_34,0);
        }
      }
    }
  }
  if (local_2c != (HLOCAL)0x0) {
    LocalFree(local_2c);
  }
  if ((local_38 != 0) && (DAT_5c99f02c != (FARPROC)0x0)) {
    (*DAT_5c99f02c)(local_38);
  }
  if (local_34 != (HLOCAL)0x0) {
    LocalFree(local_34);
  }
  return iVar2;
}


