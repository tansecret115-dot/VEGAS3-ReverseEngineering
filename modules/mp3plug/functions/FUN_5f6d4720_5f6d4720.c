/* Module: mp3plug.dll
   Function: FUN_5f6d4720
   Address: 5f6d4720
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d4720(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if (0 < param_2) {
      puVar1 = param_1;
      do {
        FUN_5f6d3c70((void *)*puVar1);
        puVar1 = puVar1 + 1;
      } while ((int)puVar1 < (int)(param_1 + param_2));
    }
    free(param_1);
  }
  return;
}


