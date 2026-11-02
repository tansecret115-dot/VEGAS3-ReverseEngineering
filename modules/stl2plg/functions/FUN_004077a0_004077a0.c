/* Module: stl2plg.dll
   Function: FUN_004077a0
   Address: 004077a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_004077a0(HANDLE param_1)

{
  uint uVar1;
  HANDLE hFile;
  uint uVar2;
  DWORD DVar3;
  BOOL BVar4;
  int iVar5;
  HGLOBAL pvVar6;
  uint *pMem;
  undefined1 *puVar7;
  uint *puVar8;
  DWORD nNumberOfBytesToRead;
  LPVOID lpBuffer;
  uint *puVar9;
  uint uVar10;
  undefined4 local_50;
  undefined2 local_40;
  short local_38 [5];
  int local_2e;
  uint local_28 [3];
  undefined2 local_1c;
  byte local_1a;
  undefined1 uStack_19;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  hFile = param_1;
  DVar3 = SetFilePointer(param_1,0,(PLONG)0x0,1);
  BVar4 = ReadFile(hFile,local_38,0xe,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar4 == 0) {
    return (uint *)0x0;
  }
  if (param_1 != (HANDLE)0xe) {
    return (uint *)0x0;
  }
  if (local_38[0] != 0x4d42) {
    return (uint *)0x0;
  }
  BVar4 = ReadFile(hFile,local_28,0x28,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  uVar2 = local_28[0];
  if (BVar4 == 0) {
    return (uint *)0x0;
  }
  if (param_1 != (HANDLE)0x28) {
    return (uint *)0x0;
  }
  uVar10 = local_8;
  if ((local_8 == 0) && (CONCAT11(uStack_19,local_1a) < 9)) {
    uVar10 = 1 << (local_1a & 0x1f);
  }
  if (local_28[0] == 0xc) {
    uVar1 = local_28[1] >> 0x10;
    local_28[1] = local_28[1] & 0xffff;
    local_40 = (undefined2)local_28[2];
    local_1a = (byte)(local_28[2] >> 0x10);
    local_8 = 1 << (local_1a & 0x1f);
    local_28[0] = 0x28;
    uStack_19 = (undefined1)(local_28[2] >> 0x18);
    uStack_18 = 0;
    uStack_16 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_28[2] = uVar1;
    local_1c = local_40;
    local_4 = local_8;
    SetFilePointer(hFile,-0x1c,(PLONG)0x0,1);
  }
  if (local_14 == 0) {
    local_14 = (CONCAT11(uStack_19,local_1a) * local_28[1] + 0x1f >> 3 & 0x1ffffffc) * local_28[2];
  }
  if (local_8 == 0) {
    if (CONCAT11(uStack_19,local_1a) < 9) {
      local_8 = 1 << (local_1a & 0x1f);
    }
    else {
      local_8 = 0;
    }
    local_8 = local_8 & 0xffff;
  }
  if (CONCAT22(uStack_16,uStack_18) == 3) {
    iVar5 = 0xc;
  }
  else {
    iVar5 = local_8 << 2;
  }
  pvVar6 = GlobalAlloc(2,iVar5 + local_28[0]);
  pMem = GlobalLock(pvVar6);
  if (pMem == (uint *)0x0) {
    return (uint *)0x0;
  }
  puVar8 = local_28;
  puVar9 = pMem;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  if ((0x28 < *pMem) &&
     (BVar4 = ReadFile(hFile,pMem + 10,*pMem - 0x28,(LPDWORD)&param_1,(LPOVERLAPPED)0x0), BVar4 == 0
     )) {
    pvVar6 = GlobalHandle(pMem);
    GlobalUnlock(pvVar6);
    pvVar6 = GlobalHandle(pMem);
    GlobalFree(pvVar6);
    return (uint *)0x0;
  }
  lpBuffer = (LPVOID)(*pMem + (int)pMem);
  if ((short)uVar10 == 0) {
    if (CONCAT22(uStack_16,uStack_18) != 3) goto LAB_00407a59;
    nNumberOfBytesToRead = 0xc;
  }
  else {
    if (uVar2 == 0xc) {
      uVar10 = uVar10 & 0xffff;
      ReadFile(hFile,lpBuffer,uVar10 * 3,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
      iVar5 = uVar10 - 1;
      if (-1 < iVar5) {
        puVar8 = (uint *)((int)lpBuffer + iVar5 * 4);
        puVar7 = (undefined1 *)((int)lpBuffer + uVar10 + iVar5 * 2);
        do {
          local_50._0_2_ = CONCAT11(*puVar7,puVar7[-1]);
          local_50 = (uint)CONCAT12(puVar7[1],(undefined2)local_50);
          *puVar8 = local_50;
          puVar8 = puVar8 + -1;
          uVar10 = uVar10 - 1;
          puVar7 = puVar7 + -3;
        } while (uVar10 != 0);
      }
      goto LAB_00407a59;
    }
    nNumberOfBytesToRead = (uVar10 & 0xffff) << 2;
  }
  ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
LAB_00407a59:
  if (local_2e != 0) {
    SetFilePointer(hFile,local_2e + DVar3,(PLONG)0x0,0);
  }
  return pMem;
}


