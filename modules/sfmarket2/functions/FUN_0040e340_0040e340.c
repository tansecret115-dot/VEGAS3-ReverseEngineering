/* Module: sfmarket2.dll
   Function: FUN_0040e340
   Address: 0040e340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0040e340(void *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  DWORD DVar2;
  uint uVar3;
  HWND pHVar4;
  undefined4 *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  uint local_154 [10];
  uchar local_12c [100];
  uchar local_c8 [100];
  uchar local_64 [100];
  
  if ((*(int *)((int)this + 0x24) != 0) &&
     (((*param_1 != *param_2 || (param_1[1] != param_2[1])) &&
      (DVar2 = GetTickCount(), DVar2 - *(int *)((int)this + 0x24) < 300)))) {
    return;
  }
  DVar2 = GetTickCount();
  uVar3 = DVar2 - *(int *)((int)this + 0x20);
  if (uVar3 == 0) {
    pHVar4 = GetDlgItem(*(HWND *)((int)this + 4),0x1fd);
    puVar6 = (uchar *)FUN_004226d0(DAT_004a9c94,0x2c6);
    FUN_00426420(pHVar4,puVar6);
    return;
  }
  local_12c[0] = '\0';
  FUN_00421290(*param_1,param_1[1],local_12c);
  uVar12 = param_2[1];
  if (((int)uVar12 < 0) || (((int)uVar12 < 1 && (*param_2 == 0)))) {
    pHVar4 = GetDlgItem(*(HWND *)((int)this + 4),0x1fd);
  }
  else {
    lVar10 = __allmul(*param_1,param_1[1],100,0);
    uVar11 = __alldiv((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),*param_2,uVar12);
    pHVar4 = GetDlgItem(*(HWND *)((int)this + 4),0x1fa);
    SendMessageA(pHVar4,0x402,(WPARAM)uVar11,0);
    uVar12 = 0x2c1;
    puVar5 = (undefined4 *)FUN_00401300();
    puVar6 = (uchar *)FUN_004226d0(puVar5,uVar12);
    FUN_00426420(*(HWND *)((int)this + 4),puVar6);
    local_c8[0] = '\0';
    FUN_00421290(*param_2,param_2[1],local_c8);
    puVar9 = local_154;
    for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    uVar12 = param_1[1];
    uVar1 = *param_1;
    local_154[0] = 1;
    if ((-1 < (int)uVar12) && ((0 < (int)uVar12 || (uVar3 <= uVar1)))) {
      lVar10 = __alldiv(uVar1,uVar12,uVar3,0);
      if (lVar10 != 0) {
        lVar10 = __alldiv(*param_2 - *param_1,(param_2[1] - uVar12) - (uint)(*param_2 < *param_1),
                          (uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20));
        if (-1 < lVar10) {
          iVar8 = 1;
          lVar10 = __allmul((uint)lVar10,(int)((ulonglong)lVar10 >> 0x20),10000,0);
          FUN_0042d080(local_64,local_154,(uint)lVar10,(int)((ulonglong)lVar10 >> 0x20),iVar8);
          uVar12 = 0x2c3;
          puVar5 = (undefined4 *)FUN_00401300();
          puVar6 = (uchar *)FUN_004226d0(puVar5,uVar12);
          pHVar4 = GetDlgItem(*(HWND *)((int)this + 4),0x1fd);
          FUN_00426420(pHVar4,puVar6);
        }
      }
      goto LAB_0040e61d;
    }
    if ((-1 < (int)uVar12) && ((0 < (int)uVar12 || (uVar1 != 0)))) {
      lVar10 = __alldiv(uVar3,0,uVar1,uVar12);
      if (lVar10 != 0) {
        lVar10 = __allmul(*param_2 - *param_1,(param_2[1] - uVar12) - (uint)(*param_2 < *param_1),
                          (uint)lVar10,(int)((ulonglong)lVar10 >> 0x20));
        if (-1 < lVar10) {
          iVar8 = 1;
          lVar10 = __allmul((uint)lVar10,(int)((ulonglong)lVar10 >> 0x20),10000,0);
          FUN_0042d080(local_64,local_154,(uint)lVar10,(int)((ulonglong)lVar10 >> 0x20),iVar8);
          uVar12 = 0x2c3;
          puVar5 = (undefined4 *)FUN_00401300();
          puVar6 = (uchar *)FUN_004226d0(puVar5,uVar12);
          pHVar4 = GetDlgItem(*(HWND *)((int)this + 4),0x1fd);
          FUN_00426420(pHVar4,puVar6);
        }
      }
      goto LAB_0040e61d;
    }
    pHVar4 = GetDlgItem(*(HWND *)((int)this + 4),0x1fd);
  }
  puVar6 = (uchar *)FUN_004226d0(DAT_004a9c94,0x2c6);
  FUN_00426420(pHVar4,puVar6);
LAB_0040e61d:
  uVar12 = 0x2c2;
  puVar5 = (undefined4 *)FUN_00401300();
  puVar7 = (uchar *)FUN_004226d0(puVar5,uVar12);
  puVar6 = local_12c;
  lVar10 = __allmul(*param_1,param_1[1],1000,0);
  uVar11 = __alldiv((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),uVar3,0);
  FUN_00421290((uint)uVar11,(int)((ulonglong)uVar11 >> 0x20),puVar6);
  pHVar4 = GetDlgItem(*(HWND *)((int)this + 4),0x1fe);
  FUN_00426420(pHVar4,puVar7);
  return;
}


