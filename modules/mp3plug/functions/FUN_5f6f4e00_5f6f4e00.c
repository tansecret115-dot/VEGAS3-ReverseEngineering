/* Module: mp3plug.dll
   Function: FUN_5f6f4e00
   Address: 5f6f4e00
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_5f6f4e00(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x4f0);
  *param_1 = pvVar1;
  return pvVar1 == (void *)0x0;
}


