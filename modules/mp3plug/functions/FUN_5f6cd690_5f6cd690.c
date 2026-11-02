/* Module: mp3plug.dll
   Function: FUN_5f6cd690
   Address: 5f6cd690
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_5f6cd690(int param_1,int param_2,uint param_3,int param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  iVar2 = *param_5;
  if (param_3 == 0) {
    uVar5 = param_6 - iVar2;
    if (param_6 != iVar2) {
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 1;
        *(undefined4 *)(param_4 + iVar2 * 4) = 0;
        iVar2 = iVar2 + 1;
      } while (uVar3 < uVar5);
    }
    iVar4 = 0;
  }
  else if (*(int *)(param_1 + 0x78) == 0) {
    if (*(int *)(param_1 + 0xc4) == 0) {
      uVar5 = param_3 >> 1;
      if ((uint)(param_6 - iVar2) < uVar5) {
        uVar5 = param_6 - iVar2;
      }
      uVar3 = 0;
      if (uVar5 != 0) {
        do {
          iVar4 = uVar3 * 2;
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + 1;
          *(float *)(param_4 + -4 + iVar2 * 4) = (float)(int)*(short *)(param_2 + iVar4);
        } while (uVar3 < uVar5);
      }
    }
    else {
      uVar5 = param_3 >> 1;
      if ((uint)((param_6 - iVar2) * 2) < uVar5) {
        uVar5 = (param_6 - iVar2) * 2;
      }
      uVar3 = 0;
      if ((uVar5 & 0xfffffffe) != 0) {
        do {
          iVar1 = uVar3 * 2;
          iVar4 = uVar3 * 2;
          uVar3 = uVar3 + 2;
          *(float *)(param_4 + iVar2 * 4) =
               ((float)(int)*(short *)(param_2 + 2 + iVar4) +
               (float)(int)*(short *)(param_2 + iVar1)) * _DAT_5f75c004;
          iVar2 = iVar2 + 1;
        } while (uVar3 < (uVar5 & 0xfffffffe));
      }
    }
    iVar4 = uVar3 * 2;
  }
  else if (*(int *)(param_1 + 0x78) == 1) {
    if (*(int *)(param_1 + 0xc4) == 0) {
      uVar5 = param_6 - iVar2;
      if (param_3 >> 2 <= (uint)(param_6 - iVar2)) {
        uVar5 = param_3 >> 2;
      }
      uVar3 = 0;
      if (uVar5 != 0) {
        do {
          iVar4 = uVar3 * 4;
          uVar3 = uVar3 + 1;
          *(undefined4 *)(param_4 + iVar2 * 4) = *(undefined4 *)(param_2 + iVar4);
          iVar2 = iVar2 + 1;
        } while (uVar3 < uVar5);
      }
    }
    else {
      uVar5 = param_3 >> 2;
      if ((uint)((param_6 - iVar2) * 2) < uVar5) {
        uVar5 = (param_6 - iVar2) * 2;
      }
      uVar3 = 0;
      if ((uVar5 & 0xfffffffe) != 0) {
        do {
          *(float *)(param_4 + iVar2 * 4) =
               (*(float *)(param_2 + 4 + uVar3 * 4) + *(float *)(param_2 + uVar3 * 4)) *
               _DAT_5f75c008;
          iVar2 = iVar2 + 1;
          uVar3 = uVar3 + 2;
        } while (uVar3 < (uVar5 & 0xfffffffe));
      }
    }
    iVar4 = uVar3 << 2;
  }
  *param_5 = iVar2;
  return iVar4;
}


