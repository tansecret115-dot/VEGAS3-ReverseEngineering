/* Module: mpegin.dll
   Function: FUN_100013a0
   Address: 100013a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_100013a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(double *)(*(int *)(param_1 + 0x12e54) + 200) < _DAT_10016110) {
    iVar2 = FUN_10004210(param_1);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x12e54);
      *(undefined4 *)(iVar2 + 200) = *(undefined4 *)(iVar2 + 0xd0);
      *(undefined4 *)(iVar2 + 0xcc) = *(undefined4 *)(iVar2 + 0xd4);
      return 0;
    }
  }
  else {
    iVar2 = FUN_10004210(param_1);
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


