/* Module: sfmarket2.dll
   Function: FUN_0042f1a0
   Address: 0042f1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0042f1a0(void *this,undefined4 param_1,DWORD param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  undefined *puVar4;
  DWORD DVar5;
  uint uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  char *pcVar10;
  DWORD local_2c;
  void *local_28;
  HANDLE local_24;
  undefined1 *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  if (param_3 != 0) {
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)((int)this + 0x14);
    *(undefined4 *)(param_2 + 0x5c) = 0;
  }
  local_10 = (uint)(*(int *)((int)this + 0x14) == 0);
  puVar7 = &stack0xffffffc8;
  local_28 = this;
  local_24 = CreateFileA(*(LPCSTR *)((int)this + 0x1c),0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0,
                         (HANDLE)0x0);
  if (local_24 == (HANDLE)0xffffffff) {
    return -0x7ffb1ff9;
  }
  local_14 = 0;
  FUN_00492f90();
  local_18 = *(int *)((int)this + 0x14);
  uVar6 = 0x10000;
  local_20 = &stack0xffffffc8;
  while( true ) {
    if ((local_10 == 0) && (local_18 == 0)) {
      if (-1 < local_8) {
        DVar5 = (int)puVar7 - (int)local_20;
        puVar7 = local_20;
        goto LAB_0042f3d2;
      }
      goto LAB_0042f423;
    }
    if (*(int *)(param_2 + 0x34) != 0) break;
    local_c = 0;
    iVar1 = InternetQueryDataAvailable(param_1,&local_c,0,0);
    if (iVar1 == 0) {
      local_8 = -0x7fffbffb;
      GetLastError();
      pcVar10 = "InternetQueryDataAvailable failed GLE=%d";
      uVar9 = 0x4d6;
      pcVar8 = "sfinternet.cpp";
      uVar6 = 1;
      puVar4 = FUN_004012e0();
      FUN_0041ff00((int)puVar4,uVar6,pcVar8,uVar9,pcVar10);
      goto LAB_0042f423;
    }
    if ((local_c == 0) && (local_10 != 0)) {
      local_10 = 0;
      *(int *)((int)local_28 + 0x14) = local_14;
    }
    while( true ) {
      if (local_8 < 0) goto LAB_0042f423;
      if (local_c == 0) break;
      if (*(int *)(param_2 + 0x34) != 0) goto LAB_0042f368;
      local_1c = 0;
      uVar2 = local_c;
      if (uVar6 <= local_c) {
        uVar2 = uVar6;
      }
      iVar1 = InternetReadFile(param_1,puVar7,uVar2,&local_1c);
      if (iVar1 == 0) {
        local_8 = -0x7fffbffb;
        GetLastError();
        pcVar8 = "InternetReadFile failed - tried to read up to %d bytes - GLE=%d";
        uVar9 = 0x4cc;
        goto LAB_0042f40e;
      }
      local_14 = local_14 + local_1c;
      local_c = local_c - local_1c;
      if (local_10 == 0) {
        local_18 = local_18 - local_1c;
      }
      uVar6 = uVar6 - local_1c;
      puVar7 = puVar7 + local_1c;
      if (uVar6 == 0) {
        DVar5 = 0x10000;
        puVar7 = local_20;
        do {
          local_2c = 0;
          BVar3 = WriteFile(local_24,puVar7,DVar5,&local_2c,(LPOVERLAPPED)0x0);
          if (BVar3 == 0) {
            local_8 = -0x7ffb1ff7;
            GetLastError();
            pcVar10 = "WriteFile failed - tried to write %d bytes - GLE=%d";
            uVar9 = 0x4b6;
            pcVar8 = "sfinternet.cpp";
            uVar6 = 1;
            puVar4 = FUN_004012e0();
            FUN_0041ff00((int)puVar4,uVar6,pcVar8,uVar9,pcVar10);
            break;
          }
          puVar7 = puVar7 + local_2c;
          DVar5 = DVar5 - local_2c;
        } while (DVar5 != 0);
        uVar6 = 0x10000;
        puVar7 = local_20;
      }
      if (param_3 != 0) {
        uVar2 = *(uint *)(param_2 + 0x50);
        *(uint *)(param_2 + 0x50) = uVar2 + local_1c;
        *(uint *)(param_2 + 0x54) = *(int *)(param_2 + 0x54) + (uint)CARRY4(uVar2,local_1c);
        FUN_0042e6b0(param_2);
      }
    }
    if (local_8 < 0) goto LAB_0042f423;
  }
LAB_0042f368:
  local_8 = -0x7ffb1ff4;
  goto LAB_0042f423;
  while( true ) {
    puVar7 = puVar7 + param_2;
    DVar5 = DVar5 - param_2;
    if (DVar5 == 0) break;
LAB_0042f3d2:
    param_2 = 0;
    BVar3 = WriteFile(local_24,puVar7,DVar5,&param_2,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      local_8 = -0x7ffb1ff7;
      GetLastError();
      pcVar8 = "WriteFile failed - tried to write %d bytes - GLE=%d";
      uVar9 = 0x4ef;
LAB_0042f40e:
      pcVar10 = "sfinternet.cpp";
      uVar6 = 1;
      puVar4 = FUN_004012e0();
      FUN_0041ff00((int)puVar4,uVar6,pcVar10,uVar9,pcVar8);
      break;
    }
  }
LAB_0042f423:
  CloseHandle(local_24);
  iVar1 = local_8;
  if ((local_8 < 0) || (*(int *)((int)local_28 + 0x14) == 0)) {
    DeleteFileA(*(LPCSTR *)((int)local_28 + 0x1c));
  }
  return iVar1;
}


