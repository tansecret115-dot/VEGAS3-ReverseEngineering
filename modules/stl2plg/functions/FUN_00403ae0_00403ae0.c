/* Module: stl2plg.dll
   Function: FUN_00403ae0
   Address: 00403ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403ae0(HANDLE param_1,uint *param_2)

{
  uint *lpBuffer;
  LPCVOID pMem;
  uint uVar1;
  HANDLE hFile;
  ushort uVar2;
  uint uVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  DWORD DVar6;
  uint uVar7;
  BOOL BVar8;
  DWORD local_4;
  
  hFile = param_1;
  uVar3 = FUN_004050b0(param_1);
  *param_2 = uVar3;
  uVar3 = FUN_004050b0(param_1);
  param_2[1] = uVar3;
  uVar3 = FUN_004050b0(param_1);
  param_2[2] = uVar3;
  uVar3 = FUN_004050b0(param_1);
  param_2[3] = uVar3;
  uVar2 = FUN_00405070(param_1);
  *(ushort *)(param_2 + 4) = uVar2;
  pvVar4 = GlobalAlloc(0x40,(uint)uVar2 * 6);
  pvVar5 = GlobalLock(pvVar4);
  pMem = *(LPCVOID *)((int)param_2 + 0x12);
  uVar3 = param_2[4];
  if (pMem != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(pMem);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pMem);
    GlobalFree(pvVar4);
  }
  *(uint *)((int)param_2 + 0x16) = (uint)(ushort)uVar3;
  uVar3 = 0;
  *(LPVOID *)((int)param_2 + 0x12) = pvVar5;
  if ((short)param_2[4] != 0) {
    param_1 = (HANDLE)0x0;
    do {
      FUN_00403dd0(hFile,(undefined2 *)((int)param_1 + *(int *)((int)param_2 + 0x12)));
      uVar3 = uVar3 + 1;
      param_1 = (HANDLE)((int)param_1 + 6);
    } while (uVar3 < (ushort)param_2[4]);
  }
  uVar3 = FUN_004050b0(hFile);
  *(uint *)((int)param_2 + 0x1a) = uVar3;
  uVar3 = FUN_004050b0(hFile);
  *(uint *)((int)param_2 + 0x1e) = uVar3;
  uVar3 = FUN_00405040(hFile);
  *(char *)((int)param_2 + 0x22) = (char)uVar3;
  uVar3 = FUN_00405040(hFile);
  *(char *)((int)param_2 + 0x23) = (char)uVar3;
  uVar3 = FUN_00405040(hFile);
  *(char *)(param_2 + 9) = (char)uVar3;
  uVar3 = FUN_00405040(hFile);
  *(char *)((int)param_2 + 0x25) = (char)uVar3;
  uVar3 = FUN_004050b0(hFile);
  DVar6 = SetFilePointer(hFile,0,(PLONG)0x0,1);
  FUN_00403cf0(hFile,(uint *)((int)param_2 + 0x2a));
  FUN_00405100(hFile);
  uVar7 = FUN_00405040(hFile);
  BVar8 = ReadFile(hFile,(LPVOID)((int)param_2 + 0x3f),((uVar7 & 0xff) + 4 & 0xfffffffc) - 1,
                   &local_4,(LPOVERLAPPED)0x0);
  if (BVar8 != 0) {
    *(undefined1 *)((uVar7 & 0xff) + 0x3f + (int)param_2) = 0;
    lpBuffer = (uint *)((int)param_2 + 0x143);
    BVar8 = ReadFile(hFile,lpBuffer,8,&local_4,(LPOVERLAPPED)0x0);
    if (BVar8 != 0) {
      uVar7 = *lpBuffer;
      uVar1 = *(uint *)((int)param_2 + 0x147);
      *lpBuffer = (uVar7 << 0x10 | uVar7 & 0xff00) << 8 | (uVar7 & 0xff0000 | uVar7 >> 0x10) >> 8;
      *(uint *)((int)param_2 + 0x147) =
           (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
      SetFilePointer(hFile,DVar6 + uVar3,(PLONG)0x0,0);
    }
  }
  return;
}


