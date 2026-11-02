/* Module: Setup.exe
   Function: _controlfp
   Address: 00432550
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = _controlfp(_NewValue,_Mask);
  return uVar1;
}


