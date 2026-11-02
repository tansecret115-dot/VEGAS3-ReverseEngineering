/* Module: sfpaplug.dll
   Function: FUN_00411f00
   Address: 00411f00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00411f00(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  HRESULT HVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  undefined **unaff_EDI;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  int *piStack_4c4;
  int *piStack_4c0;
  int *piStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  int *local_480;
  int local_47c [4];
  int local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined2 uStack_450;
  int aiStack_440 [2];
  int aiStack_438 [252];
  undefined4 uStack_48;
  uint uStack_44;
  int iStack_3c;
  int iStack_38;
  int *piStack_34;
  LPCWSTR pWStack_20;
  int iStack_8;
  
  local_468 = DAT_0044df64;
  local_464 = DAT_0044df68;
  local_46c = _DAT_0044df60;
  local_460 = DAT_0044df6c;
  iVar2 = FUN_00433dc0(0,&DAT_0044dc60,&local_480,0,&local_46c,1);
  if (iVar2 < 0) {
    return iVar2;
  }
  local_46c = DAT_0044e1b0;
  local_464 = DAT_0044e1b8;
  local_460 = DAT_0044e1bc;
  piVar3 = local_47c;
  local_468 = DAT_0044e1b4;
  iVar2 = (**(code **)(*local_480 + 0x3c))();
  if (iVar2 < 0) goto LAB_00412335;
  piVar11 = local_480;
  if ((*(short *)(iStack_8 + 0x14) != 0) &&
     (iVar2 = (**(code **)*unaff_EBP)(), piVar11 = local_480, -1 < iVar2)) {
    iVar2 = (**(code **)(*unaff_EBX + 0xc))();
    piVar11 = local_480;
    if (-1 < iVar2) {
      uStack_4b4 = 0x411fe3;
      iVar2 = (**(code **)(*unaff_EDI + 0x10))();
      piVar11 = local_480;
    }
    (**(code **)(*unaff_EDI + 8))();
    if (iVar2 != 0) {
      (**(code **)(*unaff_EBP + 8))();
      (**(code **)(*unaff_EDI + 0x20))();
      (**(code **)(local_46c + 8))();
      return iVar2;
    }
  }
  local_460 = 0;
  uStack_45c = 0;
  uStack_458 = 0;
  uStack_454 = 0;
  local_468 = 0x12;
  uStack_450 = 0;
  (**(code **)*param_1)();
  piVar8 = aiStack_438;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  uStack_4b4 = 0;
  piStack_4bc = aiStack_438;
  iVar2 = *piVar3;
  uStack_4b8 = 0;
  piStack_4c4 = &local_46c;
  piStack_4c0 = (int *)0x1;
  piVar3 = (int *)(**(code **)(local_46c + 0x10))(&local_46c);
  (**(code **)(iVar2 + 0x74))();
  if (*pWStack_20 == L'\0') {
    iVar2 = *piStack_4c0;
    uVar9 = (**(code **)(*piStack_4bc + 0x10))(piStack_4bc,0);
    iVar2 = (**(code **)(iVar2 + 0x7c))(piStack_4c4,uVar9);
LAB_0041217e:
    if (-1 < iVar2) goto LAB_00412186;
  }
  else {
    WideCharToMultiByte(0,0,pWStack_20,-1,(LPSTR)aiStack_440,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
    piVar8 = (int *)&stack0xfffffb68;
    uStack_44 = uStack_44 & 0xffffff;
    piVar10 = aiStack_440;
    iVar2 = (**(code **)(*piStack_4c0 + 100))(piStack_4c0,piStack_4bc);
    if (iVar2 < 0) {
      if (*(int *)(pWStack_20 + 0x404) == 0) goto LAB_0041217e;
      (**(code **)(*piVar3 + 0x44))(piVar3,0);
      HVar4 = FUN_00411b70(piVar11);
      if (HVar4 < 0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        (**(code **)(*piVar8 + 0x20))(piVar8);
        (**(code **)(*piVar10 + 8))(piVar10);
        return HVar4;
      }
    }
LAB_00412186:
    iVar2 = (**(code **)(*piVar3 + 0x34))(piVar3,&piStack_4c4,0,0,0);
    if (-1 < iVar2) {
      uVar9 = 0;
      piStack_4c0 = (int *)0x0;
      piVar11 = (int *)0x0;
      if (param_1 != (undefined4 *)0x0) {
        pvVar5 = GlobalAlloc(0x40,0x20);
        pvVar6 = GlobalLock(pvVar5);
        if (pvVar6 == (LPVOID)0x0) {
          piStack_4c0 = (int *)0x0;
        }
        else {
          piStack_4c0 = (int *)FUN_00412bf0(pvVar6,param_1);
          if (piStack_4c0 != (int *)0x0) {
            iVar2 = (**(code **)(*piStack_4c4 + 0x3c))(piStack_4c4,piStack_4c0,0);
            uVar9 = 1;
          }
        }
      }
      uVar1 = uStack_44;
      if (uStack_44 != 0) {
        pvVar5 = GlobalAlloc(0x40,0x58);
        pvVar6 = GlobalLock(pvVar5);
        if (pvVar6 == (LPVOID)0x0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = (int *)FUN_00412db0(pvVar6,uVar1);
          if (piVar11 != (int *)0x0) {
            iVar2 = (**(code **)(*piStack_4c4 + 0x3c))(piStack_4c4,piVar11,uVar9);
          }
        }
      }
      if ((iStack_3c != 0) || (iStack_38 != 0)) {
        pvVar5 = GlobalAlloc(0x40,0x28);
        puVar7 = GlobalLock(pvVar5);
        if ((puVar7 != (undefined4 *)0x0) &&
           (piVar8 = (int *)FUN_00410dd0(puVar7), piVar8 != (int *)0x0)) {
          if (iStack_3c == 0) {
            iVar2 = FUN_00410ec0(piVar8,iStack_38);
          }
          else {
            iVar2 = FUN_00410eb0(piVar8,iStack_3c);
          }
          if ((-1 < iVar2) && (iVar2 = FUN_00410ed0((uint)piVar8), -1 < iVar2)) {
            iVar2 = (**(code **)(*piStack_4c4 + 0x40))(piStack_4c4,piVar8);
          }
          (**(code **)(*piVar8 + 8))(piVar8);
        }
      }
      if (-1 < iVar2) {
        unaff_EDI = &PTR_FUN_0044f054;
        local_47c[1] = 0;
        local_47c[0] = 1;
        (**(code **)(*piStack_4c4 + 0x1c))(piStack_4c4,uStack_48);
        iVar2 = (**(code **)(*piVar3 + 0x44))(piVar3,&stack0xfffffb68);
        unaff_ESI = piStack_34;
      }
      if (piStack_4c4 != (int *)0x0) {
        (**(code **)(*piStack_4c4 + 8))(piStack_4c4);
      }
      piStack_4c4 = (int *)0x0;
      if (piStack_4c0 != (int *)0x0) {
        (**(code **)(*piStack_4c0 + 8))(piStack_4c0);
      }
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 8))(piVar11);
      }
    }
  }
  (**(code **)(*piVar3 + 8))(piVar3);
LAB_00412335:
  (**(code **)(*unaff_ESI + 0x20))();
  (**(code **)(*unaff_EDI + 8))();
  return iVar2;
}


