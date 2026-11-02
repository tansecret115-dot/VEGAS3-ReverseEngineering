/* Module: mpgmux.dll
   Function: FUN_1000b370
   Address: 1000b370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000b370(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x2dc4);
  if (iVar1 != 0) {
    iVar3 = 0;
    if (iVar1 != 1 && -1 < iVar1 + -1) {
      piVar2 = (int *)(param_1 + 0x2648);
      iVar1 = iVar3;
      do {
        iVar4 = piVar2[-2];
        iVar3 = iVar1 + 1;
        FUN_1000b210(param_1,iVar4 + 3,iVar3,1);
        FUN_1000b210(param_1,iVar4 + 9,*(int *)(param_1 + 0x2dc0) + iVar1,0);
        iVar1 = *(int *)(param_1 + 0x2634);
        if (*piVar2 < iVar1) {
          iVar4 = *(int *)(param_1 + 0x2638) - iVar1;
          iVar1 = (**(code **)(param_1 + 0x2628))
                            (*(undefined4 *)(param_1 + 0x11f8),iVar1 + *(int *)(param_1 + 0x262c),
                             iVar4);
          if (iVar1 != iVar4) {
            return 0x10;
          }
          iVar1 = *piVar2;
          iVar4 = (**(code **)(param_1 + 0x2628))
                            (*(undefined4 *)(param_1 + 0x11f8),*(undefined4 *)(param_1 + 0x262c),
                             iVar1);
          if (iVar4 != iVar1) {
            return 0x10;
          }
          *(int *)(param_1 + 0x2634) = iVar1;
        }
        else {
          iVar4 = *piVar2 - iVar1;
          iVar1 = (**(code **)(param_1 + 0x2628))
                            (*(undefined4 *)(param_1 + 0x11f8),*(int *)(param_1 + 0x262c) + iVar1,
                             iVar4);
          if (iVar1 != iVar4) {
            return 0x10;
          }
          *(int *)(param_1 + 0x2634) = *(int *)(param_1 + 0x2634) + iVar4;
        }
        piVar2 = piVar2 + 2;
        iVar1 = iVar3;
      } while (iVar3 < *(int *)(param_1 + 0x2dc4) + -1);
    }
    iVar1 = *(int *)(param_1 + 0x2640 + iVar3 * 8);
    FUN_1000b210(param_1,iVar1 + 3,iVar3 + 1,1);
    FUN_1000b210(param_1,iVar1 + 9,*(int *)(param_1 + 0x2dc0) + iVar3,0);
    iVar1 = *(int *)(param_1 + 0x2634);
    if (*(int *)(param_1 + 0x2630) < iVar1) {
      iVar3 = *(int *)(param_1 + 0x2638) - iVar1;
      iVar1 = (**(code **)(param_1 + 0x2628))
                        (*(undefined4 *)(param_1 + 0x11f8),iVar1 + *(int *)(param_1 + 0x262c),iVar3)
      ;
      if (iVar1 != iVar3) {
        return 0x10;
      }
      iVar3 = *(int *)(param_1 + 0x2630);
      iVar1 = (**(code **)(param_1 + 0x2628))
                        (*(undefined4 *)(param_1 + 0x11f8),*(undefined4 *)(param_1 + 0x262c),iVar3);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x2630) - iVar1;
      iVar1 = (**(code **)(param_1 + 0x2628))
                        (*(undefined4 *)(param_1 + 0x11f8),*(int *)(param_1 + 0x262c) + iVar1,iVar3)
      ;
    }
    if (iVar1 != iVar3) {
      return 0x10;
    }
  }
  return 0;
}


