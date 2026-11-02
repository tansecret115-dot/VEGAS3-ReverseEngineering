/* Module: vegas30.exe
   Function: FUN_004dd8b0
   Address: 004dd8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004dd8b0(int param_1)

{
  int iVar1;
  
  FUN_0045ecf0(param_1,0);
  FUN_00472480(param_1,*(undefined4 *)(param_1 + 0xb70),*(undefined4 *)(param_1 + 0xb74));
  iVar1 = Transport_IsPreviewPlaying();
  if (iVar1 == 0) {
    FUN_004e40a0(0);
    FUN_00427f90(*(undefined4 *)(param_1 + 0xb70),*(undefined4 *)(param_1 + 0xb74),1,1);
  }
  return;
}


