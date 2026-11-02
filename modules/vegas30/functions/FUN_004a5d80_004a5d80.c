/* Module: vegas30.exe
   Function: FUN_004a5d80
   Address: 004a5d80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a5d80(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  HWND pHVar4;
  undefined8 uVar5;
  tagPOINT local_8;
  
  if ((*(int *)(param_1 + 0xa4) == 0) && (pHVar4 = GetCapture(), pHVar4 == (HWND)0x0)) {
    *(undefined4 *)(param_1 + 0xce0) = 0;
    *(undefined4 *)(param_1 + 0xce4) = 0;
    *(undefined4 *)(param_1 + 0xce8) = 0;
    *(undefined4 *)(param_1 + 0xcec) = 0;
    *(undefined4 *)(param_1 + 0xcf0) = 0;
    piVar1 = *(int **)(param_1 + 0xcd0);
    if (*piVar1 != 0) {
      iVar2 = *(int *)piVar1[2];
      *(int *)(param_1 + 0xcec) = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
      *(int *)(param_1 + 0xce4) = iVar2;
      *(undefined4 *)(param_1 + 0xce0) = *(undefined4 *)(iVar2 + 0x18);
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(*(int *)(param_1 + 0xcec) + 0x18);
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xcec) + 0x1c);
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      *(undefined4 *)(param_1 + 0x198) = 0;
      *(undefined4 *)(param_1 + 0x9c) = uVar3;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
      *(undefined4 *)(param_1 + 0x19c) = 0;
      FUN_0049c520(param_1,piVar1);
      uVar5 = 0;
      switch(param_3) {
      case 0:
        floor(((double)*(longlong *)(param_1 + 0xb90) * (double)param_2) /
              (double)*(int *)(param_1 + 0xb98) + _DAT_00610560);
        uVar5 = ftol();
        break;
      case 1:
        uVar5 = ftol();
        break;
      case 2:
        uVar5 = ftol();
        break;
      case 3:
        iVar2 = *(int *)(param_1 + 0xcec);
        uVar5 = 0;
        if (iVar2 != 0) {
          uVar5 = __allmul(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),param_2,
                           param_2 >> 0x1f);
        }
      }
      FUN_00497f60(param_1,*(uint *)(param_1 + 0x198) + (uint)uVar5,
                   *(int *)(param_1 + 0x19c) + (int)((ulonglong)uVar5 >> 0x20) +
                   (uint)CARRY4(*(uint *)(param_1 + 0x198),(uint)uVar5),1);
      FUN_005b8da0(*(undefined4 *)(param_1 + 0xbc8),0,1);
      FUN_0049c820(param_1,0);
      return;
    }
  }
  else {
    if ((*(int *)(param_1 + 0x174) == 4) &&
       ((*(int *)(param_1 + 0xa4) == 1 || (*(int *)(param_1 + 0xa4) == 4)))) {
      GetCursorPos(&local_8);
      local_8.x = local_8.x + param_2;
      SetCursorPos(local_8.x,local_8.y);
      return;
    }
    GetCursorPos(&local_8);
    local_8.x = local_8.x + param_2;
    SetCursorPos(local_8.x,local_8.y);
  }
  return;
}


