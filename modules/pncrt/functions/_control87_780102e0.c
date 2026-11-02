/* Module: pncrt.dll
   Function: _control87
   Address: 780102e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _control87(uint _NewValue,uint _Mask)

{
  uint uVar1;
  undefined4 in_ECX;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
                    /* 0x102e0  192  _control87 */
  local_8 = CONCAT22((short)((uint)in_ECX >> 0x10),in_FPUControlWord);
  uVar1 = FUN_78010370(local_8);
  FUN_78010410();
  return _Mask & _NewValue | ~_Mask & uVar1;
}


