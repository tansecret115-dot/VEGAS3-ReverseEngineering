/* Module: tokr3260.dll
   Function: FUN_68059a80
   Address: 68059a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68059a80(int *param_1,size_t param_2)

{
  int *_Memory;
  int *_Memory_00;
  int *piVar1;
  int *piVar2;
  size_t sVar3;
  
  _Memory = calloc(param_2,4);
  if (_Memory == (int *)0x0) {
    return 0xfff0bdc1;
  }
  _Memory_00 = calloc(param_2,4);
  if (_Memory_00 != (int *)0x0) {
    if (0 < (int)param_2) {
      piVar1 = param_1;
      sVar3 = param_2;
      do {
        piVar2 = piVar1 + 1;
        sVar3 = sVar3 - 1;
        *(undefined4 *)((int)_Memory + (-4 - (int)param_1) + (int)piVar2) = *(undefined4 *)*piVar1;
        *(undefined4 *)((int)_Memory_00 + (-4 - (int)param_1) + (int)piVar2) =
             *(undefined4 *)(*piVar1 + 4);
        piVar1 = piVar2;
      } while (sVar3 != 0);
    }
    FUN_68056cf0(_Memory,param_2);
    FUN_68059910(_Memory_00,param_2);
    free(_Memory);
    free(_Memory_00);
    if (0 < (int)param_2) {
      do {
        if (*(void **)(*param_1 + 8) != (void *)0x0) {
          free(*(void **)(*param_1 + 8));
        }
        if ((void *)*param_1 != (void *)0x0) {
          free((void *)*param_1);
        }
        param_1 = param_1 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    return 0;
  }
  return 0xfff0bdc1;
}


