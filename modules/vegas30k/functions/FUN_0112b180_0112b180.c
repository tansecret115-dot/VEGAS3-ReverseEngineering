/* Module: vegas30k.dll
   Function: FUN_0112b180
   Address: 0112b180
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_0112b180(ulong param_1,uchar *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  HANDLE pvVar6;
  uint uVar7;
  BOOL BVar8;
  int iVar9;
  uchar *_Dst;
  uchar *puVar10;
  int iVar11;
  uchar *puVar12;
  long local_18;
  
  iVar5 = param_3;
  uVar4 = param_1;
  local_18 = 0;
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar11 = *(int *)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *piVar1;
  }
  if ((iVar11 < 0) || (iVar9 + -1 < iVar11)) {
    iVar11 = 0;
  }
  else {
    iVar11 = piVar1[1] * iVar11 + piVar1[2];
  }
  iVar9 = *(int *)(iVar11 + 0x14);
  iVar2 = *(int *)(iVar9 + 0x34c);
  iVar3 = *(int *)(iVar2 + 8);
  if (iVar3 == 0) goto LAB_0112b3bc;
  if (*(int *)(param_1 + 0x40) == 0) {
    if ((*(uint *)(iVar2 + 0x1c) & 2) == 0) {
      pvVar6 = CreateFileA((LPCSTR)(iVar9 + 0x224),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                           (HANDLE)0x0);
      *(HANDLE *)(uVar4 + 0x38) = pvVar6;
      if (pvVar6 == (HANDLE)0xffffffff) {
        local_18 = -0x7ffb1ff9;
        goto LAB_0112b3bc;
      }
    }
    else {
      local_18 = SfCdiInitFileStream(*(void **)(param_1 + 0x3c),(char *)(iVar9 + 0x224),
                                     *(__uint64 *)(iVar9 + 0x328),*(__uint64 *)(iVar9 + 0x330),
                                     *(ulong *)(iVar2 + 0x18));
      if (local_18 != 0) goto LAB_0112b3bc;
    }
  }
  puVar12 = param_2 + 8;
  puVar10 = param_2;
LAB_0112b263:
  _Dst = puVar10;
  memmove(_Dst,(void *)(iVar11 + 0xc),8);
  uVar7 = iVar3 - *(int *)(uVar4 + 0x40);
  if (0x7ff < uVar7) {
    uVar7 = 0x800;
  }
  param_2 = puVar12;
  if ((*(uint *)(iVar2 + 0x1c) & 2) == 0) {
    BVar8 = ReadFile(*(HANDLE *)(uVar4 + 0x38),puVar12,uVar7,&param_1,(LPOVERLAPPED)0x0);
    if ((BVar8 == 0) || (param_1 != uVar7)) {
      local_18 = -0x7ffb1ff8;
LAB_0112b327:
      if (*(int *)(uVar4 + 0x40) == iVar3) {
        if (param_1 != 0x800) {
          puVar12 = param_2 + param_1;
          for (uVar7 = 0x800 - param_1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            puVar12[0] = '\0';
            puVar12[1] = '\0';
            puVar12[2] = '\0';
            puVar12[3] = '\0';
            puVar12 = puVar12 + 4;
          }
          for (uVar7 = 0x800 - param_1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar12 = '\0';
            puVar12 = puVar12 + 1;
          }
        }
        param_3 = param_3 + -0x91c;
        _Dst[2] = _Dst[2] | 0x80;
        _Dst[6] = _Dst[6] | 0x80;
        if ((*(uint *)(iVar2 + 0x1c) & 2) == 0) {
          if ((*(uint *)(iVar2 + 0x1c) & 1) == 0) {
            CloseHandle(*(HANDLE *)(uVar4 + 0x38));
            *(undefined4 *)(uVar4 + 0x38) = 0xffffffff;
          }
        }
        else {
          SfCdiDeinitFileStream(*(void **)(uVar4 + 0x3c));
        }
      }
      else {
        local_18 = 1;
      }
LAB_0112b3bc:
      *param_4 = iVar5 - param_3;
      return local_18;
    }
  }
  else {
    local_18 = SfCdiReadFileStream(*(void **)(uVar4 + 0x3c),puVar12,uVar7,&param_1);
    if (local_18 < 0) goto LAB_0112b327;
  }
  iVar9 = *(int *)(uVar4 + 0x40) + param_1;
  *(int *)(uVar4 + 0x40) = iVar9;
  puVar10 = _Dst;
  if (iVar9 != iVar3) {
    puVar10 = _Dst + 0x91c;
    puVar12 = puVar12 + 0x91c;
    param_3 = param_3 + -0x91c;
  }
  if ((param_3 == 0) || (iVar9 == iVar3)) goto LAB_0112b327;
  goto LAB_0112b263;
}


