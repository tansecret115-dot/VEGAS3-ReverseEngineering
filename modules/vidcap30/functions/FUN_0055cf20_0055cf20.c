/* Module: vidcap30.exe
   Function: FUN_0055cf20
   Address: 0055cf20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055cf20(int param_1)

{
  FUN_0055cf90();
  *(int *)(param_1 + 0xb0e) = param_1 + 0x8a;
  *(int *)(param_1 + 0xb26) = param_1 + 0xa72;
  *(undefined ***)(param_1 + 0xb16) = &PTR_DAT_005b8ed8;
  *(int *)(param_1 + 0xb1a) = param_1 + 0x97e;
  *(undefined ***)(param_1 + 0xb22) = &PTR_DAT_005b8ef0;
  *(undefined **)(param_1 + 0xb2e) = &DAT_005b8f08;
  *(undefined2 *)(param_1 + 0x16ab) = 0;
  *(undefined4 *)(param_1 + 0x16ad) = 0;
  *(undefined4 *)(param_1 + 0x16a7) = 8;
  FUN_0055cfa0(param_1);
  return;
}


