/* Module: vegas30.exe
   Function: FUN_004270b0
   Address: 004270b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004270b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005fb3c0(DAT_0064b138,0xffffffff,0xffffffff);
  if (iVar1 != 0) {
    Transport_Suspend();
  }
  FUN_00428df0(0,0);
  FUN_00425cf0(param_1);
  if (iVar1 != 0) {
    Transport_Resume(0);
  }
  if (*(int *)(param_1 + 0x930) != 0) {
    DrawDibClose(*(int *)(param_1 + 0x930));
    *(undefined4 *)(param_1 + 0x930) = 0;
  }
  DAT_0064aa58 = *(undefined4 *)(param_1 + 0x118);
  DAT_0064aa5c = *(undefined4 *)(param_1 + 0x128);
  DAT_0064a490 = *(undefined4 *)(param_1 + 0x124);
  DAT_0064a494 = *(undefined4 *)(param_1 + 0x11c);
  DAT_0064a498 = *(undefined4 *)(param_1 + 0x120);
  DAT_0064aa54 = *(undefined4 *)(param_1 + 300);
  return 0;
}


