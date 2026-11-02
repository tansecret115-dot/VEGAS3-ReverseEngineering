/* Module: vegas30k.dll
   Function: FUN_0114af90
   Address: 0114af90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0114af90(ulong param_1,ulong param_2,uchar *param_3,uint param_4,ulong *param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  HANDLE hFile;
  DWORD DVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint nNumberOfBytesToRead;
  uchar *puVar9;
  ulong local_14;
  int local_4;
  
  uVar3 = param_2;
  uVar2 = param_1;
  iVar8 = 0;
  iVar1 = *(int *)(param_2 + 0x34c);
  local_14 = 0;
  uVar6 = *(uint *)(iVar1 + 0xc);
  if (uVar6 == 0) goto LAB_0114b146;
  local_14 = 0;
  uVar7 = *(uint *)(param_1 + 0x30);
  if (uVar6 <= uVar7) goto LAB_0114b146;
  nNumberOfBytesToRead = param_4;
  if (uVar6 - uVar7 < param_4) {
    nNumberOfBytesToRead = uVar6 - uVar7;
  }
  if ((*(uint *)(iVar1 + 0x28) & 1) == 0) {
    if ((*(uint *)(iVar1 + 0x28) & 2) != 0) {
      if ((uVar7 == 0) &&
         (iVar8 = SfCdiInitFileStream(*(void **)(param_1 + 0x2c),(char *)(param_2 + 0x224),
                                      *(__uint64 *)(param_2 + 0x328),*(__uint64 *)(param_2 + 0x330),
                                      *(ulong *)(iVar1 + 0x24)), uVar3 = param_2, iVar8 != 0))
      goto LAB_0114b146;
      iVar8 = SfCdiReadFileStream(*(void **)(uVar2 + 0x2c),param_3,nNumberOfBytesToRead,&param_1);
      uVar3 = param_2;
      goto joined_r0x0114b077;
    }
    if (*(int *)(param_1 + 0x24) != -1) goto LAB_0114b0ff;
    hFile = CreateFileA((LPCSTR)(param_2 + 0x224),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                        (HANDLE)0x0);
    *(HANDLE *)(uVar2 + 0x24) = hFile;
    if (hFile == (HANDLE)0xffffffff) {
      iVar8 = -0x7ffb1ff9;
      uVar3 = param_2;
      goto LAB_0114b146;
    }
    if ((*(uint *)(uVar3 + 0x218) & 1) != 0) {
      local_4 = *(int *)(uVar3 + 0x32c);
      DVar4 = SetFilePointer(hFile,*(LONG *)(uVar3 + 0x328),&local_4,0);
      if (((DVar4 != 0xffffffff) || (local_4 != -1)) || (DVar4 = GetLastError(), DVar4 == 0))
      goto LAB_0114b0ff;
LAB_0114b141:
      iVar8 = -0x7ffb1ff8;
      uVar3 = param_2;
      goto LAB_0114b146;
    }
LAB_0114b0ff:
    BVar5 = ReadFile(*(HANDLE *)(uVar2 + 0x24),param_3,nNumberOfBytesToRead,&param_2,
                     (LPOVERLAPPED)0x0);
    if ((BVar5 == 0) || (param_2 != nNumberOfBytesToRead)) goto LAB_0114b141;
  }
  else {
    iVar8 = SfCdiGetDataFromLookaside(*(void **)(param_1 + 0x28),param_3,nNumberOfBytesToRead);
    uVar3 = param_2;
joined_r0x0114b077:
    param_2 = nNumberOfBytesToRead;
    if (iVar8 != 0) goto LAB_0114b146;
  }
  param_3 = param_3 + param_2;
  *(ulong *)(uVar2 + 0x30) = *(int *)(uVar2 + 0x30) + param_2;
  uVar3 = param_2;
  local_14 = param_2;
LAB_0114b146:
  param_2 = uVar3;
  if (*(uint *)(uVar2 + 0x30) == uVar6) {
    if ((uVar6 & 0x7ff) != 0) {
      uVar7 = 0x800 - (uVar6 & 0x7ff);
      puVar9 = param_3;
      for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        puVar9[0] = '\0';
        puVar9[1] = '\0';
        puVar9[2] = '\0';
        puVar9[3] = '\0';
        puVar9 = puVar9 + 4;
      }
      for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = '\0';
        puVar9 = puVar9 + 1;
      }
      local_14 = local_14 + uVar7;
    }
    if ((*(uint *)(iVar1 + 0x28) & 2) == 0) {
      CloseHandle(*(HANDLE *)(uVar2 + 0x24));
      *(undefined4 *)(uVar2 + 0x24) = 0xffffffff;
    }
    else {
      SfCdiDeinitFileStream(*(void **)(uVar2 + 0x2c));
    }
    *(undefined4 *)(uVar2 + 0x30) = 0;
    *param_5 = local_14;
    return iVar8;
  }
  *param_5 = local_14;
  return 1;
}


