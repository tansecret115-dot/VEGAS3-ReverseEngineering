/* Module: mp3plug.dll
   Function: FUN_5f6fb570
   Address: 5f6fb570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6fb570(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    pvVar1 = calloc(1,8);
    *param_1 = pvVar1;
    piVar2 = (int *)0x0;
    if (pvVar1 != (void *)0x0) {
      pvVar1 = malloc(0x1008);
      *(void **)*param_1 = pvVar1;
      piVar2 = (int *)*param_1;
    }
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      return 0;
    }
  }
  return 1;
}


