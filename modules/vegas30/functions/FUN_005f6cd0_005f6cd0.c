/* Module: vegas30.exe
   Function: FUN_005f6cd0
   Address: 005f6cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_005f6cd0(SIZE_T param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  HGLOBAL pvVar6;
  int unaff_EBX;
  undefined4 unaff_EBP;
  int *piVar7;
  int *unaff_EDI;
  LPVOID *ppvVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *local_4a8;
  SIZE_T local_4a4;
  SIZE_T local_4a0;
  LPVOID local_49c;
  SIZE_T SStack_498;
  SIZE_T SStack_494;
  undefined4 uStack_480;
  undefined2 uStack_47c;
  undefined2 uStack_47a;
  int iStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  int iStack_46c;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 auStack_43c [265];
  undefined4 *puStack_18;
  
  local_4a4 = param_1 + 0x88;
  if (*(int *)(param_1 + 0x88) != 0) {
    return 0;
  }
  local_4a8 = (int *)0x0;
  local_4a0 = param_1;
  iVar4 = FUN_005f1150(&local_4a8);
  if (iVar4 < 0) {
    return iVar4;
  }
  ppvVar8 = &local_49c;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppvVar8 = (LPVOID)0x0;
    ppvVar8 = ppvVar8 + 1;
  }
  uVar5 = FUN_005efcf0(*(undefined4 *)(param_1 + 4));
  puVar1 = (undefined4 *)(param_1 + 0x10);
  iVar4 = (**(code **)(*local_4a8 + 0x4c))(local_4a8,*(undefined4 *)(param_1 + 0xc),uVar5,puVar1);
  if ((iVar4 < 0) ||
     (iVar4 = (**(code **)(*unaff_EDI + 0x44))(unaff_EDI,&stack0xfffffb54,*puVar1,1), iVar4 < 0))
  goto LAB_005f6fb0;
  iVar4 = -0x7ff8fff2;
  pvVar6 = GlobalAlloc(0x42,local_4a0);
  local_4a8 = GlobalLock(pvVar6);
  local_4a4 = local_4a0;
  pvVar6 = GlobalAlloc(0x42,SStack_494);
  local_49c = GlobalLock(pvVar6);
  SStack_498 = SStack_494;
  if (local_4a8 != (int *)0x0) {
    if ((local_49c != (LPVOID)0x0) &&
       (iVar4 = (**(code **)(*unaff_EDI + 0x44))(unaff_EDI,&stack0xfffffb54,*puVar1,1), -1 < iVar4))
    {
      if (*(int *)(unaff_EBX + 4) == 2) {
        if (((short)*local_4a8 == 1) || ((short)*local_4a8 == -0x1fe)) goto LAB_005f6f54;
        puVar10 = &uStack_480;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        *(undefined2 *)puVar10 = 0;
        puVar10 = auStack_43c;
        for (iVar4 = 0x10b; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        puStack_18 = &uStack_480;
        auStack_43c[0] = 0x42c;
        uStack_480._2_2_ = (short)((uint)*local_4a8 >> 0x10);
        iStack_478 = local_4a8[1];
        uStack_47c = (undefined2)iStack_478;
        uStack_47a = (undefined2)((uint)iStack_478 >> 0x10);
        uStack_474._2_2_ = (ushort)((uint)local_4a8[3] >> 0x10);
        uStack_470 = CONCAT22(uStack_470._2_2_,(short)local_4a8[4]);
        uStack_480._0_2_ = 1;
        if (uStack_474._2_2_ != 8) {
          uStack_474._2_2_ = 0x10;
        }
        uVar3 = (uStack_474._2_2_ >> 3) * uStack_480._2_2_;
        uStack_474 = CONCAT22(uStack_474._2_2_,uVar3);
        puVar10 = auStack_43c;
        iStack_478 = (uint)uVar3 * iStack_478;
        iVar4 = *unaff_EDI;
      }
      else {
        if (*(int *)(unaff_EBX + 4) != 3) goto LAB_005f6f70;
        if ((DAT_00647730 == 0) && (local_4a8 != (int *)0x0)) {
          piVar7 = local_4a8;
          piVar9 = &uStack_480;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar9 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar9 = piVar9 + 1;
          }
          pvVar6 = GlobalHandle(local_4a8);
          GlobalUnlock(pvVar6);
          pvVar6 = GlobalHandle(local_4a8);
          GlobalFree(pvVar6);
          uVar2 = CONCAT22(uStack_47a,uStack_47c) * 8 + 0x1f;
          uStack_470 = 0;
          local_4a8 = &uStack_480;
          iStack_46c = ((int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3) * iStack_478;
          uStack_474 = 0x80001;
          uStack_460 = 0;
          uStack_45c = 0;
          iVar4 = (**(code **)(*unaff_EDI + 0x50))(unaff_EDI,unaff_EBP,0xffffffff,*puVar1,0,0,0);
          local_4a8 = (int *)0x0;
          goto LAB_005f6f90;
        }
LAB_005f6f54:
        puVar10 = (undefined4 *)0x0;
        iVar4 = *unaff_EDI;
      }
      iVar4 = (**(code **)(iVar4 + 0x50))(unaff_EDI,unaff_EBP,0xffffffff,*puVar1,0,0,puVar10);
    }
LAB_005f6f70:
    if (local_4a8 != (int *)0x0) {
      pvVar6 = GlobalHandle(local_4a8);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(local_4a8);
      GlobalFree(pvVar6);
    }
  }
LAB_005f6f90:
  if (local_49c != (LPCVOID)0x0) {
    pvVar6 = GlobalHandle(local_49c);
    GlobalUnlock(pvVar6);
    pvVar6 = GlobalHandle(local_49c);
    GlobalFree(pvVar6);
  }
LAB_005f6fb0:
  (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  return iVar4;
}


