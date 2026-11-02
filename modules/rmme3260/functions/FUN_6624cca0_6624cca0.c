/* Module: rmme3260.dll
   Function: FUN_6624cca0
   Address: 6624cca0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_6624cca0(int param_1)

{
  UINT UVar1;
  uint uVar2;
  
  if ((DAT_6627e554 == 0) && (UVar1 = FUN_6624ccf0(), UVar1 == 0)) {
    return 0;
  }
  uVar2 = FUN_6624fa30((uint *)(param_1 + 0x478),&DAT_6627dd38,DAT_6627e554);
  return uVar2;
}


