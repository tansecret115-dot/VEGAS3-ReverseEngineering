/* Module: mcmpgdec.dll
   Function: FUN_1000a6c4
   Address: 1000a6c4
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1000a6c4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c0);
  if (iVar1 == 2) {
    iVar1 = FUN_1000a95c(param_1);
    return iVar1;
  }
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      iVar1 = FUN_1000a8f8(param_1);
      return iVar1;
    }
  }
  else {
    if (iVar1 == 3) {
      iVar1 = FUN_1000a9f0(param_1);
      return iVar1;
    }
    if (iVar1 == 4) {
      iVar1 = FUN_1000aa84(param_1);
      return iVar1;
    }
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_1000bb3c(param_1,"Get_macroblock_type(): unrecognized picture coding type");
  }
  return 0;
}


