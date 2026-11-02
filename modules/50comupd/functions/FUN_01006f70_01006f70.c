/* Module: 50comupd.exe
   Function: FUN_01006f70
   Address: 01006f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_01006f70(int *param_1)

{
  if (*param_1 != 0x4349444c) {
    return 2;
  }
  FUN_0100700f((int *)param_1[10]);
  *param_1 = 0;
  (*(code *)param_1[2])(param_1[10]);
  (*(code *)param_1[2])(param_1);
  return 0;
}


