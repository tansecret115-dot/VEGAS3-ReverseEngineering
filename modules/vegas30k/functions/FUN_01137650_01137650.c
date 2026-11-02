/* Module: vegas30k.dll
   Function: FUN_01137650
   Address: 01137650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01137650(int param_1,int *param_2)

{
  size_t sVar1;
  int unaff_EDI;
  undefined1 local_8 [8];
  
  *param_2 = 0;
  param_2[1] = 0;
  sVar1 = wcslen((wchar_t *)(param_1 + 0x3c));
  *param_2 = *param_2 + sVar1 * 2 + 0x12;
  (**(code **)(**(int **)(param_1 + 0x30) + 0x1c))(*(int **)(param_1 + 0x30),local_8);
  *param_2 = *param_2 + unaff_EDI + 8;
  return 0;
}


