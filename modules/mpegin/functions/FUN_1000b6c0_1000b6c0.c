/* Module: mpegin.dll
   Function: FUN_1000b6c0
   Address: 1000b6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_1000b6c0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_100058b0(param_1);
  uVar2 = FUN_100058b0(param_1);
  return uVar2 | uVar1 << 0x10;
}


