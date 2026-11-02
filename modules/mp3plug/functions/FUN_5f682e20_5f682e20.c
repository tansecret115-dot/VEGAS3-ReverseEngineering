/* Module: mp3plug.dll
   Function: FUN_5f682e20
   Address: 5f682e20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_5f682e20(int *param_1,int *param_2,HANDLE param_3,int param_4,undefined4 param_5,
                  uint param_6,int param_7)

{
  ushort *puVar1;
  HGLOBAL pvVar2;
  LPVOID pMem;
  double *pdVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  DWORD nNumberOfBytesToWrite;
  BOOL BVar7;
  code *pcVar8;
  uint uVar9;
  code *pcVar10;
  uint local_c8 [3];
  uint local_bc [4];
  double *local_ac;
  undefined8 local_a8;
  uint local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  DWORD local_90;
  uint local_8c;
  LPVOID local_88;
  ushort local_84;
  ushort local_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  int local_7c;
  ushort local_78;
  undefined2 uStack_76;
  undefined2 local_74;
  LPVOID local_70;
  int local_68;
  undefined4 *local_64;
  int *local_60;
  double *local_5c;
  double *local_58;
  ushort local_50;
  ushort local_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  int local_48;
  ushort local_44;
  undefined2 uStack_42;
  undefined2 local_40;
  int local_3c;
  int local_34;
  DWORD local_2c;
  int local_28;
  undefined8 local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f72c748;
  puStack_10 = &DAT_5f72a230;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff00;
  local_5c = (double *)0x0;
  local_ac = (double *)0x0;
  ExceptionList = &local_14;
  puVar1 = (ushort *)(**(code **)(*param_1 + 0xc))();
  local_a8 = (**(code **)(*param_1 + 0x14))();
  local_68 = 0x480;
  local_a0 = 0x2000;
  local_94 = (int)((ulonglong)puVar1[6] / (ulonglong)(longlong)(int)(uint)puVar1[1]);
  pvVar2 = GlobalAlloc(0x42,local_94 * 0x480);
  pMem = GlobalLock(pvVar2);
  if (pMem == (LPVOID)0x0) {
    ExceptionList = local_14;
    return (int *)0x8007000e;
  }
  local_70 = pMem;
  pvVar2 = GlobalAlloc(0x42,0x2000);
  pdVar3 = GlobalLock(pvVar2);
  local_58 = pdVar3;
  if (pdVar3 == (double *)0x0) {
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
    ExceptionList = local_14;
    return (int *)0x8007000e;
  }
  local_3c = 0;
  local_8c = (uint)puVar1[6];
  if (param_2 != (int *)0x0) {
    iVar4 = (**(code **)(*param_2 + 0xc))(L"MP3 Encoding..",100);
    if (iVar4 == 0) {
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
      pvVar2 = GlobalHandle(pdVar3);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pdVar3);
      GlobalFree(pvVar2);
      ExceptionList = local_14;
      return (int *)0x80004005;
    }
  }
  local_7c = *(int *)(puVar1 + 2);
  local_84 = 1;
  uStack_80 = (undefined2)local_7c;
  uStack_7e = (undefined2)((uint)local_7c >> 0x10);
  _local_78 = CONCAT22(0x10,puVar1[1] * 2);
  local_7c = (uint)(ushort)(puVar1[1] * 2) * local_7c;
  local_74 = 0;
  local_4e = puVar1[1];
  local_48 = *(int *)(puVar1 + 2);
  local_50 = 3;
  uStack_4c = (undefined2)local_48;
  uStack_4a = (undefined2)((uint)local_48 >> 0x10);
  _local_44 = CONCAT22(0x20,local_4e << 2);
  local_48 = (uint)(ushort)(local_4e << 2) * local_48;
  local_40 = 0;
  local_82 = (ushort)param_4;
  local_9c = (uint)(param_6 != *(uint *)(puVar1 + 2));
  if ((local_9c != 0) || (((param_4 == 1 && (puVar1[1] == 2)) || (local_34 = 0, puVar1[7] != 0x10)))
     ) {
    local_34 = 1;
  }
  if (local_34 != 0) {
    pvVar2 = GlobalAlloc(0x42,0x1200);
    local_5c = GlobalLock(pvVar2);
    pcVar10 = GlobalHandle_exref;
    if (local_5c == (double *)0x0) {
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      pcVar8 = GlobalFree_exref;
      GlobalFree(pvVar2);
LAB_5f6830ee:
      pvVar2 = (HGLOBAL)(*pcVar10)(pdVar3);
      GlobalUnlock(pvVar2);
      uVar5 = (*pcVar10)(pdVar3);
      (*pcVar8)(uVar5);
      ExceptionList = local_14;
      return (int *)0x8007000e;
    }
    if (local_9c != 0) {
      local_24 = (double)param_6 / (double)*(uint *)(puVar1 + 2);
      pvVar2 = GlobalAlloc(0x42,0x1200);
      local_ac = GlobalLock(pvVar2);
      pcVar10 = GlobalHandle_exref;
      if (local_ac == (double *)0x0) {
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        pcVar8 = GlobalFree_exref;
        GlobalFree(pvVar2);
        pvVar2 = GlobalHandle(pdVar3);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pdVar3);
        GlobalFree(pvVar2);
        pdVar3 = local_5c;
        goto LAB_5f6830ee;
      }
      local_60 = FUN_5f6a33a0((int *)&local_64,0x20,(uint)local_82,(undefined4)local_24,
                              local_24._4_4_,0x21);
      if ((int)local_60 < 0) {
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
        pvVar2 = GlobalHandle(local_58);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(local_58);
        GlobalFree(pvVar2);
        pvVar2 = GlobalHandle(local_5c);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(local_5c);
        GlobalFree(pvVar2);
        pvVar2 = GlobalHandle(local_ac);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(local_ac);
        GlobalFree(pvVar2);
        ExceptionList = local_14;
        return local_60;
      }
      if (_DAT_5f72c7c8 < local_24) {
        local_68 = ftol();
      }
    }
  }
  _fpreset();
  uVar9 = 0;
  local_60 = (int *)(**(code **)(*param_1 + 0x1c))(0,0);
  do {
    do {
      iVar4 = local_94;
      if ((int)local_60 < 0) goto LAB_5f6834eb;
      if (uVar9 == 0) {
        local_60 = (int *)(**(code **)(*param_1 + 0x24))
                                    (pMem,(local_68 / (int)(uint)puVar1[1]) * local_94,&local_28);
        if ((local_60 != (int *)0x0) || (local_28 < 1)) goto LAB_5f68344a;
        uVar9 = local_28 / iVar4;
        local_3c = local_3c + local_28 / (int)local_8c;
        local_88 = pMem;
        if (local_34 != 0) {
          local_4e = puVar1[1];
          FUN_5f6aea60(&local_50,local_5c,puVar1,pMem,uVar9,0x3f800000);
          pdVar3 = local_5c;
          if ((param_4 == 1) && (puVar1[1] == 2)) {
            FUN_5f6a6cf0(local_5c,1,local_5c,&local_50,uVar9);
            uVar9 = ftol();
            local_4e = 1;
          }
          pMem = local_70;
          if (local_9c == 0) {
            FUN_5f6aea60(&local_84,local_70,&local_50,pdVar3,uVar9,0x3f800000);
          }
          else {
            uVar6 = (int)uVar9 / (int)(uint)local_4e;
            FUN_5f6a3a70(local_64,local_ac,uVar6,local_c8,local_5c,uVar6,local_bc);
            uVar9 = local_4e * local_c8[0];
            if ((int)local_bc[0] < (int)uVar6) {
              iVar4 = local_bc[0] - uVar6;
              local_3c = local_3c + iVar4;
              local_60 = (int *)(**(code **)(*param_1 + 0x1c))(iVar4,iVar4 >> 0x1f);
            }
            FUN_5f6aea60(&local_84,local_70,&local_50,local_ac,uVar9,0x3f800000);
            pMem = local_70;
          }
        }
        uVar9 = uVar9 * 2;
      }
      local_8 = 0;
      local_98 = 0;
      local_2c = FUN_5f6ce3e0(param_7,(int)local_88,uVar9,&local_98,(int)local_58,local_a0,
                              (byte *)0x0,(int *)0x0);
      local_8 = 0xffffffff;
      if (local_2c == 0xffffffff) {
        local_60 = (int *)0x8004e01e;
        goto LAB_5f68344a;
      }
      if ((uVar9 == 0) && (local_2c == 0)) goto LAB_5f68344a;
      local_88 = (LPVOID)((int)local_88 + local_98);
      uVar9 = uVar9 - local_98;
      if (local_2c != 0) {
        BVar7 = WriteFile(param_3,local_58,local_2c,&local_90,(LPOVERLAPPED)0x0);
        if (BVar7 == 0) {
          local_60 = (int *)0x8004e009;
          goto LAB_5f68344a;
        }
      }
    } while (param_2 == (int *)0x0);
    uVar5 = ftol();
    iVar4 = (**(code **)(*param_2 + 0x10))(uVar5);
  } while (iVar4 != 0);
  local_60 = (int *)0x8004e00c;
LAB_5f68344a:
  if (-1 < (int)local_60) {
    do {
      local_8 = 1;
      local_98 = 0;
      nNumberOfBytesToWrite =
           FUN_5f6ce3e0(param_7,(int)pMem,0,&local_98,(int)local_58,local_a0,(byte *)0x0,(int *)0x0)
      ;
      local_8 = 0xffffffff;
      local_2c = nNumberOfBytesToWrite;
      if (nNumberOfBytesToWrite == 0) break;
      BVar7 = WriteFile(param_3,local_58,nNumberOfBytesToWrite,&local_90,(LPOVERLAPPED)0x0);
      if (BVar7 == 0) {
        local_60 = (int *)0x8004e009;
        break;
      }
    } while (nNumberOfBytesToWrite != 0);
  }
LAB_5f6834eb:
  if (local_9c != 0) {
    FUN_5f6a39b0(local_64);
  }
  pcVar10 = GlobalUnlock_exref;
  if (pMem != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pMem);
    pcVar10 = GlobalUnlock_exref;
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
  }
  pdVar3 = local_5c;
  if (local_5c != (double *)0x0) {
    pvVar2 = GlobalHandle(local_5c);
    (*pcVar10)(pvVar2);
    pvVar2 = GlobalHandle(pdVar3);
    GlobalFree(pvVar2);
  }
  pdVar3 = local_ac;
  if (local_ac != (double *)0x0) {
    pvVar2 = GlobalHandle(local_ac);
    (*pcVar10)(pvVar2);
    pvVar2 = GlobalHandle(pdVar3);
    GlobalFree(pvVar2);
  }
  pdVar3 = local_58;
  if (local_58 != (double *)0x0) {
    pvVar2 = GlobalHandle(local_58);
    (*pcVar10)(pvVar2);
    pvVar2 = GlobalHandle(pdVar3);
    GlobalFree(pvVar2);
  }
  ExceptionList = local_14;
  return local_60;
}


