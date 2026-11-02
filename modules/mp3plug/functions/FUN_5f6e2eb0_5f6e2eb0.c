/* Module: mp3plug.dll
   Function: FUN_5f6e2eb0
   Address: 5f6e2eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_5f6e2eb0(undefined4 *param_1)

{
  void *pvVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    pvVar1 = calloc(1,0x17cc);
    *param_1 = pvVar1;
    return pvVar1 == (void *)0x0;
  }
  return true;
}


