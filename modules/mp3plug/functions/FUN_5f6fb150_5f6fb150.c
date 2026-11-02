/* Module: mp3plug.dll
   Function: FUN_5f6fb150
   Address: 5f6fb150
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_5f6fb150(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x30);
  *param_1 = pvVar1;
  return pvVar1 == (void *)0x0;
}


