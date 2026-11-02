/* Module: sfpublish.dll
   Function: FUN_00401d30
   Address: 00401d30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00401d30(undefined4 *param_1)

{
  DWORD DVar1;
  int iVar2;
  HGLOBAL pvVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *unaff_EBX;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piStack_328;
  int *piStack_324;
  int local_320;
  int *piStack_31c;
  int *local_310;
  CHAR local_30c [260];
  WCHAR local_208 [260];
  
  if (param_1[3] != 0) {
    return 0;
  }
  local_320 = -0x7fffbffb;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00441774);
  if ((param_1[3] != 0) || (DVar1 = GetModuleFileNameA(DAT_0044175c,local_30c,0x104), DVar1 == 0))
  goto LAB_00401f80;
  FUN_00402840(local_208,local_30c,0x104);
  local_320 = Ordinal_183(local_208,2,&local_310);
  if (local_320 < 0) goto LAB_00401f80;
  puVar6 = (undefined4 *)*param_1;
  piStack_324 = (int *)0x0;
  iVar2 = (**(code **)(*local_310 + 0x18))(local_310,puVar6,&piStack_324);
  if (-1 < iVar2) {
    if (unaff_EBX != (int *)0x0) {
      (**(code **)(*unaff_EBX + 4))(unaff_EBX);
    }
    piStack_328 = (int *)0x0;
    iVar2 = (**(code **)*unaff_EBX)(unaff_EBX,&DAT_0043f088,&piStack_328);
    piVar12 = local_310;
    if ((-1 < iVar2) && (piVar12 = unaff_EBX, unaff_EBX != (int *)0x0)) {
      (**(code **)(*unaff_EBX + 4))(unaff_EBX);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    iVar2 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,&stack0xfffffcd4);
    if (-1 < iVar2) {
      uVar8 = (uint)*(ushort *)(local_320 + 0x2c);
      param_1[6] = uVar8;
      if (uVar8 == 0) {
LAB_00401ea7:
        puVar4 = (uint *)0x0;
      }
      else {
        pvVar3 = GlobalAlloc(0x40,uVar8 * 0xc + 4);
        puVar4 = GlobalLock(pvVar3);
        if (puVar4 == (uint *)0x0) goto LAB_00401ea7;
        *puVar4 = uVar8;
        puVar4 = puVar4 + 1;
        puVar7 = puVar4;
        if (-1 < (int)(uVar8 - 1)) {
          do {
            FUN_00401bf0(puVar7);
            uVar8 = uVar8 - 1;
            puVar7 = puVar7 + 3;
          } while (uVar8 != 0);
        }
      }
      param_1[5] = puVar4;
      iVar2 = 0;
      if (0 < (int)param_1[6]) {
        iVar9 = 0;
        do {
          iVar5 = (**(code **)(*unaff_EBX + 0x14))(unaff_EBX,iVar2,&piStack_324);
          if (-1 < iVar5) {
            uVar11 = 0;
            puVar10 = &stack0xfffffccc;
            iVar5 = (**(code **)(*unaff_EBX + 0x30))(unaff_EBX,*piStack_324,puVar10,0,0,0);
            if (-1 < iVar5) {
              *(undefined4 *)(iVar9 + param_1[5]) = uVar11;
              uVar11 = Ordinal_7(*(undefined4 *)(iVar9 + param_1[5]));
              *(undefined4 *)(iVar9 + 4 + param_1[5]) = uVar11;
              *(undefined4 *)(iVar9 + 8 + param_1[5]) = *puVar6;
            }
            (**(code **)(*unaff_EBX + 0x50))(unaff_EBX,puVar6);
            Ordinal_6(puVar10);
          }
          iVar2 = iVar2 + 1;
          iVar9 = iVar9 + 0xc;
        } while (iVar2 < (int)param_1[6]);
      }
      (**(code **)(*unaff_EBX + 0x4c))(unaff_EBX,local_320);
    }
    param_1[3] = unaff_EBX;
    if (piStack_328 != (int *)0x0) {
      (**(code **)(*piStack_328 + 8))(piStack_328,piVar12);
    }
  }
  (**(code **)(*piStack_31c + 8))(piStack_31c);
  if (piStack_324 != (int *)0x0) {
    (**(code **)(*piStack_324 + 8))(piStack_324);
  }
LAB_00401f80:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00441774);
  pvVar3 = GlobalAlloc(0x40,0xc);
  puVar6 = GlobalLock(pvVar3);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = FUN_00401b70;
    puVar6[1] = param_1;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00441774);
    puVar6[2] = DAT_004417d8;
    DAT_004417d8 = puVar6;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00441774);
  }
  return local_320;
}


