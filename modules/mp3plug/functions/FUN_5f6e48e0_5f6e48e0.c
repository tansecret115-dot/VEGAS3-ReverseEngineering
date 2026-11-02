/* Module: mp3plug.dll
   Function: FUN_5f6e48e0
   Address: 5f6e48e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6e48e0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    if (0 < *(int *)(param_1 + 0xac)) {
      if (param_2 + 0x18 < param_1 + 0x1f0) {
        fVar2 = *(float *)(param_2 + 0x18);
        do {
          fVar2 = *(float *)(param_1 + 0x1f0 + iVar3 * 4) + fVar2;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0xac));
        *(float *)(param_2 + 0x18) = fVar2;
      }
      else {
        do {
          iVar1 = iVar3 * 4;
          iVar3 = iVar3 + 1;
          *(float *)(param_2 + 0x18) =
               *(float *)(param_1 + 0x1f0 + iVar1) + *(float *)(param_2 + 0x18);
        } while (iVar3 < *(int *)(param_1 + 0xac));
      }
    }
    *(undefined4 *)(param_2 + 0x1c) = 0;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0xc40)) {
      if (param_2 + 0x1c < param_1 + 0xd84) {
        fVar2 = *(float *)(param_2 + 0x1c);
        do {
          fVar2 = *(float *)(param_1 + 0xd84 + iVar3 * 4) + fVar2;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0xc40));
        *(float *)(param_2 + 0x1c) = fVar2;
      }
      else {
        do {
          iVar1 = iVar3 * 4;
          iVar3 = iVar3 + 1;
          *(float *)(param_2 + 0x1c) =
               *(float *)(param_1 + 0xd84 + iVar1) + *(float *)(param_2 + 0x1c);
        } while (iVar3 < *(int *)(param_1 + 0xc40));
      }
    }
    *(float *)(param_2 + 0x4c) =
         (*(float *)(param_1 + 0xc34) + *(float *)(param_1 + 0x17c8)) * _DAT_5f75d484 *
         _DAT_5f75d488;
  }
  return;
}


