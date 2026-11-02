/* Module: mp3plug.dll
   Function: FUN_5f6fb4c0
   Address: 5f6fb4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_5f6fb4c0(int *param_1,int *param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  int iVar1;
  
  if (param_3 == 1) {
    *param_5 = *param_1;
  }
  else if (param_4 == 0) {
    *param_5 = *param_1;
    *param_6 = *param_2;
  }
  else {
    iVar1 = *(int *)(&DAT_5f746488 + *param_2 * 4 + *(int *)(&DAT_5f746488 + *param_1 * 4) * 0x10);
    *param_2 = iVar1;
    *param_1 = iVar1;
    *param_6 = iVar1;
    *param_5 = iVar1;
  }
  return 1;
}


