/* Module: mpegin.dll
   Function: FUN_10001e20
   Address: 10001e20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_10001e20(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(double *)(*(int *)(param_1 + 0x12e54) + 200) < _DAT_10016110) ||
     (*(int *)(param_1 + 0x20) == 0)) {
    iVar2 = FUN_10004070(param_1);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x20) == 0) {
        *(double *)(*(int *)(param_1 + 0x12e54) + 0xd0) =
             ((double)*(longlong *)(*(int *)(param_1 + 0x12e54) + 0x220) - _DAT_10016120) /
             (double)*(int *)(param_1 + 0xcac);
        iVar2 = *(int *)(param_1 + 0x12e54);
        *(double *)(iVar2 + 0xd0) = *(double *)(iVar2 + 0xe8) * *(double *)(iVar2 + 0xd0);
      }
      iVar2 = *(int *)(param_1 + 0x12e54);
      *(undefined4 *)(iVar2 + 200) = *(undefined4 *)(iVar2 + 0xd0);
      *(undefined4 *)(iVar2 + 0xcc) = *(undefined4 *)(iVar2 + 0xd4);
      return 0;
    }
  }
  else {
    iVar2 = FUN_10004070(param_1);
    if (iVar2 == 0) {
      iVar1 = *(int *)(param_1 + 0x12e54);
      if (*(double *)(iVar1 + 200) != *(double *)(iVar1 + 0xd0)) {
        *(undefined4 *)(iVar1 + 200) = *(undefined4 *)(iVar1 + 0xd0);
        *(undefined4 *)(iVar1 + 0xcc) = *(undefined4 *)(iVar1 + 0xd4);
        return 0;
      }
      *(double *)(iVar1 + 200) = *(double *)(iVar1 + 0xe8) + *(double *)(iVar1 + 200);
      iVar1 = *(int *)(param_1 + 0x12e54);
      *(undefined4 *)(iVar1 + 0xd0) = *(undefined4 *)(iVar1 + 200);
      *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(iVar1 + 0xcc);
    }
  }
  return iVar2;
}


