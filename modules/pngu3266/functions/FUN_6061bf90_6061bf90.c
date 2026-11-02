/* Module: pngu3266.dll
   Function: FUN_6061bf90
   Address: 6061bf90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6061bf90(void *this,char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int aiStack_c14 [255];
  int aiStack_818 [256];
  int aiStack_418 [257];
  void *local_14;
  int *local_10;
  char *local_c;
  int local_8;
  
  local_14 = this;
  FUN_60618ed0(this,param_1);
  local_c = *(char **)this;
  iVar2 = *(int *)(local_c + -8);
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  if ((param_1 == (char *)0x0) || (*(int *)(local_c + -8) == 0)) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 1;
    *(undefined4 *)((int)this + 0xc) = 1;
    return;
  }
  if ((iVar2 < 2) || (local_c[1] != ':')) {
    *(undefined4 *)((int)this + 0x1c) = 0;
    iVar3 = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x1c) = 2;
    iVar3 = 2;
  }
  local_8 = 0;
  iVar1 = 0;
  if (iVar3 < iVar2) {
    local_10 = aiStack_818 + 1;
    do {
      iVar1 = local_8;
      if (0xff < local_8) break;
      iVar5 = iVar3;
      for (iVar1 = 0;
          (iVar5 < iVar2 && ((local_c[iVar1 + iVar3] == '\\' || (local_c[iVar1 + iVar3] == '/'))));
          iVar1 = iVar1 + 1) {
        iVar5 = iVar5 + 1;
      }
      iVar5 = iVar1 + iVar3;
      iVar6 = 0;
      if (iVar5 < iVar2) {
        pcVar4 = local_c + iVar1 + iVar3;
        do {
          this = local_14;
          if ((*pcVar4 == '\\') || (*pcVar4 == '/')) break;
          iVar6 = iVar6 + 1;
          pcVar4 = pcVar4 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar2);
      }
      *local_10 = iVar6;
      aiStack_c14[local_8] = iVar3;
      aiStack_418[local_8 + 1] = iVar1;
      iVar3 = iVar3 + iVar6 + iVar1;
      iVar1 = local_8 + 1;
      local_8 = iVar1;
      local_10 = local_10 + 1;
    } while (iVar3 < iVar2);
  }
  iVar3 = 0;
  if (iVar1 == 0) {
    if (*(int *)((int)this + 0x1c) < 1) {
      *(undefined4 *)((int)this + 0x10) = 0;
      return;
    }
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x14) = 1;
    return;
  }
  iVar5 = 0;
  if (1 < aiStack_418[1]) {
    if (*(int *)((int)this + 0x1c) < 1) {
      if (aiStack_418[1] < 3) {
        *(int *)((int)this + 0x1c) = aiStack_818[1] + aiStack_418[1];
        iVar5 = 1;
      }
      else {
        *(undefined4 *)((int)this + 0x10) = 0;
        iVar5 = 0;
      }
    }
    else {
      *(undefined4 *)((int)this + 0x10) = 0;
      iVar5 = 0;
    }
  }
  if ((iVar1 == iVar5) || (aiStack_818[iVar1] == 0)) {
    *(undefined4 *)((int)this + 0x14) = 1;
  }
  if (iVar5 < iVar1) {
    if (1 < aiStack_418[iVar5 + 1]) {
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    if ((iVar1 <= iVar5) || (aiStack_418[iVar5 + 1] < 1)) goto LAB_6061c151;
  }
  else {
LAB_6061c151:
    if ((*local_c != '\\') && (*local_c != '/')) {
      *(undefined4 *)((int)this + 0x18) = 0;
      goto LAB_6061c16c;
    }
  }
  *(undefined4 *)((int)this + 0x18) = 1;
LAB_6061c16c:
  if ((iVar1 == iVar5 + 1) && (aiStack_818[iVar5 + 1] == 0)) {
    *(int *)((int)this + 0x20) = aiStack_418[iVar5 + 1];
  }
  else if (iVar5 < iVar1) {
    if (aiStack_818[iVar1] == 0) {
      iVar1 = iVar1 + -1;
    }
    if (iVar1 == iVar5 + 1) {
      iVar1 = aiStack_418[iVar5 + 1];
      iVar3 = aiStack_818[iVar5 + 1];
      iVar2 = aiStack_c14[iVar5];
      *(int *)((int)this + 0x20) = iVar1;
      iVar2 = iVar2 + iVar1;
    }
    else {
      iVar5 = aiStack_c14[iVar1 + -1];
      iVar2 = aiStack_418[iVar1];
      *(int *)((int)this + 0x20) = iVar5 - *(int *)((int)this + 0x1c);
      iVar3 = aiStack_818[iVar1];
      *(int *)((int)this + 0x24) = iVar2;
      iVar2 = iVar2 + iVar5;
    }
  }
  iVar1 = iVar3 + -1 + iVar2;
  if (iVar2 <= iVar1) {
    do {
      if (local_c[iVar1] == '.') break;
      iVar1 = iVar1 + -1;
    } while (iVar2 <= iVar1);
    if (iVar2 <= iVar1) {
      *(undefined4 *)((int)this + 0x2c) = 1;
      *(int *)((int)this + 0x28) = iVar1 - iVar2;
      *(int *)((int)this + 0x30) = (iVar3 - iVar1) + -1 + iVar2;
      return;
    }
  }
  *(int *)((int)this + 0x28) = iVar3;
  return;
}


