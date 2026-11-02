/* Module: vegas30k.dll
   Function: FUN_011299d0
   Address: 011299d0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_011299d0(ulong param_1,uchar *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  HANDLE pvVar5;
  uint uVar6;
  BOOL BVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uchar *lpBuffer;
  uchar *puVar11;
  long local_14;
  
  iVar4 = param_3;
  uVar3 = param_1;
  iVar10 = 0;
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar8 = *(int *)(param_1 + 0x20);
  local_14 = 0;
  if (piVar1 == (int *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *piVar1;
  }
  if ((-1 < iVar8) && (iVar8 <= iVar9 + -1)) {
    iVar10 = piVar1[1] * iVar8 + piVar1[2];
  }
  iVar8 = *(int *)(iVar10 + 0x14);
  iVar9 = *(int *)(iVar8 + 0x34c);
  iVar2 = *(int *)(iVar9 + 8);
  if (iVar2 == 0) goto LAB_01129bf0;
  if (*(int *)(param_1 + 0x40) == 0) {
    if ((*(uint *)(iVar9 + 0x1c) & 2) == 0) {
      pvVar5 = CreateFileA((LPCSTR)(iVar8 + 0x224),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                           (HANDLE)0x0);
      *(HANDLE *)(uVar3 + 0x38) = pvVar5;
      if (pvVar5 == (HANDLE)0xffffffff) {
        local_14 = -0x7ffb1ff9;
        goto LAB_01129bf0;
      }
    }
    else {
      local_14 = SfCdiInitFileStream(*(void **)(param_1 + 0x3c),(char *)(iVar8 + 0x224),
                                     *(__uint64 *)(iVar8 + 0x328),*(__uint64 *)(iVar8 + 0x330),
                                     *(ulong *)(iVar9 + 0x18));
      if (local_14 != 0) goto LAB_01129bf0;
    }
  }
  puVar11 = param_2 + 0x18;
LAB_01129aad:
  lpBuffer = puVar11;
  memmove(lpBuffer + -8,(void *)(iVar10 + 0xc),8);
  uVar6 = iVar2 - *(int *)(uVar3 + 0x40);
  if (0x7ff < uVar6) {
    uVar6 = 0x800;
  }
  param_2 = lpBuffer;
  if ((*(uint *)(iVar9 + 0x1c) & 2) == 0) {
    BVar7 = ReadFile(*(HANDLE *)(uVar3 + 0x38),lpBuffer,uVar6,&param_1,(LPOVERLAPPED)0x0);
    if ((BVar7 == 0) || (param_1 != uVar6)) {
      local_14 = -0x7ffb1ff8;
LAB_01129b5a:
      if (*(int *)(uVar3 + 0x40) == iVar2) {
        if (param_1 != 0x914) {
          puVar11 = param_2 + param_1;
          for (uVar6 = 0x914 - param_1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            puVar11[0] = '\0';
            puVar11[1] = '\0';
            puVar11[2] = '\0';
            puVar11[3] = '\0';
            puVar11 = puVar11 + 4;
          }
          for (uVar6 = 0x914 - param_1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar11 = '\0';
            puVar11 = puVar11 + 1;
          }
        }
        lpBuffer[-2] = lpBuffer[-2] | 0x80;
        param_3 = param_3 + -0x930;
        lpBuffer[-6] = lpBuffer[-6] | 0x80;
        if ((*(uint *)(iVar9 + 0x1c) & 2) == 0) {
          if ((*(uint *)(iVar9 + 0x1c) & 1) == 0) {
            CloseHandle(*(HANDLE *)(uVar3 + 0x38));
            *(undefined4 *)(uVar3 + 0x38) = 0xffffffff;
          }
        }
        else {
          SfCdiDeinitFileStream(*(void **)(uVar3 + 0x3c));
        }
      }
      else {
        local_14 = 1;
      }
LAB_01129bf0:
      *param_4 = iVar4 - param_3;
      return local_14;
    }
  }
  else {
    local_14 = SfCdiReadFileStream(*(void **)(uVar3 + 0x3c),lpBuffer,uVar6,&param_1);
    if (local_14 < 0) goto LAB_01129b5a;
  }
  iVar8 = *(int *)(uVar3 + 0x40) + param_1;
  param_3 = param_3 + -0x930;
  *(int *)(uVar3 + 0x40) = iVar8;
  if ((param_3 == 0) || (puVar11 = lpBuffer + 0x930, iVar8 == iVar2)) goto LAB_01129b5a;
  goto LAB_01129aad;
}


