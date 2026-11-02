/* Module: rv303260.dll
   Function: FUN_67207a30
   Address: 67207a30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_67207a30(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  if (*(int *)((int)this + 0xde) == 0) {
    iVar9 = 0x7fffffff;
    bVar5 = true;
LAB_67207acd:
    bVar3 = true;
LAB_67207ad0:
    bVar4 = true;
  }
  else {
    iVar9 = *(int *)((int)this + 0x13e) - *(int *)((int)this + 0x142);
    if (*(uint *)((int)this + 0x136) < 8) {
      bVar5 = false;
      if (1 < *(uint *)((int)this + 0x132)) {
        if (2 < *(uint *)((int)this + 0x132)) goto LAB_67207acd;
        bVar3 = false;
        goto LAB_67207ad0;
      }
      bVar3 = false;
      bVar4 = false;
    }
    else {
      uVar6 = *(uint *)((int)this + 0x132);
      if ((uVar6 < 7) || (bVar5 = true, iVar9 < 400)) {
        bVar5 = false;
      }
      if ((uVar6 < 5) || (bVar3 = true, iVar9 < 0xfa)) {
        bVar3 = false;
      }
      if ((2 < uVar6) && (99 < iVar9)) goto LAB_67207ad0;
      bVar4 = false;
    }
  }
  uVar6 = *(int *)((int)this + 0x2fa) + *(int *)((int)this + 0x49e);
  uVar10 = (uint)(*(int *)((int)this + 0xb62) * 1000) / 1000;
  uVar11 = *(int *)((int)this + 0x642) + uVar6;
  uVar7 = *(int *)((int)this + 0x166) + *(int *)((int)this + 0x30a);
  iVar8 = param_2;
  if (uVar7 != 0) {
    dVar2 = _DAT_672132c8 / (double)uVar7;
    if ((dVar2 < (double)*(uint *)((int)this + 0x2fe)) ||
       (dVar2 < (double)*(uint *)((int)this + 0x4a2))) {
      iVar8 = 1;
    }
    else {
      iVar8 = 0;
    }
  }
  if (*(int *)((int)this + 0x162) == 0) {
    if (((((iVar8 != 0) || (!bVar3)) || (uVar10 < uVar11)) ||
        ((*(int *)((int)this + 0xf6) != 1 || (*(int *)((int)this + 0xfa) != 1)))) ||
       (*(int *)((int)this + 0xb42) != 0)) {
      *(undefined4 *)((int)this + 0xf2) = 0;
      *(undefined4 *)((int)this + 0xb4e) = *(undefined4 *)((int)this + 0x142);
    }
    else {
      uVar7 = *(uint *)((int)this + 0x142);
      uVar1 = *(uint *)((int)this + 0xb4e);
      if (uVar7 < uVar1) {
        uVar7 = (uVar7 - uVar1) - 1;
      }
      else {
        uVar7 = uVar7 - uVar1;
      }
      if ((2000 < uVar7) && (uVar11 < 0x3d)) {
        *(undefined4 *)((int)this + 0xf2) = 1;
      }
    }
  }
  if ((((!bVar3) || (uVar10 < uVar11)) || (*(int *)((int)this + 0xfa) != 1)) ||
     (*(int *)((int)this + 0xb42) != 0)) {
    uVar7 = *(uint *)((int)this + 0x142);
    *(undefined4 *)((int)this + 0xf6) = 0;
    *(uint *)((int)this + 0xb46) = uVar7;
    *(int *)((int)this + 0xb5a) = iVar9;
  }
  else {
    uVar7 = *(uint *)((int)this + 0x142);
    uVar11 = *(uint *)((int)this + 0xb46);
    if (uVar7 < uVar11) {
      uVar11 = (uVar7 - uVar11) - 1;
    }
    else {
      uVar11 = uVar7 - uVar11;
    }
    if (*(int *)((int)this + 0xb5a) + 2000U < uVar11) {
      *(undefined4 *)((int)this + 0xf6) = 1;
    }
  }
  if (*(double *)((int)this + 0x7ee) < _DAT_672132d0) {
    if ((bVar4) && (uVar10 >= uVar6)) {
      uVar6 = *(uint *)((int)this + 0xb4a);
      if (uVar7 < uVar6) {
        uVar7 = (uVar7 - uVar6) - 1;
      }
      else {
        uVar7 = uVar7 - uVar6;
      }
      if (*(int *)((int)this + 0xb5a) + 2000U < uVar7) {
        *(undefined4 *)((int)this + 0xb42) = 0;
        *(undefined4 *)((int)this + 0xfa) = 1;
      }
      goto LAB_67207f07;
    }
    *(undefined4 *)((int)this + 0xb42) = 1;
    *(undefined4 *)((int)this + 0xfa) = 0;
    *(uint *)((int)this + 0xb4a) = uVar7;
  }
  else {
    if ((!bVar4) || (uVar10 < uVar6)) {
      iVar8 = *(int *)((int)this + 0xb42);
      if (iVar8 == 2) {
        uVar6 = *(uint *)((int)this + 0xb56);
        if (uVar7 < uVar6) {
          uVar6 = (uVar7 - uVar6) - 1;
        }
        else {
          uVar6 = uVar7 - uVar6;
        }
        if ((2000 < uVar6) && (param_2 != 0)) {
          *(uint *)((int)this + 0xb4a) = uVar7;
          *(undefined4 *)((int)this + 0xfa) = 0;
          *(undefined4 *)((int)this + 0xf2) = 0;
          *(uint *)((int)this + 0xb4e) = uVar7;
          *(int *)((int)this + 0xb5a) = iVar9;
          goto LAB_67207f07;
        }
      }
      if (iVar8 == 1) {
        uVar6 = *(uint *)((int)this + 0xb52);
        if (uVar7 < uVar6) {
          uVar6 = (uVar7 - uVar6) - 1;
        }
        else {
          uVar6 = uVar7 - uVar6;
        }
        if ((2000 < uVar6) && (param_2 != 0)) {
          *(uint *)((int)this + 0xb56) = uVar7;
          *(undefined4 *)((int)this + 0xb42) = 2;
          goto LAB_67207efe;
        }
      }
      if (iVar8 == 0) {
        *(uint *)((int)this + 0xb52) = uVar7;
        *(undefined4 *)((int)this + 0xb42) = 1;
        *(int *)((int)this + 0xb5a) = iVar9;
      }
      goto LAB_67207f07;
    }
    if (!bVar5) goto LAB_67207f07;
    if (*(int *)((int)this + 0xfa) == 0) {
      uVar6 = *(uint *)((int)this + 0xb4a);
      if (uVar7 < uVar6) {
        uVar6 = (uVar7 - uVar6) - 1;
      }
      else {
        uVar6 = uVar7 - uVar6;
      }
      if ((2000 < uVar6) && (param_2 != 0)) {
        *(undefined4 *)((int)this + 0xfa) = 1;
        *(undefined4 *)((int)this + 0xb42) = 2;
        *(uint *)((int)this + 0xb56) = uVar7;
        *(int *)((int)this + 0xb5a) = iVar9;
      }
    }
    if ((*(int *)((int)this + 0xb42) == 2) && (*(int *)((int)this + 0xfa) == 1)) {
      uVar6 = *(uint *)((int)this + 0xb56);
      if (uVar7 < uVar6) {
        uVar6 = (uVar7 - uVar6) - 1;
      }
      else {
        uVar6 = uVar7 - uVar6;
      }
      if ((*(int *)((int)this + 0xb5a) + 2000U < uVar6) && (param_2 != 0)) {
        *(undefined4 *)((int)this + 0xf2) = 1;
        *(uint *)((int)this + 0xb4e) = uVar7;
        *(int *)((int)this + 0xb5a) = iVar9;
      }
    }
    if (*(int *)((int)this + 0xf2) != 1) goto LAB_67207f07;
    if ((*(int *)((int)this + 0xfa) == 1) && (*(int *)((int)this + 0xb42) == 2)) {
      uVar6 = *(uint *)((int)this + 0xb4e);
      if (uVar7 < uVar6) {
        uVar6 = (uVar7 - uVar6) - 1;
      }
      else {
        uVar6 = uVar7 - uVar6;
      }
      if ((*(int *)((int)this + 0xb5a) + 2000U < uVar6) && (param_2 != 0)) {
        *(undefined4 *)((int)this + 0xb42) = 1;
        *(uint *)((int)this + 0xb52) = uVar7;
        *(int *)((int)this + 0xb5a) = iVar9;
      }
    }
    if ((*(int *)((int)this + 0xfa) != 1) || (*(int *)((int)this + 0xb42) != 1)) goto LAB_67207f07;
    uVar6 = *(uint *)((int)this + 0xb52);
    if (uVar7 < uVar6) {
      uVar7 = (uVar7 - uVar6) - 1;
    }
    else {
      uVar7 = uVar7 - uVar6;
    }
    if ((uVar7 <= *(int *)((int)this + 0xb5a) + 2000U) || (param_2 == 0)) goto LAB_67207f07;
    *(undefined4 *)((int)this + 0xb42) = 0;
  }
LAB_67207efe:
  *(int *)((int)this + 0xb5a) = iVar9;
LAB_67207f07:
  if (*(int *)((int)this + 0x10a) != 0) {
    *(undefined4 *)((int)this + 0xf6) = 0;
  }
  if (*(int *)((int)this + 0x106) != 0) {
    *(undefined4 *)((int)this + 0xf2) = 0;
  }
  if (*(int *)((int)this + 0x10e) != 0) {
    *(undefined4 *)((int)this + 0xfa) = 0;
  }
  return;
}


