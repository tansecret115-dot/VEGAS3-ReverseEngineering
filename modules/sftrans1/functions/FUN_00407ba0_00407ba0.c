/* Module: sftrans1.dll
   Function: FUN_00407ba0
   Address: 00407ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00407d9f) */

int __thiscall FUN_00407ba0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  HGLOBAL pvVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 extraout_var;
  undefined4 *unaff_EBX;
  int **ppiVar6;
  int **unaff_EDI;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int **ppiVar10;
  int **ppiVar11;
  int *piStack_18;
  int **ppiStack_14;
  int *piStack_10;
  int local_c;
  int **ppiStack_8;
  int *local_4;
  
  if (param_1[3] != 0) {
    return 0;
  }
  local_c = -0x7fffbffb;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0057726c);
  if ((param_1[3] != 0) ||
     (local_c = Ordinal_162(param_1[1],
                            CONCAT22((short)((uint)&local_4 >> 0x10),*(undefined2 *)(param_1 + 2)),
                            CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 10)),param_2,
                            &local_4), local_c < 0)) goto LAB_00407dbd;
  ppiVar10 = &piStack_18;
  piStack_18 = (int *)0x0;
  piStack_18 = (int *)(**(code **)(*local_4 + 0x18))(local_4,*param_1);
  if (-1 < (int)piStack_18) {
    ppiStack_8 = unaff_EDI;
    if (unaff_EDI != (int **)0x0) {
      (*(code *)(*unaff_EDI)[1])(unaff_EDI);
    }
    iVar1 = (*(code *)**unaff_EDI)(unaff_EDI,&DAT_00573898,&stack0xffffffe4);
    ppiVar6 = unaff_EDI;
    ppiVar11 = ppiVar10;
    if (-1 < iVar1) {
      if (ppiVar10 != (int **)0x0) {
        (*(code *)(*ppiVar10)[1])(ppiVar10);
      }
      ppiVar6 = ppiVar10;
      ppiStack_14 = ppiVar10;
      if (unaff_EDI != (int **)0x0) {
        (*(code *)(*unaff_EDI)[2])(unaff_EDI);
      }
    }
    iVar1 = (*(code *)(*ppiVar6)[3])(ppiVar6,&stack0xffffffe0);
    if (-1 < iVar1) {
      uVar7 = (uint)*(ushort *)(ppiStack_14 + 0xb);
      param_1[6] = uVar7;
      if (uVar7 == 0) {
LAB_00407ce4:
        puVar3 = (uint *)0x0;
      }
      else {
        pvVar2 = GlobalAlloc(0x40,uVar7 * 0xc + 4);
        puVar3 = GlobalLock(pvVar2);
        if (puVar3 == (uint *)0x0) goto LAB_00407ce4;
        *puVar3 = uVar7;
        puVar3 = puVar3 + 1;
        ppiVar6 = ppiStack_8;
        if (-1 < (int)(uVar7 - 1)) {
          do {
            FUN_00407a60();
            uVar7 = uVar7 - 1;
            ppiVar6 = ppiStack_8;
          } while (uVar7 != 0);
        }
      }
      param_1[5] = puVar3;
      iVar1 = 0;
      if (0 < (int)param_1[6]) {
        iVar8 = 0;
        do {
          iVar4 = (*(code *)(*ppiVar6)[5])(ppiVar6,iVar1,&stack0xffffffe0);
          if (-1 < iVar4) {
            puVar9 = (undefined4 *)0x0;
            ppiStack_8 = (int **)0x0;
            iVar4 = (*(code *)(*ppiVar6)[0xc])(ppiVar6,*unaff_EBX,&ppiStack_8,0,0);
            if (-1 < iVar4) {
              *(undefined4 **)(iVar8 + param_1[5]) = unaff_EBX;
              uVar5 = Ordinal_7(*(undefined4 *)(iVar8 + param_1[5]));
              *(undefined4 *)(iVar8 + 4 + param_1[5]) = uVar5;
              *(undefined4 *)(iVar8 + 8 + param_1[5]) = *puVar9;
              unaff_EBX = (undefined4 *)0x0;
            }
            (*(code *)(*ppiVar6)[0x14])(ppiVar6,puVar9);
            Ordinal_6(ppiVar11);
          }
          iVar1 = iVar1 + 1;
          iVar8 = iVar8 + 0xc;
        } while (iVar1 < (int)param_1[6]);
      }
      (*(code *)(*ppiVar6)[0x13])(ppiVar6,ppiStack_14);
    }
    param_1[3] = ppiVar6;
  }
  (**(code **)(*piStack_10 + 8))(piStack_10);
  if (piStack_18 != (int *)0x0) {
    (**(code **)(*piStack_18 + 8))(piStack_18);
  }
LAB_00407dbd:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0057726c);
  pvVar2 = GlobalAlloc(0x40,0xc);
  puVar9 = GlobalLock(pvVar2);
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = FUN_004079e0;
    puVar9[1] = param_1;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0057726c);
    puVar9[2] = DAT_005772d0;
    DAT_005772d0 = puVar9;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0057726c);
  }
  return local_c;
}


