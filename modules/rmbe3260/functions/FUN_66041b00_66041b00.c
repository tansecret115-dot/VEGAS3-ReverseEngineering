/* Module: rmbe3260.dll
   Function: FUN_66041b00
   Address: 66041b00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66041b00(void *this,int param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  BOOL BVar3;
  byte *pbVar4;
  short *psVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined2 uVar13;
  undefined4 *puVar14;
  int local_2c;
  undefined4 uStack_28;
  undefined2 local_24;
  int local_20;
  undefined4 uStack_1c;
  int local_18;
  int local_14;
  uint local_10;
  DWORD local_c;
  byte *local_8;
  
  iVar8 = param_1;
  if ((DAT_66075300 == 0) && (DAT_66075304 == 0)) {
    BVar3 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_66075300);
    if ((BVar3 != 0) &&
       (BVar3 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_66075308), BVar3 != 0))
    goto LAB_66041bb7;
LAB_66041bd4:
    local_c = GetTickCount();
  }
  else {
    BVar3 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_66075308);
    if (BVar3 == 0) goto LAB_66041bd4;
LAB_66041bb7:
    uStack_1c = 0;
    local_20 = DAT_66075300;
    local_c = ftol();
  }
  local_18 = 0;
  *(undefined4 *)((int)this + 0xba) = 0;
  if (*(int *)((int)this + 0x144) == 0) {
    uVar6 = *(undefined4 *)((int)this + 0x7a);
    *(undefined4 *)((int)this + 0x144) = 1;
    *(undefined4 *)((int)this + 0x108) = uVar6;
    *(undefined4 *)((int)this + 0x10c) = uVar6;
    *(undefined4 *)((int)this + 0x120) = uVar6;
  }
  iVar7 = *(int *)((int)this + 0xda);
  if (*(int *)(param_1 + 0x10) == *(int *)((int)this + 0xc2) + iVar7) {
    local_14 = *(int *)(param_1 + 8);
    local_8 = *(byte **)(param_1 + 0xc);
    local_10 = 0;
    if ((iVar7 != 0) && (*(int *)((int)this + 0xd6) != 0)) {
      *(int *)((int)this + 0xe2) = iVar7;
      pbVar4 = operator_new(*(uint *)((int)this + 0xae));
      uVar10 = *(uint *)((int)this + 0xda);
      *(byte **)((int)this + 0xde) = pbVar4;
      pbVar11 = local_8 + *(int *)((int)this + 0xc2);
      for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar4 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pbVar4 = pbVar4 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pbVar4 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar4 = pbVar4 + 1;
      }
    }
    if ((*(int *)((int)this + 0xe2) != 0) && (*(int *)((int)this + 0xd6) == 0)) {
      uVar10 = *(uint *)(param_1 + 0x10);
      puVar12 = *(undefined4 **)(param_1 + 0xc);
      puVar14 = (undefined4 *)(*(int *)((int)this + 0xde) + *(int *)((int)this + 0xe2));
      for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      local_8 = *(byte **)((int)this + 0xde);
      iVar7 = *(int *)((int)this + 0xe2);
      *(undefined4 *)((int)this + 0xe2) = 0;
      *(int *)((int)this + 0xc2) = *(int *)((int)this + 0xc2) + iVar7;
    }
    if (*(int *)((int)this + 0xca) != 0) {
      uVar10 = 0;
      psVar5 = *(short **)((int)this + 0xc6);
      if (*(int *)(param_1 + 0x10) != 0) {
        do {
          *psVar5 = (*local_8 - 0x80) * 0x100;
          local_8 = local_8 + 1;
          uVar10 = uVar10 + 1;
          psVar5 = psVar5 + 1;
        } while (uVar10 < *(uint *)(param_1 + 0x10));
      }
      local_8 = *(byte **)((int)this + 0xc6);
      *(int *)((int)this + 0xc2) = *(int *)((int)this + 0xc2) << 1;
    }
    uVar6 = (**(code **)(**(int **)((int)this + 0x56) + 0xc))(&uStack_1c);
    *(undefined4 *)((int)this + 0xba) = uVar6;
    if ((DAT_66075300 == 0) && (DAT_66075304 == 0)) {
      BVar3 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_66075300);
      if ((BVar3 != 0) &&
         (BVar3 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_66075308), BVar3 != 0))
      goto LAB_66041dec;
LAB_66041e09:
      uVar10 = GetTickCount();
    }
    else {
      BVar3 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_66075308);
      if (BVar3 == 0) goto LAB_66041e09;
LAB_66041dec:
      uStack_28 = 0;
      local_2c = DAT_66075300;
      uVar10 = ftol();
    }
    puVar1 = (uint *)((int)this + 0xc2);
    local_8 = (byte *)FUN_66043c40(*(void **)((int)this + 0xaa),(short *)local_8,*puVar1,
                                   *(undefined4 **)((int)this + 0xba),&local_10,&local_14,
                                   (int *)puVar1);
    if ((DAT_66075300 == 0) && (DAT_66075304 == 0)) {
      BVar3 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_66075300);
      if ((BVar3 != 0) &&
         (BVar3 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_66075308), BVar3 != 0))
      goto LAB_66041ef2;
LAB_66041f0f:
      uVar9 = GetTickCount();
    }
    else {
      BVar3 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_66075308);
      if (BVar3 == 0) goto LAB_66041f0f;
LAB_66041ef2:
      uStack_28 = 0;
      local_2c = DAT_66075300;
      uVar9 = ftol();
    }
    if (uVar9 < uVar10) {
      iVar7 = (uVar9 - uVar10) + -1;
    }
    else {
      iVar7 = uVar9 - uVar10;
    }
    *(int *)((int)this + 0x13c) = iVar7;
    if (*(int *)((int)this + 0xca) != 0) {
      *puVar1 = *puVar1 >> 1;
    }
    iVar7 = *(int *)((int)this + 0xda);
    if (iVar7 != 0) {
      *(undefined4 *)((int)this + 0xda) = 0;
      *puVar1 = *puVar1 - iVar7;
    }
    *(undefined4 *)((int)this + 0xd6) = 0;
    if (local_8 == (byte *)0x0) {
      *(uint *)(param_1 + 0x2c) = *puVar1;
      if (local_10 == 0) {
        param_1 = 0;
      }
      else {
        uVar2 = (ulonglong)*(ushort *)((int)this + 0xd4) %
                (ulonglong)(longlong)(int)(uint)*(ushort *)((int)this + 0xd2);
        uVar13 = 0;
        if ((int)uVar2 == 0) {
          *(short *)((int)this + 0xd4) = (short)uVar2;
          uVar13 = 2;
        }
        *(short *)((int)this + 0xd4) = *(short *)((int)this + 0xd4) + 1;
        FUN_6602f240(&local_2c);
        local_2c = local_14;
        local_24 = uVar13;
        iVar7 = (**(code **)(*(int *)this + 0x34))
                          (*(undefined4 *)((int)this + 0xba),local_10,&local_2c,0);
        local_18 = 1;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        param_1 = iVar7;
      }
    }
    else {
      param_1 = 0xfff2;
    }
  }
  else {
    param_1 = 0xfff7;
  }
  if (param_1 != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x42) + 4) = 1;
  }
  if ((local_18 == 0) && (*(int *)((int)this + 0xba) != 0)) {
    (**(code **)(**(int **)((int)this + 0x56) + 0x1c))(*(int *)((int)this + 0xba));
  }
  if (param_1 == 0) {
    FUN_66042320(this,*(uint *)(iVar8 + 8));
  }
  if ((DAT_66075300 == 0) && (DAT_66075304 == 0)) {
    BVar3 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_66075300);
    if (BVar3 != 0) {
      iVar8 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_66075308);
      goto joined_r0x66042098;
    }
  }
  else {
    iVar8 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_66075308);
joined_r0x66042098:
    if (iVar8 != 0) {
      uStack_28 = 0;
      local_2c = DAT_66075300;
      uVar10 = ftol();
      goto LAB_660420ee;
    }
  }
  uVar10 = GetTickCount();
LAB_660420ee:
  if (uVar10 < local_c) {
    uVar10 = (uVar10 - local_c) - 1;
  }
  else {
    uVar10 = uVar10 - local_c;
  }
  *(double *)((int)this + 0x62) = (double)uVar10 + *(double *)((int)this + 0x62);
  return param_1;
}


