/* Module: rmme3260.dll
   Function: FUN_662548a0
   Address: 662548a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662548a0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  iVar6 = 0;
  local_8 = 0;
  local_c = 0;
  *(undefined4 *)((int)this + 0x808) = 0;
  iVar2 = ftol();
  if (iVar2 < 0) {
    iVar6 = 0;
    *(undefined4 *)((int)this + 0x818) = 1;
    piVar4 = this;
    do {
      piVar4 = piVar4 + 1;
      if (*piVar4 != 0) goto LAB_66254a5e;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x200);
  }
  else {
    if (0x1ff < iVar2) {
      iVar2 = 0x1ff;
    }
    if (-1 < iVar2) {
      iVar5 = iVar2 + 1;
      piVar4 = this;
      do {
        piVar4 = piVar4 + 1;
        iVar7 = *piVar4;
        if (iVar7 != 0) {
          if (local_8 == 0) {
            local_8 = iVar7;
          }
          if (iVar6 != 0) {
            *(int *)(iVar6 + 4) = iVar7;
          }
          iVar6 = *piVar4;
          for (iVar7 = *(int *)(*piVar4 + 4); iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
            *(int *)((int)this + 0x80c) = *(int *)((int)this + 0x80c) + -1;
            iVar6 = iVar7;
          }
          *(int *)((int)this + 0x80c) = *(int *)((int)this + 0x80c) + -1;
          local_c = iVar6;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar6 = ftol();
    iVar6 = *(int *)((int)this + 0x814) + iVar6;
    *(int *)((int)this + 0x814) = iVar6;
    while (999999 < iVar6) {
      iVar6 = *(int *)((int)this + 0x814) + -1000000;
      *(int *)((int)this + 0x810) = *(int *)((int)this + 0x810) + 1;
      *(int *)((int)this + 0x814) = iVar6;
    }
    piVar4 = (int *)((int)this + 4);
    *(int *)((int)this + 0x814) = (*(int *)((int)this + 0x814) / 1000) * 1000;
    memmove(piVar4,(void *)((int)this + iVar2 * 4 + 8),iVar2 * -4 + 0x7fc);
    puVar3 = (undefined4 *)((int)this + 0x800);
    *puVar3 = 0;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar3 = puVar3 + -1;
      *puVar3 = 0;
    }
    iVar6 = 0;
    *(undefined4 *)((int)this + 0x818) = 1;
    do {
      if (*piVar4 != 0) goto LAB_66254a5e;
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar6 < 0x200);
  }
LAB_66254a74:
  iVar6 = *(int *)((int)this + 0x804);
  if (iVar6 == 0) {
    return local_8;
  }
  local_18 = *(int *)((int)this + 0x818);
  local_14 = *(int *)((int)this + 0x81c);
  if (((local_18 == 1) || (*(int *)(iVar6 + 8) < local_18)) ||
     ((*(int *)(iVar6 + 8) == local_18 && (*(int *)(iVar6 + 0xc) < *(int *)((int)this + 0x81c))))) {
    *(undefined4 *)((int)this + 0x818) = *(undefined4 *)(iVar6 + 8);
    *(undefined4 *)((int)this + 0x81c) = *(undefined4 *)(iVar6 + 0xc);
  }
  if (((*(int *)(iVar6 + 0xc) != 0) || (*(int *)(iVar6 + 8) != 0)) &&
     ((param_1 < *(int *)(iVar6 + 8) ||
      ((param_1 == *(int *)(iVar6 + 8) && (param_2 < *(int *)(iVar6 + 0xc))))))) {
    return local_8;
  }
  iVar2 = *(int *)((int)this + 0x804);
  iVar7 = *(int *)((int)this + 0x80c) + -1;
  *(int *)((int)this + 0x80c) = iVar7;
  iVar5 = *(int *)(iVar2 + 4);
  *(int *)((int)this + 0x804) = iVar5;
  do {
    if (iVar5 == 0) {
LAB_66254b68:
      iVar5 = *(int *)((int)this + 0x804);
      if ((iVar5 != 0) &&
         (((local_18 == 1 || (*(int *)(iVar5 + 8) < local_18)) ||
          ((*(int *)(iVar5 + 8) == local_18 && (*(int *)(iVar5 + 0xc) < local_14)))))) {
        local_18 = *(int *)(iVar5 + 8);
        local_14 = *(int *)(iVar5 + 0xc);
      }
      if ((((*(int *)((int)this + 0x81c) == 0) && (*(int *)((int)this + 0x818) == 0)) ||
          (local_18 < *(int *)((int)this + 0x818))) ||
         ((local_18 == *(int *)((int)this + 0x818) && (local_14 < *(int *)((int)this + 0x81c))))) {
        *(int *)((int)this + 0x818) = local_18;
        *(int *)((int)this + 0x81c) = local_14;
      }
      if (local_c != 0) {
        *(int *)(iVar2 + 4) = local_8;
      }
      return iVar6;
    }
    if (((*(int *)(iVar5 + 0xc) != 0) || (*(int *)(iVar5 + 8) != 0)) &&
       ((param_1 < *(int *)(iVar5 + 8) ||
        ((param_1 == *(int *)(iVar5 + 8) && (param_2 < *(int *)(iVar5 + 0xc))))))) {
      *(undefined4 *)(iVar2 + 4) = 0;
      goto LAB_66254b68;
    }
    iVar7 = iVar7 + -1;
    *(int *)((int)this + 0x80c) = iVar7;
    iVar1 = *(int *)(iVar5 + 4);
    *(int *)((int)this + 0x804) = iVar1;
    iVar2 = iVar5;
    iVar5 = iVar1;
  } while( true );
LAB_66254a5e:
  iVar6 = *(int *)((int)this + iVar6 * 4 + 4);
  *(undefined4 *)((int)this + 0x818) = *(undefined4 *)(iVar6 + 8);
  *(undefined4 *)((int)this + 0x81c) = *(undefined4 *)(iVar6 + 0xc);
  goto LAB_66254a74;
}


