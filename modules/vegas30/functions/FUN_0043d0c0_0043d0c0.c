/* Module: vegas30.exe
   Function: FUN_0043d0c0
   Address: 0043d0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043d0c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 3) {
    return 1;
  }
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x50) == 0) || (*(int *)(*(int *)(param_1 + 0x50) + 0x18) == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_005f13f0(3);
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    uVar2 = FUN_005f6990(param_1 + 0xf4);
  }
  return uVar2;
}


