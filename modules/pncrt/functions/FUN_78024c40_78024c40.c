/* Module: pncrt.dll
   Function: FUN_78024c40
   Address: 78024c40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_78024c40(uint param_1)

{
  uint uVar1;
  
  if (__mb_cur_max < 2) {
    uVar1 = (byte)_pctype[param_1 * 2] & 4;
  }
  else {
    uVar1 = _isctype(param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}


