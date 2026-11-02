/* Module: sfnetmedia.dll
   Function: FUN_0040f810
   Address: 0040f810
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0040f810(void *this,undefined4 param_1,uint param_2,uint param_3)

{
  WPARAM wParam;
  DWORD DVar1;
  uint uVar2;
  HWND pHVar3;
  undefined4 *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  LPARAM lParam;
  uint uVar12;
  double local_344;
  uint local_334 [10];
  uchar local_30c [260];
  uchar local_208 [260];
  uchar local_104 [260];
  
  iVar8 = (int)param_3 >> 0x1f;
  if (param_3 == 0) {
    _DAT_004418bc = GetTickCount();
    DAT_004418c0 = 0;
    return 0;
  }
  puVar9 = local_334;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_334[0] = 1;
  DVar1 = GetTickCount();
  uVar2 = DVar1 - *(int *)(*(int *)((int)this + 0x1c) + 0xdb0);
  local_344 = 1.0;
  pHVar3 = GetDlgItem(*(HWND *)((int)this + 4),0x1f9);
  if (pHVar3 == (HWND)0x0) goto LAB_0040f980;
  if (((param_2 == 0) || (iVar8 < 0)) || ((iVar8 < 1 && (param_3 == 0)))) {
    SendMessageA(pHVar3,0x406,0,100);
    wParam = DAT_004418c0;
    DAT_004418c0 = DAT_004418c0 + 1;
    SendMessageA(pHVar3,0x402,wParam,0);
    local_344 = 0.9999;
  }
  else {
    if ((((param_2 == param_3) && (-1 < (int)param_3)) || (iVar8 < 0)) ||
       ((iVar8 < 1 && (param_3 == 0)))) {
      SendMessageA(pHVar3,0x406,0,100);
      SendMessageA(pHVar3,0x402,100,0);
      goto LAB_0040f980;
    }
    local_344 = (double)param_2 / (double)(longlong)(int)param_3;
    uVar10 = __allshr(8,iVar8);
    SendMessageA(pHVar3,0x406,0,(LPARAM)uVar10);
    lParam = 0;
    uVar10 = __allshr(8,0);
    SendMessageA(pHVar3,0x402,(WPARAM)uVar10,lParam);
    if (_DAT_00435fc8 == local_344) goto LAB_0040f980;
  }
  DVar1 = GetTickCount();
  if (DVar1 - _DAT_004418bc < 500) {
    return 0;
  }
LAB_0040f980:
  FUN_00414040(param_2,0,local_208);
  FUN_00414040(param_3,iVar8,local_104);
  _DAT_004418bc = GetTickCount();
  if (((param_2 == 0) || (iVar8 < 0)) || ((iVar8 < 1 && (param_3 == 0)))) {
    iVar8 = 1;
    lVar11 = __allmul(uVar2,0,10000,0);
    FUN_00422740(local_30c,local_334,(uint)lVar11,(int)((ulonglong)lVar11 >> 0x20),iVar8);
    pHVar3 = GetDlgItem(*(HWND *)((int)this + 4),0x1fb);
    uVar2 = 0x79;
    puVar4 = (undefined4 *)FUN_004012d0();
    puVar5 = (uchar *)FUN_00418380(puVar4,uVar2);
    FUN_004170b0(pHVar3,puVar5);
    uVar2 = 0x7a;
    puVar4 = (undefined4 *)FUN_004012d0();
    puVar5 = (uchar *)FUN_00418380(puVar4,uVar2);
    pHVar3 = GetDlgItem(*(HWND *)((int)this + 4),0x1f6);
    FUN_004170b0(pHVar3,puVar5);
    pHVar3 = GetDlgItem(*(HWND *)((int)this + 4),0x1fc);
    FUN_004170b0(pHVar3,"");
    pHVar3 = GetDlgItem(*(HWND *)((int)this + 4),0x1f8);
    FUN_004170b0(pHVar3,"");
    iVar8 = *(int *)((int)this + 0x1c);
    pHVar3 = GetParent(*(HWND *)(iVar8 + 0xda0));
    SendMessageA(pHVar3,0xf92,0,iVar8);
  }
  else if (_DAT_00435fc0 < local_344) {
    iVar8 = 1;
    uVar10 = ftol();
    lVar11 = __allmul((uint)uVar10,(int)((ulonglong)uVar10 >> 0x20),10000,0);
    FUN_00422740(local_30c,local_334,(uint)lVar11,(int)((ulonglong)lVar11 >> 0x20),iVar8);
    uVar12 = 0x7d;
    puVar4 = (undefined4 *)FUN_004012d0();
    puVar5 = (uchar *)FUN_00418380(puVar4,uVar12);
    pHVar3 = GetDlgItem(*(HWND *)((int)this + 4),0x1f6);
    FUN_004170b0(pHVar3,puVar5);
    if (uVar2 != 0) {
      uVar12 = 0x7c;
      puVar4 = (undefined4 *)FUN_004012d0();
      puVar6 = (uchar *)FUN_00418380(puVar4,uVar12);
      puVar5 = local_208;
      lVar11 = __allmul(param_2,0,1000,0);
      uVar10 = __alldiv((uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),uVar2,0);
      FUN_00414040((uint)uVar10,(int)((ulonglong)uVar10 >> 0x20),puVar5);
      pHVar3 = GetDlgItem(*(HWND *)((int)this + 4),0x1f8);
      FUN_004170b0(pHVar3,puVar6);
    }
    uVar2 = 0x7b;
    puVar4 = (undefined4 *)FUN_004012d0();
    puVar5 = (uchar *)FUN_00418380(puVar4,uVar2);
    iVar8 = *(int *)((int)this + 0x1c);
    ftol(iVar8 + 0x927);
    FUN_004170b0(*(HWND *)(iVar8 + 0xda0),puVar5);
    iVar8 = *(int *)((int)this + 0x1c);
    pHVar3 = GetParent(*(HWND *)(iVar8 + 0xda0));
    uVar2 = ftol();
    SendMessageA(pHVar3,0xf92,uVar2 & 0xffff,iVar8);
    return 0;
  }
  return 0;
}


