/* Module: sfpublish.dll
   Function: FUN_00406860
   Address: 00406860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00406a5f) */

int __thiscall FUN_00406860(void *this,undefined4 param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 extraout_var;
  undefined4 *unaff_EBX;
  uint *puVar6;
  int **ppiVar7;
  int **unaff_EDI;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int **ppiVar11;
  int **ppiVar12;
  int *piStack_18;
  int **ppiStack_14;
  int *piStack_10;
  int local_c;
  int **ppiStack_8;
  int *local_4;
  
  if (*(int *)((int)this + 0xc) != 0) {
    return 0;
  }
  local_c = -0x7fffbffb;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00441774);
  if ((*(int *)((int)this + 0xc) != 0) ||
     (local_c = Ordinal_162(*(undefined4 *)((int)this + 4),
                            CONCAT22((short)((uint)&local_4 >> 0x10),*(undefined2 *)((int)this + 8))
                            ,CONCAT22(extraout_var,*(undefined2 *)((int)this + 10)),param_1,&local_4
                           ), local_c < 0)) goto LAB_00406a7d;
  ppiVar11 = &piStack_18;
  piStack_18 = (int *)0x0;
  piStack_18 = (int *)(**(code **)(*local_4 + 0x18))(local_4,*(undefined4 *)this);
  if (-1 < (int)piStack_18) {
    ppiStack_8 = unaff_EDI;
    if (unaff_EDI != (int **)0x0) {
      (*(code *)(*unaff_EDI)[1])(unaff_EDI);
    }
    iVar1 = (*(code *)**unaff_EDI)(unaff_EDI,&DAT_0043f088,&stack0xffffffe4);
    ppiVar7 = unaff_EDI;
    ppiVar12 = ppiVar11;
    if (-1 < iVar1) {
      if (ppiVar11 != (int **)0x0) {
        (*(code *)(*ppiVar11)[1])(ppiVar11);
      }
      ppiVar7 = ppiVar11;
      ppiStack_14 = ppiVar11;
      if (unaff_EDI != (int **)0x0) {
        (*(code *)(*unaff_EDI)[2])(unaff_EDI);
      }
    }
    iVar1 = (*(code *)(*ppiVar7)[3])(ppiVar7,&stack0xffffffe0);
    if (-1 < iVar1) {
      uVar8 = (uint)*(ushort *)(ppiStack_14 + 0xb);
      *(uint *)((int)this + 0x18) = uVar8;
      if (uVar8 == 0) {
LAB_004069a4:
        puVar3 = (uint *)0x0;
      }
      else {
        pvVar2 = GlobalAlloc(0x40,uVar8 * 0xc + 4);
        puVar3 = GlobalLock(pvVar2);
        if (puVar3 == (uint *)0x0) goto LAB_004069a4;
        *puVar3 = uVar8;
        puVar3 = puVar3 + 1;
        puVar6 = puVar3;
        ppiVar7 = ppiStack_8;
        if (-1 < (int)(uVar8 - 1)) {
          do {
            FUN_00406850(puVar6);
            uVar8 = uVar8 - 1;
            puVar6 = puVar6 + 3;
            ppiVar7 = ppiStack_8;
          } while (uVar8 != 0);
        }
      }
      *(uint **)((int)this + 0x14) = puVar3;
      iVar1 = 0;
      if (0 < *(int *)((int)this + 0x18)) {
        iVar9 = 0;
        do {
          iVar4 = (*(code *)(*ppiVar7)[5])(ppiVar7,iVar1,&stack0xffffffe0);
          if (-1 < iVar4) {
            puVar10 = (undefined4 *)0x0;
            ppiStack_8 = (int **)0x0;
            iVar4 = (*(code *)(*ppiVar7)[0xc])(ppiVar7,*unaff_EBX,&ppiStack_8,0,0);
            if (-1 < iVar4) {
              *(undefined4 **)(iVar9 + *(int *)((int)this + 0x14)) = unaff_EBX;
              uVar5 = Ordinal_7(*(undefined4 *)(iVar9 + *(int *)((int)this + 0x14)));
              *(undefined4 *)(iVar9 + 4 + *(int *)((int)this + 0x14)) = uVar5;
              *(undefined4 *)(iVar9 + 8 + *(int *)((int)this + 0x14)) = *puVar10;
              unaff_EBX = (undefined4 *)0x0;
            }
            (*(code *)(*ppiVar7)[0x14])(ppiVar7,puVar10);
            Ordinal_6(ppiVar12);
          }
          iVar1 = iVar1 + 1;
          iVar9 = iVar9 + 0xc;
        } while (iVar1 < *(int *)((int)this + 0x18));
      }
      (*(code *)(*ppiVar7)[0x13])(ppiVar7,ppiStack_14);
    }
    *(int ***)((int)this + 0xc) = ppiVar7;
  }
  (**(code **)(*piStack_10 + 8))(piStack_10);
  if (piStack_18 != (int *)0x0) {
    (**(code **)(*piStack_18 + 8))(piStack_18);
  }
LAB_00406a7d:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00441774);
  pvVar2 = GlobalAlloc(0x40,0xc);
  puVar10 = GlobalLock(pvVar2);
  if (puVar10 != (undefined4 *)0x0) {
    *puVar10 = FUN_004067d0;
    puVar10[1] = this;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00441774);
    puVar10[2] = DAT_004417d8;
    DAT_004417d8 = puVar10;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00441774);
  }
  return local_c;
}


