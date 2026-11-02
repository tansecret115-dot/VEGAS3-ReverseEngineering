/* Module: mp3plug.dll
   Function: FUN_5f68bc70
   Address: 5f68bc70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f68bc70(void *this,undefined4 *param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  void *pvVar2;
  DWORD nNumberOfBytesToRead;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  DWORD local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pvVar2 = ExceptionList;
  puStack_c = &DAT_5f72c9f0;
  puStack_10 = &DAT_5f72a230;
  local_14 = ExceptionList;
  local_20 = param_1;
  local_24 = 0;
  ExceptionList = &local_14;
  if (param_3 != (int *)0x0) {
    ExceptionList = &local_14;
    *param_3 = 0;
  }
  local_1c = &stack0xffffffb4;
  if ((*(int *)((int)this + 0x1c) <= *(int *)((int)this + 0x14)) &&
     ((*(int *)((int)this + 0x1c) < *(int *)((int)this + 0x14) ||
      (local_1c = &stack0xffffffb4, *(uint *)((int)this + 0x18) <= *(uint *)((int)this + 0x10))))) {
    ExceptionList = pvVar2;
    return 0x800a0026;
  }
  do {
    local_8 = 0xffffffff;
    if (param_2 == 0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (*(int *)((int)this + 0x874) <= *(int *)((int)this + 0x830)) {
      uVar9 = *(uint *)((int)this + 0x864);
      puVar1 = (uint *)((int)this + 0x10);
      uVar6 = *puVar1;
      *puVar1 = *puVar1 + uVar9;
      *(int *)((int)this + 0x14) =
           *(int *)((int)this + 0x14) + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar6,uVar9);
      if (*(int *)((int)this + 0x860) == 0) {
        nNumberOfBytesToRead = 0x1000;
        uVar6 = *(uint *)((int)this + 0x844);
        if (1 < (int)uVar6) {
          nNumberOfBytesToRead = uVar6 * (int)(0x1000 / (ulonglong)uVar6);
        }
        BVar3 = ReadFile(*(HANDLE *)((int)this + 4),*(LPVOID *)((int)this + 0x868),
                         nNumberOfBytesToRead,&local_28,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) {
          ExceptionList = local_14;
          return 0x8004e008;
        }
        *(int *)((int)this + 0x860) = *(int *)((int)this + 0x860) + local_28;
      }
      *(undefined4 *)((int)this + 0x864) = 0;
      *(undefined4 *)((int)this + 0x874) = 0;
      local_8 = 0;
      iVar4 = FUN_5f70ffe0((int *)((int)this + 0x834),(int *)((int)this + 0x85c),
                           (int *)((int)this + 0x86c));
      if (iVar4 != 0) {
        uVar6 = *(uint *)((int)this + 0x864);
        *(uint *)((int)this + 0x18) = uVar6 + *(uint *)((int)this + 0x10);
        *(uint *)((int)this + 0x1c) =
             ((int)uVar6 >> 0x1f) + *(int *)((int)this + 0x14) +
             (uint)CARRY4(uVar6,*(uint *)((int)this + 0x10));
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x18);
        *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x1c);
        *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 8);
        *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0xc);
        ExceptionList = local_14;
        return local_24;
      }
      *(undefined4 *)((int)this + 0x830) = 0;
      iVar4 = *(int *)((int)this + 0x860);
      if ((iVar4 == 0) && (*(int *)((int)this + 0x874) == 0)) {
        uVar6 = *(uint *)((int)this + 0x864);
        iVar4 = ((int)uVar6 >> 0x1f) + *(int *)((int)this + 0x14) +
                (uint)CARRY4(uVar6,*(uint *)((int)this + 0x10));
        *(uint *)((int)this + 0x18) = uVar6 + *(uint *)((int)this + 0x10);
        *(int *)((int)this + 0x1c) = iVar4;
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x18);
        *(int *)((int)this + 0x14) = iVar4;
        *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 8);
        *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0xc);
        if (param_3 == (int *)0x0) {
          ExceptionList = local_14;
          return 0x800a0026;
        }
        if (*param_3 == 0) {
          ExceptionList = local_14;
          return 0x800a0026;
        }
        ExceptionList = local_14;
        return 0;
      }
      iVar8 = *(int *)((int)this + 0x864);
      if (((iVar8 != 0) && (iVar8 < iVar4)) && (iVar5 = 0, iVar4 != iVar8 && -1 < iVar4 - iVar8)) {
        do {
          *(undefined1 *)(*(int *)((int)this + 0x868) + iVar5) =
               *(undefined1 *)(iVar8 + *(int *)((int)this + 0x868) + iVar5);
          iVar5 = iVar5 + 1;
          iVar8 = *(int *)((int)this + 0x864);
        } while (iVar5 < *(int *)((int)this + 0x860) - iVar8);
      }
      *(int *)((int)this + 0x860) = *(int *)((int)this + 0x860) - *(int *)((int)this + 0x864);
    }
    if (0 < *(int *)((int)this + 0x874)) {
      uVar6 = *(int *)((int)this + 0x874) - *(int *)((int)this + 0x830);
      if (param_2 < uVar6) {
        uVar6 = param_2;
      }
      puVar10 = (undefined4 *)(*(int *)((int)this + 0x878) + *(int *)((int)this + 0x830));
      puVar11 = local_20;
      for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar9 = uVar6 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      param_2 = param_2 - uVar6;
      local_20 = (undefined4 *)((int)local_20 + uVar6);
      *(int *)((int)this + 0x830) = *(int *)((int)this + 0x830) + uVar6;
      uVar7 = uVar6 / *(ushort *)((int)this + 0x88c);
      puVar1 = (uint *)((int)this + 8);
      uVar9 = *puVar1;
      *puVar1 = *puVar1 + uVar7;
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + (uint)CARRY4(uVar9,uVar7);
      if (param_3 != (int *)0x0) {
        *param_3 = *param_3 + uVar6;
      }
    }
  } while( true );
}


