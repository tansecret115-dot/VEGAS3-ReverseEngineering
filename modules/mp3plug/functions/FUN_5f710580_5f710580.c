/* Module: mp3plug.dll
   Function: FUN_5f710580
   Address: 5f710580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f710580(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[9];
  if (*param_1 != 0x28) {
    return 10;
  }
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0xc)) {
    (**(code **)(*(int *)piVar1[2] + 4))();
    return 0;
  }
  return 0xb;
}


