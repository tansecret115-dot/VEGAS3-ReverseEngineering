/* Module: vegas30.exe
   Function: FUN_00456d70
   Address: 00456d70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456d70(int param_1,uint param_2)

{
  int iVar1;
  double dVar2;
  SHORT SVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar5 = param_2;
  if (param_2 == 0) {
    DAT_0064bdec = 0;
    return;
  }
  iVar1 = *(int *)(DAT_00647630 + 0x5d0);
  if (*(double *)(iVar1 + 0x158) == _DAT_00610fd8) {
    DAT_0064bdec = 0;
  }
  SVar3 = GetKeyState(0x4b);
  if (SVar3 < 0) {
    DAT_0064bdec = 1;
  }
  else if (DAT_0064bdec == 0) {
    uVar7 = 0xffffffff;
    if (_DAT_00610fd8 <= *(double *)(iVar1 + 0x158)) {
      if (*(double *)(iVar1 + 0x158) <= _DAT_00610fd8) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 0xffffffff;
    }
    if ((int)param_2 < 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = (uint)(0 < (int)param_2);
    }
    if (uVar6 == uVar4) {
      if (-1 < (int)param_2) {
        uVar7 = (uint)(0 < (int)param_2);
      }
      dVar2 = (double)(int)uVar7 * _DAT_00610560 + *(double *)(iVar1 + 0x158);
    }
    else {
      if ((int)param_2 < 0) {
        param_2 = 0xffffffff;
      }
      else {
        param_2 = (uint)(0 < (int)param_2);
      }
      dVar2 = (double)(int)param_2;
    }
    *(double *)(iVar1 + 0x158) = dVar2;
    goto LAB_00456e91;
  }
  do {
    if (iVar5 < 0) {
      param_2 = 0xffffffff;
    }
    else {
      param_2 = (uint)(0 < iVar5);
    }
    dVar2 = (double)(int)param_2 * _DAT_006128c8 + *(double *)(iVar1 + 0x158);
    *(double *)(iVar1 + 0x158) = dVar2;
  } while (dVar2 == _DAT_00610fd8);
LAB_00456e91:
  dVar2 = _DAT_006128e8;
  if ((_DAT_006128e8 <= *(double *)(iVar1 + 0x158)) &&
     (dVar2 = _DAT_006128e0, *(double *)(iVar1 + 0x158) <= _DAT_006128e0)) {
    dVar2 = *(double *)(iVar1 + 0x158);
  }
  *(double *)(iVar1 + 0x158) = dVar2;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
  iVar5 = Transport_IsAnyPlaying();
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0xbc8) == 0) {
      lVar8 = *(longlong *)(param_1 + 0x600);
    }
    else {
      lVar8 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
    }
    if (lVar8 != 0) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
      FUN_004583a0(param_1,0);
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
    }
  }
  FUN_005fb0e0(*(undefined4 *)(iVar1 + 0x158),*(undefined4 *)(iVar1 + 0x15c),0);
  FUN_004ce070(param_1,*(undefined4 *)(iVar1 + 600),*(undefined4 *)(iVar1 + 0x25c));
  return;
}


