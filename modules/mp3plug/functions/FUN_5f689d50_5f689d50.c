/* Module: mp3plug.dll
   Function: FUN_5f689d50
   Address: 5f689d50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f689d50(void *this,LPCWSTR param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  HANDLE pvVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  int iVar7;
  int iVar8;
  BOOL BVar9;
  LPVOID pvVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined2 local_244;
  ushort local_242;
  undefined2 uStack_240;
  undefined2 uStack_23e;
  int local_23c;
  ushort local_22c;
  ushort uStack_22a;
  byte local_224 [42];
  uint local_1fa;
  DWORD local_1dc;
  uint local_1d8;
  DWORD local_1d4;
  uint local_1d0;
  ushort local_1cc [10];
  int local_1b8;
  int local_1b4;
  uint local_1b0;
  DWORD local_1ac;
  LPVOID local_1a8;
  DWORD local_1a4 [2];
  CHAR local_19c [260];
  uint local_98 [2];
  byte local_90;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f72c9e0;
  puStack_10 = &DAT_5f72a230;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffd94;
  ExceptionList = &local_14;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(int *)((int)this + 0x82c) = param_2;
  WideCharToMultiByte(0,0,param_1,-1,local_19c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  pvVar4 = CreateFileA(local_19c,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,(HANDLE)0x0);
  *(HANDLE *)((int)this + 4) = pvVar4;
  if (pvVar4 == (HANDLE)0xffffffff) {
    ExceptionList = local_14;
    return -0x7ffb1ff9;
  }
  pvVar5 = GlobalAlloc(0x42,0x1000);
  pvVar6 = GlobalLock(pvVar5);
  local_1a8 = pvVar6;
  if (pvVar6 == (LPVOID)0x0) {
    pvVar4 = *(HANDLE *)((int)this + 4);
LAB_5f68a1a9:
    CloseHandle(pvVar4);
    *(undefined4 *)((int)this + 4) = 0xffffffff;
    ExceptionList = local_14;
    return -0x7ff8fff2;
  }
  local_1b0 = 0;
  local_1ac = 0;
  local_1a4[0] = GetFileSize(*(HANDLE *)((int)this + 4),(LPDWORD)0x0);
  local_1a4[1] = 0;
  FUN_5f688240(*(HANDLE *)((int)this + 4),local_1a4,(int *)&local_1b0,(uint *)0x0);
  iVar7 = FUN_5f68a500(*(HANDLE *)((int)this + 4),&local_1b0,local_98);
  local_1b4 = FUN_5f68a600(*(HANDLE *)((int)this + 4),&local_1b0,local_224);
  local_1d8 = local_1b0;
  local_1d4 = local_1ac;
  SetFilePointer(*(HANDLE *)((int)this + 4),local_1b0,(PLONG)&local_1d4,0);
  iVar8 = FUN_5f688530(*(HANDLE *)((int)this + 4),local_1cc,1,&local_1b0);
  if (iVar8 < 0) {
    pvVar5 = GlobalHandle(pvVar6);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(pvVar6);
    GlobalFree(pvVar5);
    pvVar4 = *(HANDLE *)((int)this + 4);
LAB_5f689f76:
    CloseHandle(pvVar4);
    *(undefined4 *)((int)this + 4) = 0xffffffff;
    ExceptionList = local_14;
    return -0x7ffb1ff8;
  }
  *(undefined4 *)((int)this + 0x16f0) = 0;
  *(undefined4 *)((int)this + 0x16f4) = 0;
  *(uint *)((int)this + 0x16f8) = local_1b0;
  *(DWORD *)((int)this + 0x16fc) = local_1ac;
  *(undefined4 *)((int)this + 0x1700) = 0;
  *(undefined4 *)((int)this + 0x1704) = 0;
  *(uint *)((int)this + 0x1708) = local_1b0;
  *(DWORD *)((int)this + 0x170c) = local_1ac;
  local_1d8 = local_1b0;
  local_1d4 = local_1ac;
  SetFilePointer(*(HANDLE *)((int)this + 4),local_1b0,(PLONG)&local_1d4,0);
  BVar9 = ReadFile(*(HANDLE *)((int)this + 4),pvVar6,0x1000,&local_1d0,(LPOVERLAPPED)0x0);
  if (BVar9 == 0) {
    pvVar5 = GlobalHandle(pvVar6);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(pvVar6);
    GlobalFree(pvVar5);
    pvVar4 = *(HANDLE *)((int)this + 4);
    goto LAB_5f689f76;
  }
  local_1d8 = local_1b0;
  local_1d4 = local_1ac;
  SetFilePointer(*(HANDLE *)((int)this + 4),local_1b0,(PLONG)&local_1d4,0);
  local_8 = 0;
  if (0x800 < local_1d0) {
    local_1d0 = 0x800;
  }
  iVar8 = FUN_5f70fa60((int)pvVar6,local_1d0,&local_244,0);
  local_8 = 0xffffffff;
  if (iVar8 < 0) {
    pvVar5 = GlobalHandle(pvVar6);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(pvVar6);
    GlobalFree(pvVar5);
    pvVar4 = *(HANDLE *)((int)this + 4);
LAB_5f68a22a:
    CloseHandle(pvVar4);
    *(undefined4 *)((int)this + 4) = 0xffffffff;
    ExceptionList = local_14;
    return -0x7ffb1ff9;
  }
  puVar12 = (undefined4 *)((int)this + 0x834);
  for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  *(undefined4 *)((int)this + 0x834) = 0x28;
  *(int *)((int)this + 0x838) = local_23c * 8;
  *(uint *)((int)this + 0x83c) = (uint)local_242;
  *(uint *)((int)this + 0x840) = CONCAT22(uStack_23e,uStack_240);
  *(uint *)((int)this + 0x844) = (uint)local_22c;
  *(uint *)((int)this + 0x848) = (uint)uStack_22a;
  *(uint *)((int)this + 0x84c) = (uint)local_242;
  *(uint *)((int)this + 0x850) = CONCAT22(uStack_23e,uStack_240);
  *(undefined4 *)((int)this + 0x854) = 0x10;
  piVar1 = (int *)((int)this + 0x85c);
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x860) = 0;
  *(undefined4 *)((int)this + 0x864) = 0;
  *(undefined4 *)((int)this + 0x868) = 0;
  *piVar1 = 0x10;
  *(LPVOID *)((int)this + 0x868) = local_1a8;
  *(undefined4 *)((int)this + 0x860) = 0x1000;
  *(undefined4 *)((int)this + 0x864) = 0;
  piVar2 = (int *)((int)this + 0x86c);
  *piVar2 = 0;
  *(undefined4 *)((int)this + 0x870) = 0;
  *(undefined4 *)((int)this + 0x874) = 0;
  *(undefined4 *)((int)this + 0x878) = 0;
  *piVar2 = 0x10;
  *(undefined4 *)((int)this + 0x878) = 0;
  *(undefined4 *)((int)this + 0x870) = 0;
  *(undefined4 *)((int)this + 0x874) = 0;
  iVar8 = FUN_5f70faa0((int *)((int)this + 0x834),piVar1,piVar2,1);
  pvVar6 = local_1a8;
  if (iVar8 != 0) {
    pvVar5 = GlobalHandle(local_1a8);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(pvVar6);
    GlobalFree(pvVar5);
    pvVar4 = *(HANDLE *)((int)this + 4);
    goto LAB_5f68a22a;
  }
  pvVar5 = GlobalAlloc(0x42,*(SIZE_T *)((int)this + 0x870));
  pvVar10 = GlobalLock(pvVar5);
  pvVar6 = local_1a8;
  *(LPVOID *)((int)this + 0x878) = pvVar10;
  if (pvVar10 == (LPVOID)0x0) {
    pvVar5 = GlobalHandle(local_1a8);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(pvVar6);
    GlobalFree(pvVar5);
    pvVar4 = *(HANDLE *)((int)this + 4);
    goto LAB_5f68a1a9;
  }
  iVar8 = FUN_5f70fc30((int *)((int)this + 0x834),0);
  if (iVar8 != 0) {
    pvVar5 = GlobalHandle(local_1a8);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(local_1a8);
    GlobalFree(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x878));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x878));
    GlobalFree(pvVar5);
    pvVar4 = *(HANDLE *)((int)this + 4);
    goto LAB_5f68a22a;
  }
  *(undefined4 *)((int)this + 0x860) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x830) = 0;
  local_1d8 = GetFileSize(*(HANDLE *)((int)this + 4),&local_1dc);
  local_1d4 = local_1dc;
  *(uint *)((int)this + 0x18) = local_1d8;
  *(DWORD *)((int)this + 0x1c) = local_1dc;
  piVar1 = (int *)((int)this + 0x16ec);
  if ((int *)*piVar1 != (int *)0x0) {
    FUN_5f6b66f0((int *)*piVar1);
  }
  *piVar1 = 0;
  FUN_5f6b67c0(piVar1,4,-1,-1,0x80000002);
  local_1b8 = FUN_5f68a990(*(undefined4 **)((int)this + 4),(undefined4 *)((int)this + 0x892),
                           (uint *)((int)this + 0x18),(int *)*piVar1);
  if (local_1b8 < 0) {
    (**(code **)(*(int *)this + 0x18))();
    ExceptionList = local_14;
    return local_1b8;
  }
  *(undefined4 *)((int)this + 0x87c) = 1;
  *(undefined2 *)((int)this + 0x880) = 1;
  *(short *)((int)this + 0x882) = (short)*(int *)((int)this + 0x8ae);
  *(int *)((int)this + 0x884) = *(int *)((int)this + 0x8aa);
  uVar3 = (ushort)*(undefined4 *)((int)this + 0x8b2);
  *(ushort *)((int)this + 0x88e) = uVar3;
  uVar11 = (uint)(uVar3 >> 3) * *(int *)((int)this + 0x8ae);
  *(short *)((int)this + 0x88c) = (short)uVar11;
  *(uint *)((int)this + 0x888) = (uVar11 & 0xffff) * *(int *)((int)this + 0x8aa);
  *(undefined2 *)((int)this + 0x890) = 0;
  local_1d8 = *(uint *)((int)this + 0x8b6);
  local_1d4 = *(DWORD *)((int)this + 0x16d8);
  *(uint *)((int)this + 0x20) = local_1d8;
  *(DWORD *)((int)this + 0x24) = local_1d4;
  if (local_1b4 == 0) {
    *(undefined4 *)((int)this + 0x16e8) = 0;
  }
  else {
    uVar11 = (local_1fa & 0xffff) - (((*(int *)((int)this + 0x8aa) < 32000) - 1 & 0x240) + 0x240);
    *(uint *)((int)this + 0x16e8) = uVar11;
    *(uint *)((int)this + 0x20) = uVar11 + local_1d8;
    *(DWORD *)((int)this + 0x24) =
         ((int)uVar11 >> 0x1f) + local_1d4 + (uint)CARRY4(uVar11,local_1d8);
  }
  uVar13 = __alldiv(*(uint *)((int)this + 0x18),*(uint *)((int)this + 0x1c),10,0);
  *(undefined8 *)((int)this + 0x1710) = uVar13;
  if ((*(byte *)((int)this + 0x82c) & 2) == 0) {
    if (local_1b4 == 0) goto LAB_5f68a4a2;
    iVar7 = *(int *)((int)this + 0x8aa);
  }
  else {
    if (*(char *)((int)this + 0x16dd) == '\0') {
      FUN_5f689660(this,local_1b0,local_1ac);
      goto LAB_5f68a4a2;
    }
    if ((iVar7 != 0) && ((local_90 & 4) != 0)) {
      FUN_5f689790(this,local_1b0,local_1ac);
      goto LAB_5f68a4a2;
    }
    if (local_1b4 == 0) goto LAB_5f68a4a2;
    iVar7 = *(int *)((int)this + 0x8aa);
  }
  FUN_5f689900(this,local_1b0,local_1ac,local_224,((iVar7 < 32000) - 1 & 0x240) + 0x240);
LAB_5f68a4a2:
  local_1d8 = local_1b0;
  local_1d4 = local_1ac;
  SetFilePointer(*(HANDLE *)((int)this + 4),local_1b0,(PLONG)&local_1d4,0);
  if (*(int *)((int)this + 0x16e8) != 0) {
    (**(code **)(*(int *)this + 0x1c))(0,0);
  }
  ExceptionList = local_14;
  return local_1b8;
}


