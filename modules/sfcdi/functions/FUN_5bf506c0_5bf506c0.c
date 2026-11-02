/* Module: sfcdi.dll
   Function: FUN_5bf506c0
   Address: 5bf506c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf506c0(undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4)

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
  undefined4 *_Dst;
  int iVar11;
  undefined4 *puVar12;
  int local_18;
  
  iVar5 = param_3;
  puVar4 = param_1;
  local_18 = 0;
  piVar1 = (int *)param_1[7];
  iVar11 = param_1[8];
  if (piVar1 == (int *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *piVar1;
  }
  if ((iVar11 < 0) || (iVar10 + -1 < iVar11)) {
    iVar11 = 0;
  }
  else {
    iVar11 = piVar1[1] * iVar11 + piVar1[2];
  }
  iVar10 = *(int *)(iVar11 + 0x14);
  iVar2 = *(int *)(iVar10 + 0x34c);
  iVar3 = *(int *)(iVar2 + 8);
  if (iVar3 == 0) goto LAB_5bf508fc;
  if (param_1[0x10] == 0) {
    if ((*(uint *)(iVar2 + 0x1c) & 2) == 0) {
      pvVar6 = CreateFileA((LPCSTR)(iVar10 + 0x224),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                           (HANDLE)0x0);
      puVar4[0xe] = pvVar6;
      if (pvVar6 == (HANDLE)0xffffffff) {
        local_18 = -0x7ffb1ff9;
        goto LAB_5bf508fc;
      }
    }
    else {
      local_18 = FUN_5bf46410((undefined4 *)param_1[0xf],(LPCSTR)(iVar10 + 0x224),
                              *(LPCSTR *)(iVar10 + 0x328),*(uint *)(iVar10 + 0x32c),
                              *(int *)(iVar10 + 0x330),*(undefined4 **)(iVar10 + 0x334),
                              *(undefined4 *)(iVar2 + 0x18));
      if (local_18 != 0) goto LAB_5bf508fc;
    }
  }
  puVar12 = param_2 + 2;
  puVar7 = param_2;
LAB_5bf507a3:
  _Dst = puVar7;
  memmove(_Dst,(void *)(iVar11 + 0xc),8);
  puVar7 = (undefined4 *)(iVar3 - puVar4[0x10]);
  if ((undefined4 *)0x7ff < puVar7) {
    puVar7 = (undefined4 *)0x800;
  }
  param_2 = puVar12;
  if ((*(uint *)(iVar2 + 0x1c) & 2) == 0) {
    BVar8 = ReadFile((HANDLE)puVar4[0xe],puVar12,(DWORD)puVar7,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    if ((BVar8 == 0) || (param_1 != puVar7)) {
      local_18 = -0x7ffb1ff8;
LAB_5bf50867:
      if (puVar4[0x10] == iVar3) {
        if (param_1 != (undefined4 *)0x800) {
          puVar12 = (undefined4 *)((int)param_2 + (int)param_1);
          for (uVar9 = 0x800U - (int)param_1 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
          for (uVar9 = 0x800U - (int)param_1 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar12 = 0;
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
        }
        param_3 = param_3 + -0x91c;
        *(byte *)((int)_Dst + 2) = *(byte *)((int)_Dst + 2) | 0x80;
        *(byte *)((int)_Dst + 6) = *(byte *)((int)_Dst + 6) | 0x80;
        if ((*(uint *)(iVar2 + 0x1c) & 2) == 0) {
          if ((*(uint *)(iVar2 + 0x1c) & 1) == 0) {
            CloseHandle((HANDLE)puVar4[0xe]);
            puVar4[0xe] = 0xffffffff;
          }
        }
        else {
          FUN_5bf463f0((undefined4 *)puVar4[0xf]);
        }
      }
      else {
        local_18 = 1;
      }
LAB_5bf508fc:
      *param_4 = iVar5 - param_3;
      return local_18;
    }
  }
  else {
    local_18 = FUN_5bf46110((undefined4 *)puVar4[0xf],puVar12,puVar7,(uint *)&param_1);
    if (local_18 < 0) goto LAB_5bf50867;
  }
  iVar10 = puVar4[0x10] + (int)param_1;
  puVar4[0x10] = iVar10;
  puVar7 = _Dst;
  if (iVar10 != iVar3) {
    puVar7 = _Dst + 0x247;
    puVar12 = puVar12 + 0x247;
    param_3 = param_3 + -0x91c;
  }
  if ((param_3 == 0) || (iVar10 == iVar3)) goto LAB_5bf50867;
  goto LAB_5bf507a3;
}


