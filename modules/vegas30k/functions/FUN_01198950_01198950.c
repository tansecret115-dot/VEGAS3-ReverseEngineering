/* Module: vegas30k.dll
   Function: FUN_01198950
   Address: 01198950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_01198950(int param_1,double *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x674);
  iVar2 = 0;
  if (iVar1 != 0) {
    do {
      if (((*(byte *)(iVar1 + 8) & 2) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x103) != 0)) {
        iVar2 = iVar2 + 1;
      }
      iVar1 = *(int *)(iVar1 + 0x18);
    } while (iVar1 != 0);
    if (iVar2 == 1) {
      return;
    }
  }
  if (iVar2 == *(int *)(param_1 + 0x4a0)) {
    *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x498);
    *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_1 + 0x49c);
  }
  if (*(int *)(param_1 + 0x4a0) == 0) {
    *param_2 = ABS(*(double *)(param_1 + 0x490));
    if (*(double *)(param_1 + 0x490) < _DAT_011db3f0) {
      *param_3 = 1;
      return;
    }
    *param_3 = 0;
  }
  else {
    *param_2 = ABS(*(double *)(param_1 + 0x490));
    *param_3 = (uint)(*(double *)(param_1 + 0x490) < _DAT_011db3f0);
    iVar1 = *(int *)(param_1 + 0x4a0) + -1;
    *(int *)(param_1 + 0x4a0) = iVar1;
    if ((iVar1 == 0) && (*(double *)(param_1 + 0x490) != *(double *)(param_1 + 0x498))) {
      *(int *)(param_1 + 0x4a0) = iVar2;
      *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x498);
      *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_1 + 0x49c);
      return;
    }
  }
  return;
}


