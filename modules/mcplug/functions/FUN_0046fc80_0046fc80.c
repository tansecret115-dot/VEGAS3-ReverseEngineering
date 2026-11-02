/* Module: mcplug.dll
   Function: FUN_0046fc80
   Address: 0046fc80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046fc80(int param_1)

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
  iVar1 = FUN_0046faa0();
  if (iVar1 == 0) {
    return 0;
  }
  hModule = GetModuleHandleA("advapi32.dll");
  if (hModule == (HMODULE)0x0) {
    return -0x7fffbffb;
  }
  if (DAT_004ae440 == 0) {
    DAT_004ae444 = GetProcAddress(hModule,"SetSecurityInfo");
    DAT_004ae448 = GetProcAddress(hModule,"GetSecurityInfo");
    DAT_004ae44c = GetProcAddress(hModule,"AllocateAndInitializeSid");
    DAT_004ae450 = GetProcAddress(hModule,"FreeSid");
    DAT_004ae454 = GetProcAddress(hModule,"SetEntriesInAclA");
    DAT_004ae440 = 1;
  }
  if ((((DAT_004ae444 != (FARPROC)0x0) && (DAT_004ae448 != (FARPROC)0x0)) &&
      (DAT_004ae44c != (FARPROC)0x0)) &&
     ((DAT_004ae454 != (FARPROC)0x0 && (DAT_004ae450 != (FARPROC)0x0)))) {
    iVar2 = (*DAT_004ae448)(param_1,4,4,0,0,&local_30,0,&local_2c);
    if (iVar2 == 0) {
      iVar2 = (*DAT_004ae44c)(&local_28,1,0,0,0,0,0,0,0,0,&local_38);
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
        iVar2 = (*DAT_004ae454)(1,auStack_20,local_30,&local_34);
        if (iVar2 == 0) {
          iVar2 = (*DAT_004ae444)(param_1,4,4,0,0,local_34,0);
        }
      }
    }
  }
  if (local_2c != (HLOCAL)0x0) {
    LocalFree(local_2c);
  }
  if ((local_38 != 0) && (DAT_004ae450 != (FARPROC)0x0)) {
    (*DAT_004ae450)(local_38);
  }
  if (local_34 != (HLOCAL)0x0) {
    LocalFree(local_34);
  }
  return iVar2;
}


