/* Module: mp3plug.dll
   Function: FUN_5f71d8f0
   Address: 5f71d8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_5f71d8f0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int *param_6,
            int param_7)

{
  int iVar1;
  uint uVar2;
  
  if ((*param_6 == 2) && (param_6[3] == 1)) {
    if ((*(int *)(param_3 + 0x10) == 0) || (*(int *)(param_3 + 0x14) != 2)) {
      FUN_5f71d240(param_3,param_2);
    }
    else if (*(int *)(param_3 + 0x18) == 0) {
      FUN_5f71cb20(param_3,param_2);
    }
    else {
      FUN_5f71bc60(param_3,param_2);
    }
    iVar1 = *(int *)(param_3 + 0x4c);
    if (*(int *)(param_3 + 0x4c) <= *(int *)(param_4 + 0x4c)) {
      iVar1 = *(int *)(param_4 + 0x4c);
    }
    *(int *)(param_3 + 0x4c) = iVar1;
    iVar1 = *(int *)(param_3 + 0x54);
    if (*(int *)(param_3 + 0x54) <= *(int *)(param_4 + 0x54)) {
      iVar1 = *(int *)(param_4 + 0x54);
    }
    *(int *)(param_3 + 0x54) = iVar1;
    iVar1 = *(int *)(param_4 + 0x58);
    if (*(int *)(param_4 + 0x58) < *(int *)(param_3 + 0x58)) {
      iVar1 = *(int *)(param_3 + 0x58);
    }
    *(int *)(param_3 + 0x58) = iVar1;
    iVar1 = *(int *)(param_3 + 0x5c);
    if (*(int *)(param_3 + 0x5c) <= *(int *)(param_4 + 0x5c)) {
      iVar1 = *(int *)(param_4 + 0x5c);
    }
    *(int *)(param_3 + 0x5c) = iVar1;
    iVar1 = *(int *)(param_3 + 0x60);
    if (*(int *)(param_3 + 0x60) <= *(int *)(param_4 + 0x60)) {
      iVar1 = *(int *)(param_4 + 0x60);
    }
    *(int *)(param_3 + 0x60) = iVar1;
    iVar1 = *(int *)(param_4 + 100);
    if (*(int *)(param_4 + 100) < *(int *)(param_3 + 100)) {
      iVar1 = *(int *)(param_3 + 100);
    }
    *(int *)(param_3 + 100) = iVar1;
    *(undefined4 *)(param_4 + 0x4c) = *(undefined4 *)(param_3 + 0x4c);
    *(undefined4 *)(param_4 + 0x54) = *(undefined4 *)(param_3 + 0x54);
    *(undefined4 *)(param_4 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    *(undefined4 *)(param_4 + 0x5c) = *(undefined4 *)(param_3 + 0x5c);
    *(undefined4 *)(param_4 + 0x60) = *(undefined4 *)(param_3 + 0x60);
    *(undefined4 *)(param_4 + 100) = *(undefined4 *)(param_3 + 100);
    return;
  }
  if ((*param_6 == 2) && (param_7 != 0)) {
    uVar2 = *(uint *)(param_4 + 0x4c);
    if ((int)*(uint *)(param_4 + 0x4c) < (int)*(uint *)(param_3 + 0x4c)) {
      uVar2 = *(uint *)(param_3 + 0x4c);
    }
    iVar1 = 0;
    if (0 < (int)uVar2) {
      if (0 < (int)(uVar2 & 0xfffffffe)) {
        do {
          *(float *)(param_1 + iVar1 * 4) =
               (*(float *)(param_2 + iVar1 * 4) + *(float *)(param_1 + iVar1 * 4)) * _DAT_5f766ba0;
          *(float *)(param_1 + 4 + iVar1 * 4) =
               (*(float *)(param_1 + 4 + iVar1 * 4) + *(float *)(param_2 + 4 + iVar1 * 4)) *
               _DAT_5f766ba0;
          iVar1 = iVar1 + 2;
        } while (iVar1 < (int)(uVar2 & 0xfffffffe));
      }
      for (; iVar1 < (int)uVar2; iVar1 = iVar1 + 1) {
        *(float *)(param_1 + iVar1 * 4) =
             (*(float *)(param_2 + iVar1 * 4) + *(float *)(param_1 + iVar1 * 4)) * _DAT_5f766ba0;
      }
    }
  }
  return;
}


