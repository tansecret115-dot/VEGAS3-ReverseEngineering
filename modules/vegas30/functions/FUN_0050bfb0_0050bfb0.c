/* Module: vegas30.exe
   Function: FUN_0050bfb0
   Address: 0050bfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050bfb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0x80004005;
  }
  if ((*(byte *)(param_1 + 0xa8) & 4) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x98);
  if ((*(uint *)(iVar1 + 4) & 0x1000) != 0) {
    uVar2 = FUN_004ea250(DAT_0064b138,*(undefined4 *)(iVar1 + 0x90),0x29,0);
    return uVar2;
  }
  uVar2 = FUN_004ea750(DAT_0064b138,*(undefined4 *)(iVar1 + 0x90),0x2b,0);
  return uVar2;
}


