/* Module: vegas30.exe
   Function: FUN_00422fb0
   Address: 00422fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422fb0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_0040c050(200);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x248) == 0)) {
    FUN_005b8630(*(undefined4 *)(iVar2 + 700));
    iVar1 = *(int *)(iVar2 + 0x8c);
    if (iVar1 == 4) {
      FUN_005b41d0(1,*(undefined4 *)(iVar2 + 0x88),*(undefined4 *)(iVar2 + 0x1bc),0);
      return;
    }
    if (iVar1 == 3) {
      FUN_005b41d0(4,*(undefined4 *)(iVar2 + 0x88),*(undefined4 *)(iVar2 + 0x1bc),0);
      return;
    }
    if (iVar1 == 2) {
      FUN_005b41d0(0xffffffff,0xffffffff,*(undefined4 *)(iVar2 + 0x1bc),
                   *(undefined4 *)(iVar2 + 0x94));
    }
  }
  return;
}


