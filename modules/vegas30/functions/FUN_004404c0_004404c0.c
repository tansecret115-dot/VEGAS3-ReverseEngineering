/* Module: vegas30.exe
   Function: FUN_004404c0
   Address: 004404c0
   Source: Ghidra pseudocode (Stage 10 batch) */


long __fastcall FUN_004404c0(int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    lVar1 = Mixer_StopRender(0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(*(int **)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return lVar1;
}


