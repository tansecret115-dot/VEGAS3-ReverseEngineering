/* Module: vegas30.exe
   Function: FUN_005b0f20
   Address: 005b0f20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b0f20(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_1;
  if ((*(byte *)(param_1 + 0xd0) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x40) = param_2;
    *(undefined4 *)(param_1 + 0x4c + (*(uint *)(param_1 + 0xcc) & 0x1f) * 4) = param_2;
    uVar3 = *(int *)(param_1 + 0xcc) + 1;
    *(uint *)(param_1 + 0xcc) = uVar3;
    if ((int)uVar3 < 1) {
      uVar3 = 1;
    }
    iVar4 = 0;
    *(uint *)(param_1 + 0xcc) = uVar3;
    param_1 = 0;
    if ((int)uVar3 < 1) {
      uVar3 = 1;
    }
    else if (0x20 < uVar3) {
      uVar3 = 0x20;
    }
    if (0 < (int)uVar3) {
      piVar2 = (int *)(iVar1 + 0x4c);
      do {
        if (*piVar2 != 0) {
          iVar4 = iVar4 + 1;
        }
        piVar2 = piVar2 + 1;
        uVar3 = uVar3 - 1;
        param_1 = iVar4;
      } while (uVar3 != 0);
    }
    *(float *)(iVar1 + 0x44) = (float)param_1 * _DAT_00629e44;
  }
  return;
}


