/* Module: mpgmux.dll
   Function: FUN_1000c690
   Address: 1000c690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_1000c690(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_1000ee21();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_1000ecb1(param_1,param_2,param_3,puVar1);
  FUN_1000eafd((uint)puVar1);
  return puVar2;
}


