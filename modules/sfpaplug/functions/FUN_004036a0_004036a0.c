/* Module: sfpaplug.dll
   Function: FUN_004036a0
   Address: 004036a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004036a0(int param_1,int *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  piVar1 = param_4;
  if (param_3 < 1) {
    param_3 = 1;
  }
  if (0 < (int)param_4) {
    param_4 = param_2;
    param_2 = piVar1;
    do {
      uVar4 = *param_4 << 1;
      if ((int)uVar4 < 0) {
        uVar4 = ((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) - 1;
      }
      iVar5 = (int)uVar4 >> ((byte)param_3 & 0x1f);
      iVar3 = iVar5;
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        iVar2 = *(int *)(param_1 + 0x50) + 1;
        *(uint *)(param_1 + 0x54) = 0 >> ((byte)iVar3 & 0x1f) & 1U | *(int *)(param_1 + 0x54) << 1;
        *(int *)(param_1 + 0x50) = iVar2;
        if (iVar2 == 8) {
          if (*(int *)(param_1 + 0x48) <= *(int *)(param_1 + 0x4c)) {
            FUN_004035b0(param_1);
          }
          if (DAT_0045c058 == 0) {
            *(undefined1 *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x4c)) =
                 *(undefined1 *)(param_1 + 0x54);
            *(undefined4 *)(param_1 + 0x54) = 0;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
            *(undefined4 *)(param_1 + 0x50) = 0;
          }
        }
      }
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      iVar3 = *(int *)(param_1 + 0x50) + 1;
      *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) << 1 | 1;
      *(int *)(param_1 + 0x50) = iVar3;
      if (iVar3 == 8) {
        if (*(int *)(param_1 + 0x48) <= *(int *)(param_1 + 0x4c)) {
          FUN_004035b0(param_1);
        }
        if (DAT_0045c058 == 0) {
          *(undefined1 *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x4c)) =
               *(undefined1 *)(param_1 + 0x54);
          *(undefined4 *)(param_1 + 0x54) = 0;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          *(undefined4 *)(param_1 + 0x50) = 0;
        }
      }
      iVar3 = param_3;
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        iVar2 = *(int *)(param_1 + 0x50) + 1;
        *(uint *)(param_1 + 0x54) =
             (int)(uVar4 - (iVar5 << ((byte)param_3 & 0x1f))) >> ((byte)iVar3 & 0x1f) & 1U |
             *(int *)(param_1 + 0x54) << 1;
        *(int *)(param_1 + 0x50) = iVar2;
        if (iVar2 == 8) {
          if (*(int *)(param_1 + 0x48) <= *(int *)(param_1 + 0x4c)) {
            FUN_004035b0(param_1);
          }
          if (DAT_0045c058 == 0) {
            *(undefined1 *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x4c)) =
                 *(undefined1 *)(param_1 + 0x54);
            *(undefined4 *)(param_1 + 0x54) = 0;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
            *(undefined4 *)(param_1 + 0x50) = 0;
          }
        }
      }
      param_4 = param_4 + 1;
      param_2 = (int *)((int)param_2 + -1);
    } while (param_2 != (int *)0x0);
  }
  return *(int *)(param_1 + 0x4c) + 1;
}


