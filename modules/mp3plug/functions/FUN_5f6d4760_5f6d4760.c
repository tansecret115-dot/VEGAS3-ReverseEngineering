/* Module: mp3plug.dll
   Function: FUN_5f6d4760
   Address: 5f6d4760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_5f6d4760(undefined4 *param_1,undefined4 param_2,undefined4 param_3,size_t param_4)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  
  puVar1 = calloc(0x14,1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar1[1] = param_3;
  *puVar1 = param_2;
  if (param_4 != 0) {
    pvVar2 = calloc(4,param_4);
    puVar1[2] = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    pvVar2 = calloc(4,param_4);
    puVar1[3] = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  iVar3 = FUN_5f6d4530();
  if (iVar3 == 0) {
    return 0;
  }
  *param_1 = puVar1;
  return 1;
}


