/* Module: pncrt.dll
   Function: _controlfp
   Address: 78010320
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
                    /* 0x10320  193  _controlfp */
  uVar1 = _control87(_NewValue,_Mask & 0xfff7ffff);
  return uVar1;
}


