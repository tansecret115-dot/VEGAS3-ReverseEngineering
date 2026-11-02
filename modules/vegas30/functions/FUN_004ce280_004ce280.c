/* Module: vegas30.exe
   Function: FUN_004ce280
   Address: 004ce280
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce280(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  SHORT SVar2;
  int iVar3;
  HWND pHVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  longlong lVar8;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = *(int *)(param_3 + 0x5d0);
  iVar3 = FUN_004e4c90();
  iVar6 = param_3;
  if ((iVar3 != 0) && (pHVar4 = GetFocus(), pHVar4 == *(HWND *)(iVar3 + 4))) {
    iVar6 = iVar3;
  }
  if (param_4 == 8) {
    if ((*(byte *)(param_3 + 0x1c) & 1) != 0) {
      return;
    }
    if ((*(byte *)(iVar6 + 0x18) & 8) != 0) {
      FUN_004583c0(iVar6,1);
      return;
    }
    iVar3 = Transport_IsAnyPlaying();
    if (iVar3 == 0) {
      local_10 = 0;
      local_c = 0;
    }
    else {
      local_10 = *(undefined4 *)(iVar1 + 600);
      local_c = *(undefined4 *)(iVar1 + 0x25c);
    }
    FUN_004ce070(iVar6,local_10,local_c);
  }
  else {
    uVar5 = _TrackbarInst_DefScrollProc_20(param_1,param_4,param_5,1,4);
    fVar7 = (float10)FUN_004cdfb0(uVar5);
    *(double *)(iVar1 + 0x158) = (double)fVar7;
    SVar2 = GetKeyState(0x10);
    if (((-1 < SVar2) && (_DAT_00613a28 <= *(double *)(iVar1 + 0x158))) &&
       (*(double *)(iVar1 + 0x158) <= _DAT_00613a20)) {
      *(undefined4 *)(iVar1 + 0x158) = 0;
      *(undefined4 *)(iVar1 + 0x15c) = 0x3ff00000;
    }
    if ((param_4 == 9) && (iVar3 = Transport_IsAnyPlaying(), iVar3 == 0)) {
      if (*(int *)(iVar6 + 0xbc8) == 0) {
        lVar8 = *(longlong *)(iVar6 + 0x600);
      }
      else {
        lVar8 = FUN_005b8d80(*(int *)(iVar6 + 0xbc8));
      }
      if (lVar8 != 0) {
        *(uint *)(iVar6 + 0x18) = *(uint *)(iVar6 + 0x18) | 8;
        FUN_004583a0(iVar6,0);
        *(uint *)(iVar6 + 0x18) = *(uint *)(iVar6 + 0x18) | 8;
      }
    }
  }
  FUN_005fb0e0(*(undefined4 *)(iVar1 + 0x158),*(undefined4 *)(iVar1 + 0x15c),0);
  InvalidateRect(*(HWND *)(param_3 + 4),(RECT *)(iVar1 + 0x60),0);
  return;
}


