/* Module: mpgmux.dll
   Function: FUN_100020d0
   Address: 100020d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_100020d0(LPCSTR param_1,size_t param_2,undefined *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = _malloc(0x38);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_100013e0(puVar1,param_1,param_2,param_3);
    if (iVar2 != 0) {
      FUN_1000c3f0((undefined *)puVar1);
      return (undefined4 *)0x0;
    }
  }
  return puVar1;
}


