/* Module: pncrt.dll
   Function: FUN_7802b3c0
   Address: 7802b3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_7802b3c0(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 & 0xff00) == 0) {
    if (__mb_cur_max < 2) {
      uVar1 = (byte)_pctype[(param_1 & 0xff) * 2] & 4;
    }
    else {
      uVar1 = _isctype(param_1 & 0xff,4);
    }
    if (uVar1 != 0) {
      return CONCAT22((short)(uVar1 >> 0x10),(wint_t)param_1);
    }
  }
  iVar2 = iswctype((wint_t)param_1,2);
  uVar1 = param_1 - 0x27;
  if (iVar2 == 0) {
    uVar1 = param_1 - 7;
  }
  return uVar1;
}


