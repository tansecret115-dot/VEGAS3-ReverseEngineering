/* Module: rv203260.dll
   Function: FUN_638a7940
   Address: 638a7940
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_638a7940(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  iVar7 = *(int *)((int)this + 0x13a);
  if (iVar7 == 0) {
LAB_638a79c4:
    iVar10 = 0x7fffffff;
  }
  else {
    uVar6 = *(uint *)((int)this + 0x1a2);
    if ((*(uint *)((int)this + 0x19e) < uVar6) || (*(int *)((int)this + 0x192) == 0)) {
      *(undefined4 *)((int)this + 0x162) = 0;
      *(uint *)((int)this + 0xbae) = uVar6;
      if (7 < *(uint *)((int)this + 0x196)) {
        *(undefined4 *)((int)this + 0x16a) = 0;
        *(undefined4 *)((int)this + 0xba2) = 2;
        *(uint *)((int)this + 0xbaa) = uVar6;
        *(uint *)((int)this + 0xbbe) = uVar6;
      }
      *(undefined4 *)((int)this + 0x166) = 0;
      *(uint *)((int)this + 0xba6) = uVar6;
    }
    if (iVar7 == 0) goto LAB_638a79c4;
    iVar10 = *(int *)((int)this + 0x19e) - *(int *)((int)this + 0x1a2);
  }
  if (iVar7 == 0) {
LAB_638a7a45:
    bVar3 = true;
    bVar4 = true;
LAB_638a7a48:
    bVar5 = true;
  }
  else if (*(uint *)((int)this + 0x196) < 8) {
    bVar3 = true;
    if (1 < *(uint *)((int)this + 0x192)) {
      if (2 < *(uint *)((int)this + 0x192)) goto LAB_638a7a45;
      bVar4 = false;
      goto LAB_638a7a48;
    }
    bVar4 = false;
    bVar5 = false;
  }
  else {
    uVar6 = *(uint *)((int)this + 0x192);
    if ((uVar6 < 7) || (bVar3 = true, iVar10 < 400)) {
      bVar3 = false;
    }
    if ((uVar6 < 5) || (bVar4 = true, iVar10 < 0xfa)) {
      bVar4 = false;
    }
    if ((2 < uVar6) && (99 < iVar10)) goto LAB_638a7a48;
    bVar5 = false;
  }
  if (((*(int *)((int)this + 0x9fa) != 0) &&
      ((uint)(*(int *)((int)this + 0x35a) + *(int *)((int)this + 0x4fe) +
             *(int *)((int)this + 0x6a2)) < 0x1c2)) &&
     ((uint)(*(int *)((int)this + *(int *)((int)this + 0x9fa) * 4 + 0x9fa) -
            *(int *)((int)this + 0x9fe)) < 2)) {
    bVar3 = true;
    bVar4 = true;
    bVar5 = true;
  }
  uVar8 = *(int *)((int)this + 0xbc2) * 1000;
  uVar6 = *(int *)((int)this + 0x35a) + *(int *)((int)this + 0x4fe);
  uVar9 = uVar8 / 1000;
  uVar11 = *(int *)((int)this + 0x6a2) + uVar6;
  bVar12 = uVar6 < uVar8 / 2000;
  uVar8 = *(int *)((int)this + 0x1c6) + *(int *)((int)this + 0x36a);
  iVar7 = param_2;
  if (uVar8 != 0) {
    dVar2 = _DAT_638b32c8 / (double)uVar8;
    if ((dVar2 < (double)*(uint *)((int)this + 0x35e)) ||
       (dVar2 < (double)*(uint *)((int)this + 0x502))) {
      iVar7 = 1;
    }
    else {
      iVar7 = 0;
    }
  }
  if (uVar11 < 0x96) {
    *(undefined4 *)((int)this + 0x162) = 1;
  }
  else if (((iVar7 != 0) || (!bVar3)) ||
          ((uVar9 < uVar11 ||
           (((*(int *)((int)this + 0x166) != 1 || (*(int *)((int)this + 0x16a) != 1)) ||
            (*(int *)((int)this + 0xba2) != 0)))))) {
    *(undefined4 *)((int)this + 0x162) = 0;
    *(undefined4 *)((int)this + 0xbae) = *(undefined4 *)((int)this + 0x1a2);
  }
  else {
    uVar8 = *(uint *)((int)this + 0x1a2);
    uVar1 = *(uint *)((int)this + 0xbae);
    if (uVar8 < uVar1) {
      uVar8 = (uVar8 - uVar1) - 1;
    }
    else {
      uVar8 = uVar8 - uVar1;
    }
    if (500 < uVar8) {
      *(undefined4 *)((int)this + 0x162) = 1;
    }
  }
  if (((!bVar4) || (uVar9 < uVar11)) ||
     ((*(int *)((int)this + 0x16a) != 1 || (*(int *)((int)this + 0xba2) != 0)))) {
    uVar8 = *(uint *)((int)this + 0x1a2);
    *(undefined4 *)((int)this + 0x166) = 0;
    *(uint *)((int)this + 0xba6) = uVar8;
    *(int *)((int)this + 0xbba) = iVar10;
  }
  else {
    uVar8 = *(uint *)((int)this + 0x1a2);
    uVar11 = *(uint *)((int)this + 0xba6);
    if (uVar8 < uVar11) {
      uVar11 = (uVar8 - uVar11) - 1;
    }
    else {
      uVar11 = uVar8 - uVar11;
    }
    if (*(int *)((int)this + 0xbba) + 500U < uVar11) {
      *(undefined4 *)((int)this + 0x166) = 1;
    }
  }
  if (*(double *)((int)this + 0x84e) < _DAT_638b32d0) {
    if ((bVar4) && (uVar9 >= uVar6)) {
      if (bVar12) {
        uVar6 = *(uint *)((int)this + 0xbaa);
        if (uVar8 < uVar6) {
          uVar8 = (uVar8 - uVar6) - 1;
        }
        else {
          uVar8 = uVar8 - uVar6;
        }
        if (*(int *)((int)this + 0xbba) + 500U < uVar8) {
          *(undefined4 *)((int)this + 0xba2) = 0;
          *(undefined4 *)((int)this + 0x16a) = 1;
        }
      }
      goto LAB_638a7e3e;
    }
    *(undefined4 *)((int)this + 0xba2) = 1;
    *(undefined4 *)((int)this + 0x16a) = 0;
    *(uint *)((int)this + 0xbaa) = uVar8;
  }
  else {
    if ((!bVar5) || (uVar9 < uVar6)) {
      iVar7 = *(int *)((int)this + 0xba2);
      if (iVar7 == 2) {
        uVar6 = *(uint *)((int)this + 0xbb6);
        if (uVar8 < uVar6) {
          uVar6 = (uVar8 - uVar6) - 1;
        }
        else {
          uVar6 = uVar8 - uVar6;
        }
        if ((500 < uVar6) && (param_2 != 0)) {
          *(uint *)((int)this + 0xbaa) = uVar8;
          *(undefined4 *)((int)this + 0x16a) = 0;
          *(int *)((int)this + 0xbba) = iVar10;
          goto LAB_638a7e3e;
        }
      }
      if (iVar7 == 1) {
        uVar6 = *(uint *)((int)this + 0xbb2);
        if (uVar8 < uVar6) {
          uVar6 = (uVar8 - uVar6) - 1;
        }
        else {
          uVar6 = uVar8 - uVar6;
        }
        if ((500 < uVar6) && (param_2 != 0)) {
          *(uint *)((int)this + 0xbb6) = uVar8;
          *(undefined4 *)((int)this + 0xba2) = 2;
          *(int *)((int)this + 0xbba) = iVar10;
          goto LAB_638a7e3e;
        }
      }
      if (iVar7 == 0) {
        *(uint *)((int)this + 0xbb2) = uVar8;
        *(undefined4 *)((int)this + 0xba2) = 1;
        *(int *)((int)this + 0xbba) = iVar10;
      }
      goto LAB_638a7e3e;
    }
    if (!bVar12) goto LAB_638a7e3e;
    if (*(int *)((int)this + 0x16a) == 0) {
      uVar6 = *(uint *)((int)this + 0xbaa);
      if (uVar8 < uVar6) {
        uVar6 = (uVar8 - uVar6) - 1;
      }
      else {
        uVar6 = uVar8 - uVar6;
      }
      if ((500 < uVar6) && (param_2 != 0)) {
        *(undefined4 *)((int)this + 0xba2) = 2;
        *(undefined4 *)((int)this + 0x16a) = 1;
        *(uint *)((int)this + 0xbb6) = uVar8;
        *(int *)((int)this + 0xbba) = iVar10;
      }
    }
    if (*(int *)((int)this + 0xba2) == 2) {
      uVar6 = *(uint *)((int)this + 0xbb6);
      if (uVar8 < uVar6) {
        uVar6 = (uVar8 - uVar6) - 1;
      }
      else {
        uVar6 = uVar8 - uVar6;
      }
      if ((*(int *)((int)this + 0xbba) + 500U < uVar6) && (param_2 != 0)) {
        *(undefined4 *)((int)this + 0xba2) = 1;
        *(uint *)((int)this + 0xbb2) = uVar8;
        *(int *)((int)this + 0xbba) = iVar10;
      }
    }
    if (*(int *)((int)this + 0xba2) != 1) goto LAB_638a7e3e;
    uVar6 = *(uint *)((int)this + 0xbb2);
    if (uVar8 < uVar6) {
      uVar8 = (uVar8 - uVar6) - 1;
    }
    else {
      uVar8 = uVar8 - uVar6;
    }
    if ((uVar8 <= *(int *)((int)this + 0xbba) + 500U) || (param_2 == 0)) goto LAB_638a7e3e;
    *(undefined4 *)((int)this + 0xba2) = 0;
  }
  *(int *)((int)this + 0xbba) = iVar10;
LAB_638a7e3e:
  if (*(int *)((int)this + 0x17e) != 0) {
    *(undefined4 *)((int)this + 0x166) = 0;
  }
  if (*(int *)((int)this + 0x17a) != 0) {
    *(undefined4 *)((int)this + 0x162) = 0;
  }
  if (*(int *)((int)this + 0x182) != 0) {
    *(undefined4 *)((int)this + 0x16a) = 0;
  }
  return;
}


