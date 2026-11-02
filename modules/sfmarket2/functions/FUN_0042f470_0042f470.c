/* Module: sfmarket2.dll
   Function: FUN_0042f470
   Address: 0042f470
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0042f470(void *this,undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 uVar10;
  char *pcVar11;
  SIZE_T dwBytes;
  UINT uFlags;
  int local_1c;
  uint local_18;
  int local_14;
  SIZE_T local_c;
  int local_8;
  uint uStack_4;
  
  iVar1 = param_2;
  local_1c = 0;
  if (param_3 != 0) {
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)((int)this + 0x14);
    *(undefined4 *)(param_2 + 0x5c) = 0;
  }
  bVar7 = *(int *)((int)this + 0x14) == 0;
  if (bVar7) {
    pvVar2 = GlobalAlloc(0x42,0x2000);
    pvVar3 = GlobalLock(pvVar2);
    *(LPVOID *)((int)this + 0x18) = pvVar3;
    local_18 = 0x1fff;
  }
  else {
    pvVar2 = GlobalAlloc(0x40,*(int *)((int)this + 0x14) + 1);
    pvVar3 = GlobalLock(pvVar2);
    local_18 = *(uint *)((int)this + 0x14);
    *(LPVOID *)((int)this + 0x18) = pvVar3;
  }
  iVar6 = *(int *)((int)this + 0x18);
  if (iVar6 == 0) {
    pcVar11 = "GlobalAllocPtr failed to allocate %d bytes";
    uVar10 = 0x5b3;
    pcVar9 = "sfinternet.cpp";
    uVar8 = 1;
    puVar5 = FUN_004012e0();
    FUN_0041ff00((int)puVar5,uVar8,pcVar9,uVar10,pcVar11);
    return -0x7ff8fff2;
  }
  local_8 = *(int *)((int)this + 0x14);
  local_14 = 0;
  local_c = local_18 + 0x2000;
  while( true ) {
    if ((!bVar7) && (local_8 == 0)) goto LAB_0042f6ab;
    if (*(int *)(iVar1 + 0x34) != 0) break;
    param_2 = 0;
    iVar4 = InternetQueryDataAvailable(param_1,&param_2,0,0);
    if (iVar4 == 0) {
      local_1c = -0x7fffbffb;
      GetLastError();
      pcVar11 = "InternetQueryDataAvailable failed GLE=%d";
      uVar10 = 0x59e;
      pcVar9 = "sfinternet.cpp";
      uVar8 = 1;
      puVar5 = FUN_004012e0();
      FUN_0041ff00((int)puVar5,uVar8,pcVar9,uVar10,pcVar11);
      goto LAB_0042f6ab;
    }
    if ((param_2 == 0) && (bVar7)) {
      bVar7 = false;
      *(int *)((int)this + 0x14) = local_14;
    }
    if (local_18 < (uint)(param_2 + local_14)) {
      pvVar2 = GlobalHandle(*(LPCVOID *)((int)this + 0x18));
      GlobalUnlock(pvVar2);
      uFlags = 2;
      dwBytes = local_c;
      pvVar2 = GlobalHandle(*(LPCVOID *)((int)this + 0x18));
      pvVar2 = GlobalReAlloc(pvVar2,dwBytes,uFlags);
      pvVar3 = GlobalLock(pvVar2);
      *(LPVOID *)((int)this + 0x18) = pvVar3;
      if (pvVar3 == (LPVOID)0x0) {
        local_1c = -0x7ff8fff2;
LAB_0042f6ab:
        *(undefined1 *)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0x14)) = 0;
        if (((local_1c < 0) || (*(int *)((int)this + 0x14) == 0)) &&
           (*(LPCVOID *)((int)this + 0x18) != (LPCVOID)0x0)) {
          pvVar2 = GlobalHandle(*(LPCVOID *)((int)this + 0x18));
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(*(LPCVOID *)((int)this + 0x18));
          GlobalFree(pvVar2);
          *(undefined4 *)((int)this + 0x18) = 0;
        }
        return local_1c;
      }
      local_18 = local_18 + 0x2000;
      local_c = local_c + 0x2000;
      iVar6 = (int)pvVar3 + local_14;
    }
    while (param_2 != 0) {
      if (*(int *)(iVar1 + 0x34) != 0) goto LAB_0042f63e;
      uStack_4 = 0;
      iVar4 = InternetReadFile(param_1,iVar6,param_2,&uStack_4);
      if (iVar4 == 0) {
        local_1c = -0x7fffbffb;
        GetLastError();
        pcVar11 = "InternetReadFile failed - tried to read up to %d bytes - GLE=%d";
        uVar10 = 0x594;
        pcVar9 = "sfinternet.cpp";
        uVar8 = 1;
        puVar5 = FUN_004012e0();
        FUN_0041ff00((int)puVar5,uVar8,pcVar9,uVar10,pcVar11);
        goto LAB_0042f6ab;
      }
      local_14 = local_14 + uStack_4;
      param_2 = param_2 - uStack_4;
      if (!bVar7) {
        local_8 = local_8 - uStack_4;
      }
      iVar6 = iVar6 + uStack_4;
      if (param_3 != 0) {
        uVar8 = *(uint *)(iVar1 + 0x50);
        *(uint *)(iVar1 + 0x50) = uVar8 + uStack_4;
        *(uint *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + (uint)CARRY4(uVar8,uStack_4);
        FUN_0042e6b0(iVar1);
      }
    }
  }
LAB_0042f63e:
  local_1c = -0x7ffb1ff4;
  goto LAB_0042f6ab;
}


