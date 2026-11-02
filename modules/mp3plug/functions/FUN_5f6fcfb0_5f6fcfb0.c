/* Module: mp3plug.dll
   Function: FUN_5f6fcfb0
   Address: 5f6fcfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6fcfb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 0x480;
  do {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  } while ((int)param_1 < (int)puVar1);
  return 0;
}


