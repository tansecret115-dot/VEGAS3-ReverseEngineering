/* Module: sftrans1.dll
   Function: FUN_0053f4f0
   Address: 0053f4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0053f4f0(int param_1)

{
  LPCVOID pvVar1;
  int *piVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  uchar local_74 [32];
  undefined1 local_54 [8];
  LPCVOID local_4c;
  undefined4 local_48;
  uchar local_44 [36];
  int local_20;
  undefined1 local_1c;
  undefined1 local_14;
  
  pvVar1 = *(LPCVOID *)(param_1 + 0x168);
  if (pvVar1 != (LPCVOID)0x0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x18) + 0x40);
    if (*(int *)(param_1 + 0x15c) == iVar5) {
      if (iVar5 < 1) goto LAB_0053f58c;
      if (*(int **)((int)pvVar1 + 4) == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = **(int **)((int)pvVar1 + 4);
      }
      if (iVar6 != iVar5) goto LAB_0053f58c;
    }
    if (pvVar1 != (LPCVOID)0x0) {
      FUN_00542be0();
      pvVar3 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pvVar1);
      GlobalFree(pvVar3);
    }
  }
  pvVar3 = GlobalAlloc(0x40,0x18);
  pvVar4 = GlobalLock(pvVar3);
  if (pvVar4 == (LPVOID)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00542bc0();
  }
  *(int *)(param_1 + 0x168) = iVar5;
  if (iVar5 == 0) {
    return -0x7ff8fff2;
  }
LAB_0053f58c:
  if ((*(int *)(*(int *)(param_1 + 0x168) + 0x14) != 0) ||
     (iVar5 = FUN_00542c40(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40)), -1 < iVar5)) {
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40);
    if (*(int *)(param_1 + 4) == 0) {
      local_4c = (LPCVOID)0x0;
      local_48 = 0;
      iVar5 = FUN_0053b680(local_54);
      if (-1 < iVar5) {
        iVar7 = 0x48;
        iVar6 = 0x60;
        iVar5 = ftol();
        local_90 = MulDiv(iVar5,iVar6,iVar7);
        local_90 = -local_90;
        if (-1 < local_90) {
          local_90 = -1;
        }
        local_7c = local_1c;
        local_80 = (-(uint)(local_20 != 0) & 300) + 400;
        local_8c = 0;
        local_88 = 0;
        local_84 = 0;
        local_7b = 0;
        local_7a = 0;
        local_79 = local_14;
        local_78 = 7;
        local_77 = 0;
        local_76 = 0;
        local_75 = 0;
        _mbscpy(local_74,local_44);
        FUN_00542c90(&local_90);
      }
      FUN_00540fa0();
    }
    else {
      local_94 = 1;
      local_4c = (LPCVOID)0x0;
      local_48 = 0;
      iVar5 = FUN_00543ae0(local_54,&local_94);
      pvVar1 = local_4c;
      while (local_4c = pvVar1, -1 < iVar5) {
        iVar7 = 0x48;
        iVar6 = 0x60;
        iVar5 = ftol();
        local_90 = MulDiv(iVar5,iVar6,iVar7);
        local_90 = -local_90;
        if (-1 < local_90) {
          local_90 = -1;
        }
        local_7c = local_1c;
        local_80 = (-(uint)(local_20 != 0) & 300) + 400;
        local_8c = 0;
        local_88 = 0;
        local_84 = 0;
        local_7b = 0;
        local_7a = 0;
        local_79 = local_14;
        local_78 = 7;
        local_77 = 0;
        local_76 = 0;
        local_75 = 0;
        _mbscpy(local_74,local_44);
        FUN_00542c90(&local_90);
        iVar5 = FUN_00543ae0(local_54,&local_94);
        pvVar1 = local_4c;
      }
      if (pvVar1 != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(pvVar1);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pvVar1);
        GlobalFree(pvVar3);
      }
    }
    if ((*(int *)(param_1 + 0x15c) == 0) ||
       ((piVar2 = *(int **)(*(int *)(param_1 + 0x168) + 4), piVar2 != (int *)0x0 && (0 < *piVar2))))
    {
      return 0;
    }
    iVar5 = -0x7fffbffb;
  }
  pvVar1 = *(LPCVOID *)(param_1 + 0x168);
  if (pvVar1 != (LPCVOID)0x0) {
    FUN_00542be0();
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  return iVar5;
}


