/* Module: vegas30.exe
   Function: FUN_004d4e00
   Address: 004d4e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004d4e00(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_2 + 0x18) < 0) {
    return 0;
  }
  iVar1 = FUN_004cb480(param_1,*(int *)(param_2 + 0x18),&param_2);
  uVar2 = 1;
  if ((iVar1 < *(int *)(param_1 + 0xba8)) ||
     (*(int *)(param_1 + 0xbac) + *(int *)(param_1 + 0xba8) < param_2 + iVar1)) {
    uVar2 = 0;
  }
  return uVar2;
}


