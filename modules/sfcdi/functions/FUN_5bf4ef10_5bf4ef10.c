/* Module: sfcdi.dll
   Function: FUN_5bf4ef10
   Address: 5bf4ef10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf4ef10(undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  HANDLE pvVar6;
  undefined4 *puVar7;
  BOOL BVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *lpBuffer;
  int local_14;
  
  iVar5 = param_3;
  puVar4 = param_1;
  iVar11 = 0;
  piVar1 = (int *)param_1[7];
  iVar2 = param_1[8];
  local_14 = 0;
  if (piVar1 == (int *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *piVar1;
  }
  if ((-1 < iVar2) && (iVar2 <= iVar10 + -1)) {
    iVar11 = piVar1[1] * iVar2 + piVar1[2];
  }
  iVar2 = *(int *)(iVar11 + 0x14);
  iVar10 = *(int *)(iVar2 + 0x34c);
  iVar3 = *(int *)(iVar10 + 8);
  if (iVar3 == 0) goto LAB_5bf4f130;
  if (param_1[0x10] == 0) {
    if ((*(uint *)(iVar10 + 0x1c) & 2) == 0) {
      pvVar6 = CreateFileA((LPCSTR)(iVar2 + 0x224),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                           (HANDLE)0x0);
      puVar4[0xe] = pvVar6;
      if (pvVar6 == (HANDLE)0xffffffff) {
        local_14 = -0x7ffb1ff9;
        goto LAB_5bf4f130;
      }
    }
    else {
      local_14 = FUN_5bf46410((undefined4 *)param_1[0xf],(LPCSTR)(iVar2 + 0x224),
                              *(LPCSTR *)(iVar2 + 0x328),*(uint *)(iVar2 + 0x32c),
                              *(int *)(iVar2 + 0x330),*(undefined4 **)(iVar2 + 0x334),
                              *(undefined4 *)(iVar10 + 0x18));
      if (local_14 != 0) goto LAB_5bf4f130;
    }
  }
  puVar7 = param_2 + 6;
LAB_5bf4efed:
  lpBuffer = puVar7;
  memmove(lpBuffer + -2,(void *)(iVar11 + 0xc),8);
  puVar7 = (undefined4 *)(iVar3 - puVar4[0x10]);
  if ((undefined4 *)0x7ff < puVar7) {
    puVar7 = (undefined4 *)0x800;
  }
  param_2 = lpBuffer;
  if ((*(uint *)(iVar10 + 0x1c) & 2) == 0) {
    BVar8 = ReadFile((HANDLE)puVar4[0xe],lpBuffer,(DWORD)puVar7,(LPDWORD)&param_1,(LPOVERLAPPED)0x0)
    ;
    if ((BVar8 == 0) || (param_1 != puVar7)) {
      local_14 = -0x7ffb1ff8;
LAB_5bf4f09a:
      if (puVar4[0x10] == iVar3) {
        if (param_1 != (undefined4 *)0x914) {
          puVar7 = (undefined4 *)((int)param_2 + (int)param_1);
          for (uVar9 = 0x914U - (int)param_1 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          for (uVar9 = 0x914U - (int)param_1 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar7 = 0;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
        }
        *(byte *)((int)lpBuffer + -2) = *(byte *)((int)lpBuffer + -2) | 0x80;
        param_3 = param_3 + -0x930;
        *(byte *)((int)lpBuffer + -6) = *(byte *)((int)lpBuffer + -6) | 0x80;
        if ((*(uint *)(iVar10 + 0x1c) & 2) == 0) {
          if ((*(uint *)(iVar10 + 0x1c) & 1) == 0) {
            CloseHandle((HANDLE)puVar4[0xe]);
            puVar4[0xe] = 0xffffffff;
          }
        }
        else {
          FUN_5bf463f0((undefined4 *)puVar4[0xf]);
        }
      }
      else {
        local_14 = 1;
      }
LAB_5bf4f130:
      *param_4 = iVar5 - param_3;
      return local_14;
    }
  }
  else {
    local_14 = FUN_5bf46110((undefined4 *)puVar4[0xf],lpBuffer,puVar7,(uint *)&param_1);
    if (local_14 < 0) goto LAB_5bf4f09a;
  }
  iVar2 = puVar4[0x10];
  param_3 = param_3 + -0x930;
  puVar4[0x10] = iVar2 + (int)param_1;
  if ((param_3 == 0) || (puVar7 = lpBuffer + 0x24c, iVar2 + (int)param_1 == iVar3))
  goto LAB_5bf4f09a;
  goto LAB_5bf4efed;
}


