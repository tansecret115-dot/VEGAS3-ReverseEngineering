/* Module: sfcdi.dll
   Function: FUN_5bf49480
   Address: 5bf49480
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf49480(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                int *param_5)

{
  int iVar1;
  uint uVar2;
  HANDLE hFile;
  DWORD DVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *nNumberOfBytesToRead;
  undefined4 *puVar8;
  undefined4 *local_14;
  int local_4;
  
  puVar8 = param_2;
  uVar2 = param_1;
  iVar7 = 0;
  iVar1 = param_2[0xd3];
  local_14 = (undefined4 *)0x0;
  uVar5 = *(uint *)(iVar1 + 0xc);
  if (uVar5 == 0) goto LAB_5bf49636;
  local_14 = (undefined4 *)0x0;
  uVar6 = *(uint *)(param_1 + 0x30);
  if (uVar5 <= uVar6) goto LAB_5bf49636;
  nNumberOfBytesToRead = param_4;
  if ((undefined4 *)(uVar5 - uVar6) < param_4) {
    nNumberOfBytesToRead = (undefined4 *)(uVar5 - uVar6);
  }
  if ((*(uint *)(iVar1 + 0x28) & 1) == 0) {
    if ((*(uint *)(iVar1 + 0x28) & 2) != 0) {
      if ((uVar6 == 0) &&
         (iVar7 = FUN_5bf46410(*(undefined4 **)(param_1 + 0x2c),(LPCSTR)(param_2 + 0x89),
                               (LPCSTR)param_2[0xca],param_2[0xcb],param_2[0xcc],
                               (undefined4 *)param_2[0xcd],*(undefined4 *)(iVar1 + 0x24)),
         puVar8 = param_2, iVar7 != 0)) goto LAB_5bf49636;
      iVar7 = FUN_5bf46110(*(undefined4 **)(uVar2 + 0x2c),param_3,nNumberOfBytesToRead,&param_1);
      puVar8 = param_2;
      goto joined_r0x5bf49567;
    }
    if (*(int *)(param_1 + 0x24) != -1) goto LAB_5bf495ef;
    hFile = CreateFileA((LPCSTR)(param_2 + 0x89),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                        (HANDLE)0x0);
    *(HANDLE *)(uVar2 + 0x24) = hFile;
    if (hFile == (HANDLE)0xffffffff) {
      iVar7 = -0x7ffb1ff9;
      puVar8 = param_2;
      goto LAB_5bf49636;
    }
    if ((puVar8[0x86] & 1) != 0) {
      local_4 = puVar8[0xcb];
      DVar3 = SetFilePointer(hFile,puVar8[0xca],&local_4,0);
      if (((DVar3 != 0xffffffff) || (local_4 != -1)) || (DVar3 = GetLastError(), DVar3 == 0))
      goto LAB_5bf495ef;
LAB_5bf49631:
      iVar7 = -0x7ffb1ff8;
      puVar8 = param_2;
      goto LAB_5bf49636;
    }
LAB_5bf495ef:
    BVar4 = ReadFile(*(HANDLE *)(uVar2 + 0x24),param_3,(DWORD)nNumberOfBytesToRead,(LPDWORD)&param_2
                     ,(LPOVERLAPPED)0x0);
    if ((BVar4 == 0) || (param_2 != nNumberOfBytesToRead)) goto LAB_5bf49631;
  }
  else {
    iVar7 = FUN_5bf46e10(*(DWORD *)(param_1 + 0x28),param_3,(uint)nNumberOfBytesToRead);
    puVar8 = param_2;
joined_r0x5bf49567:
    param_2 = nNumberOfBytesToRead;
    if (iVar7 != 0) goto LAB_5bf49636;
  }
  param_3 = (undefined4 *)((int)param_3 + (int)param_2);
  *(int *)(uVar2 + 0x30) = *(int *)(uVar2 + 0x30) + (int)param_2;
  puVar8 = param_2;
  local_14 = param_2;
LAB_5bf49636:
  param_2 = puVar8;
  if (*(uint *)(uVar2 + 0x30) == uVar5) {
    if ((uVar5 & 0x7ff) != 0) {
      uVar6 = 0x800 - (uVar5 & 0x7ff);
      puVar8 = param_3;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      local_14 = (undefined4 *)((int)local_14 + uVar6);
    }
    if ((*(uint *)(iVar1 + 0x28) & 2) == 0) {
      CloseHandle(*(HANDLE *)(uVar2 + 0x24));
      *(undefined4 *)(uVar2 + 0x24) = 0xffffffff;
    }
    else {
      FUN_5bf463f0(*(undefined4 **)(uVar2 + 0x2c));
    }
    *(undefined4 *)(uVar2 + 0x30) = 0;
    *param_5 = (int)local_14;
    return iVar7;
  }
  *param_5 = (int)local_14;
  return 1;
}


