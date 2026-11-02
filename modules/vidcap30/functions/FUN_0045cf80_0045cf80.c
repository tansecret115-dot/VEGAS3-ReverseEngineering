/* Module: vidcap30.exe
   Function: FUN_0045cf80
   Address: 0045cf80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045cf80(undefined4 param_1,int param_2,int param_3)

{
  if ((*(int *)(param_2 + 8) == 0x4cf) && (*(int *)(param_3 + 0x70) != 0)) {
    _SfHelp_HitTestToolbar_8(*(int *)(param_3 + 0x70),param_2);
  }
  FUN_0041f690(0,param_1,0,*(undefined4 *)(param_2 + 8),&DAT_005b61b0,0);
  return;
}


