/* Module: encn3260.dll
   Function: FUN_664b6010
   Address: 664b6010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b6010(uint *param_1,uint *param_2)

{
  uint uVar1;
  void *pvVar2;
  
  if ((((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && (param_1[1] != 0)) &&
     (((*param_1 & 0x100) != 0 && ((*param_2 & 0x100) != 0)))) {
    if ((*param_2 & 1) == 0) {
      uVar1 = param_2[0x10e];
      pvVar2 = malloc(*(int *)(uVar1 + 0x1c) * *(int *)(uVar1 + 0x20));
      *(void **)(uVar1 + 0x60) = pvVar2;
    }
    return 0;
  }
  return 0x80070057;
}


