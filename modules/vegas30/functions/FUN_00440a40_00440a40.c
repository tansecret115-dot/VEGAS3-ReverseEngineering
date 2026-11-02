/* Module: vegas30.exe
   Function: FUN_00440a40
   Address: 00440a40
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00440a40(int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    lVar1 = Mixer_StopRender(0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x34) + 8))(*(int **)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return lVar1;
}


