/* Module: mp3plug.dll
   Function: FUN_5f6fefb0
   Address: 5f6fefb0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_5f6fefb0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x28);
  *param_1 = pvVar1;
  return pvVar1 == (void *)0x0;
}


