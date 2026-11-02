/* Module: vidcap30.exe
   Function: FUN_00426500
   Address: 00426500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00426723) */

int FUN_00426500(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 local_a8 [40];
  int iStack_8;
  
  bVar4 = false;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*param_1 != 8) {
    return 0;
  }
  if ((param_1[0x53] & 0x40U) == 0) {
    return 0;
  }
  local_a8[0] = 0;
  uVar5 = 1;
  iVar2 = (**(code **)(*(int *)param_1[0xf2] + 0xc))((int *)param_1[0xf2],0x1007,local_a8,0);
  while (iVar2 < 0) {
    AMGetErrorTextA(iVar2,&stack0xffffff50,0xa0);
    if (DAT_005bb458 < uVar5) goto LAB_0042661f;
    unaff_EDI = 0;
    uVar5 = uVar5 + 1;
    iVar2 = (**(code **)(*(int *)param_1[0xf2] + 0xc))
                      ((int *)param_1[0xf2],0x1007,&stack0xffffff48,0);
  }
  if (unaff_EDI == 0x1008) {
    *(uint *)(iStack_8 + 8) = *(uint *)(iStack_8 + 8) | 1;
  }
  else if (unaff_EDI == 0x1384) {
    *(undefined4 *)(iStack_8 + 4) = 1;
    *(uint *)(iStack_8 + 8) = *(uint *)(iStack_8 + 8) & 0xfffffffe;
  }
  else {
    *(uint *)(iStack_8 + 8) = *(uint *)(iStack_8 + 8) & 0xfffffffe;
    iVar3 = FUN_004271f0(param_1,&stack0xffffff4c);
    if (-1 < iVar3) {
      bVar4 = true;
      uVar5 = *(uint *)(iStack_8 + 8);
      *(uint *)(iStack_8 + 8) = uVar5 | 1;
      if (unaff_ESI != 0x139f) {
        *(uint *)(iStack_8 + 8) = uVar5 | 3;
      }
    }
  }
LAB_0042661f:
  if (iVar2 < 0) goto LAB_00426af2;
  if ((!bVar4) && ((*(byte *)(iStack_8 + 8) & 1) != 0)) {
    uVar5 = 1;
    iVar2 = (**(code **)(*(int *)param_1[0xf3] + 0x20))
                      ((int *)param_1[0xf3],0x11ff,&stack0xffffff48);
    while (iVar2 < 0) {
      AMGetErrorTextA(iVar2,&stack0xffffff50,0xa0);
      if (DAT_005bb458 < uVar5) goto LAB_004266b4;
      uVar5 = uVar5 + 1;
      iVar2 = (**(code **)(*(int *)param_1[0xf3] + 0x20))
                        ((int *)param_1[0xf3],0x11ff,&stack0xffffff48);
    }
    *(uint *)(iStack_8 + 8) = *(uint *)(iStack_8 + 8) | 2;
LAB_004266b4:
    if (iVar2 < 0) goto LAB_00426af2;
    iVar2 = (**(code **)(*(int *)param_1[0xf3] + 0x20))
                      ((int *)param_1[0xf3],0x11f7,&stack0xffffff48);
    for (uVar5 = 1;
        (iVar2 < 0 && (AMGetErrorTextA(iVar2,&stack0xffffff50,0xa0), uVar5 <= DAT_005bb458));
        uVar5 = uVar5 + 1) {
      iVar2 = (**(code **)(*(int *)param_1[0xf3] + 0x20))
                        ((int *)param_1[0xf3],0x11f7,&stack0xffffff48);
    }
    unaff_EDI = 0;
    if (iVar2 < 0) goto LAB_00426af2;
  }
  if (((*(uint *)(iStack_8 + 8) & 1) == 0) || ((*(uint *)(iStack_8 + 8) & 2) == 0))
  goto LAB_00426ad4;
  uVar5 = 1;
  iVar2 = (**(code **)(*(int *)param_1[0xf3] + 0x40))((int *)param_1[0xf3],&stack0xffffff48);
  while (iVar2 < 0) {
    AMGetErrorTextA(iVar2,&stack0xffffff50,0xa0);
    if (DAT_005bb458 < uVar5) goto LAB_00426ad0;
    uVar5 = uVar5 + 1;
    iVar2 = (**(code **)(*(int *)param_1[0xf3] + 0x40))((int *)param_1[0xf3],&stack0xffffff48);
  }
  if (unaff_EDI < 0x1329) {
    if (unaff_EDI == 0x1328) {
      *(uint *)(iStack_8 + 8) = *(uint *)(iStack_8 + 8) | 0x10000;
    }
    else {
      switch(unaff_EDI) {
      case 0x10c8:
        if (((param_1[0x52] & 0x8000000U) != 0) &&
           (piVar1 = (int *)param_1[0x213], piVar1 != (int *)0x0)) {
          (**(code **)(*piVar1 + 0x28))(piVar1,0);
        }
        param_1[0x52] = param_1[0x52];
        param_1[0x53] = param_1[0x53] | 0x100;
        *(uint *)(iStack_8 + 8) = *(uint *)(iStack_8 + 8) | 8;
        break;
      case 0x10c9:
        param_1[0x52] = param_1[0x52];
        param_1[0x53] = param_1[0x53] & 0xfffffeff;
        *(uint *)(iStack_8 + 8) = *(uint *)(iStack_8 + 8) | 0x100;
        break;
      case 0x10ca:
        if (((param_1[0x52] & 0x8000000U) != 0) &&
           (piVar1 = (int *)param_1[0x213], piVar1 != (int *)0x0)) {
          (**(code **)(*piVar1 + 0x28))(piVar1,1);
        }
        param_1[0x52] = param_1[0x52];
        param_1[0x53] = param_1[0x53] & 0xfffffeff;
        *(uint *)(iStack_8 + 8) = *(uint *)(iStack_8 + 8) | 0x80;
        break;
      default:
        goto switchD_004267c4_caseD_10cb;
      case 0x10cc:
        *(uint *)(iStack_8 + 8) = *(uint *)(iStack_8 + 8) | 0x2000;
        break;
      case 0x10cd:
        *(uint *)(iStack_8 + 8) = *(uint *)(iStack_8 + 8) | 0x4000;
        break;
      case 0x10ce:
        *(uint *)(iStack_8 + 8) = *(uint *)(iStack_8 + 8) | 0x8000;
      }
    }
    goto LAB_00426ad0;
  }
  switch(unaff_EDI) {
  case 0x13a5:
    if (((param_1[0x52] & 0x8000000U) != 0) &&
       (piVar1 = (int *)param_1[0x213], piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x28))(piVar1,1);
    }
    uVar5 = *(uint *)(iStack_8 + 8) | 0x200;
    break;
  case 0x13a6:
    if (((param_1[0x52] & 0x8000000U) != 0) &&
       (piVar1 = (int *)param_1[0x213], piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x28))(piVar1,1);
    }
    *(uint *)(iStack_8 + 8) = *(uint *)(iStack_8 + 8) | 0x800;
    goto LAB_00426ad0;
  case 0x13a7:
    if (((param_1[0x52] & 0x8000000U) != 0) &&
       (piVar1 = (int *)param_1[0x213], piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x28))(piVar1,1);
    }
    uVar5 = *(uint *)(iStack_8 + 8) | 0x400;
    break;
  case 0x13a8:
    if (((param_1[0x52] & 0x8000000U) != 0) &&
       (piVar1 = (int *)param_1[0x213], piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x28))(piVar1,1);
    }
    *(uint *)(iStack_8 + 8) = *(uint *)(iStack_8 + 8) | 0x1000;
    goto LAB_00426ad0;
  default:
switchD_004267c4_caseD_10cb:
    uVar5 = *(uint *)(iStack_8 + 8) | 0x20000;
  }
  *(uint *)(iStack_8 + 8) = uVar5;
  iVar3 = FUN_004271f0(param_1,&stack0xffffff48);
  if (iVar3 == 0) {
    if (unaff_EDI == 0x1322) {
      if (((param_1[0x52] & 0x8000000U) != 0) &&
         (piVar1 = (int *)param_1[0x213], piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x28))(piVar1,1);
      }
      uVar5 = *(uint *)(iStack_8 + 8) & 0xfffdffff | 0x10;
    }
    else if (unaff_EDI == 0x1324) {
      if (((param_1[0x52] & 0x8000000U) != 0) &&
         (piVar1 = (int *)param_1[0x213], piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x28))(piVar1,1);
      }
      uVar5 = *(uint *)(iStack_8 + 8) & 0xfffdffff | 0x40;
    }
    else {
      if (unaff_EDI != 0x13ab) goto LAB_00426ad0;
      if (((param_1[0x52] & 0x8000000U) != 0) &&
         (piVar1 = (int *)param_1[0x213], piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x28))(piVar1,1);
      }
      uVar5 = *(uint *)(iStack_8 + 8) & 0xfffdffff | 0x20;
    }
    *(uint *)(iStack_8 + 8) = uVar5;
  }
LAB_00426ad0:
  if (-1 < iVar2) {
LAB_00426ad4:
    param_1[600] = 1;
    param_1[0x25a] = *(int *)(iStack_8 + 8);
    if (-1 < iVar2) {
      return iVar2;
    }
  }
LAB_00426af2:
  if (param_1[600] != 0) {
    *(int *)(iStack_8 + 8) = param_1[0x25a];
  }
  return iVar2;
}


