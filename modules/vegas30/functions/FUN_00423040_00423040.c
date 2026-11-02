/* Module: vegas30.exe
   Function: FUN_00423040
   Address: 00423040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00423040(void)

{
  int iVar1;
  
  iVar1 = FUN_0040c050(200);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x248) == 0)) && (*(int *)(iVar1 + 0x8c) != 1)) {
    iVar1 = FUN_005b8630(*(undefined4 *)(iVar1 + 700));
    if (*(int *)(iVar1 + 0x3f0) == 0) {
      FUN_00422fb0();
      return;
    }
  }
  return;
}


