/* Module: vegas30k.dll
   Function: FUN_01040d60
   Address: 01040d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01040d60(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0xe];
  *param_1 = &PTR_LAB_011dd11c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0xe] = 0;
  return;
}


