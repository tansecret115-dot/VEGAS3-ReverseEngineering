/* Module: mpgmux.dll
   Function: FUN_10002110
   Address: 10002110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_10002110(LPCSTR param_1,size_t param_2,undefined *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = _malloc(0x38);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_10001ad0(puVar1,param_1,param_2,param_3);
    if (iVar2 != 0) {
      FUN_1000c3f0((undefined *)puVar1);
      return (undefined4 *)0x0;
    }
  }
  return puVar1;
}


