/* Module: encn3260.dll
   Function: FUN_664b7820
   Address: 664b7820
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_664b7820(int param_1)

{
  UINT UVar1;
  uint uVar2;
  
  if ((DAT_664f1d4c == 0) && (UVar1 = FUN_664b7870(), UVar1 == 0)) {
    return 0;
  }
  uVar2 = FUN_664ba5b0((uint *)(param_1 + 0x478),&DAT_664f1530,DAT_664f1d4c);
  return uVar2;
}


