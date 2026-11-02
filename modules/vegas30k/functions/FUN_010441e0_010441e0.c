/* Module: vegas30k.dll
   Function: FUN_010441e0
   Address: 010441e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010441e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01043a30(param_1);
  iVar2 = FUN_010436e0(param_1);
  if (iVar2 < 0) {
    iVar1 = iVar2;
  }
  iVar2 = FUN_01043e80(param_1);
  if (iVar2 < 0) {
    iVar1 = iVar2;
  }
  iVar2 = FUN_01043210(param_1);
  if (iVar2 < 0) {
    iVar1 = iVar2;
  }
  FUN_01044230(param_1);
  return iVar1;
}


