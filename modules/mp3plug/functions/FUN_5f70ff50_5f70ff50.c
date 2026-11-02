/* Module: mp3plug.dll
   Function: FUN_5f70ff50
   Address: 5f70ff50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f70ff50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[9];
  if (*param_1 != 0x28) {
    return 10;
  }
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0xc)) {
    if ((int *)piVar1[2] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[2] + 0x2c))(1);
      piVar1[2] = 0;
    }
    FUN_5f681ba0(piVar1);
    param_1[9] = 0;
    return 0;
  }
  return 0xb;
}


