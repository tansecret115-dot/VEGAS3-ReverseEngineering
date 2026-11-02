/* Module: vegas30.exe
   Function: FUN_005216b0
   Address: 005216b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005216b0(int param_1)

{
  if (*(int *)(param_1 + 0x94) != 0) {
    DrawDibClose(*(int *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  FUN_00516b50(DAT_006471fc,"Vegas.Class.VideoMotion.Selection");
  FUN_0050ae00(DAT_006471fc,"Vegas.Class.VideoMotion.Plexi");
  if (*(void **)(param_1 + 0x90) != (void *)0x0) {
    free(*(void **)(param_1 + 0x90));
  }
  if (*(int *)(param_1 + 0x238) != 0) {
    _SfDibFree_8(*(int *)(param_1 + 0x238),0);
    *(undefined4 *)(param_1 + 0x230) = 0;
    *(undefined4 *)(param_1 + 0x238) = 0;
    *(undefined4 *)(param_1 + 0x23c) = 0;
    *(undefined4 *)(param_1 + 0x234) = 0;
    *(undefined4 *)(DAT_0064762c + 0xa4) = 0;
    return 0;
  }
  *(undefined4 *)(DAT_0064762c + 0xa4) = 0;
  return 0;
}


