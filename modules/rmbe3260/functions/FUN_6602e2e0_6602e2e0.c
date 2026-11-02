/* Module: rmbe3260.dll
   Function: FUN_6602e2e0
   Address: 6602e2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_6602e2e0(uint param_1)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = (short)(param_1 >> 0x10);
  if (sVar1 == -1) {
    return param_1 & 0xffff;
  }
  uVar2 = param_1 >> 0x10;
  if ((sVar1 == 0) && (uVar2 = DAT_6607523c, DAT_66075240 != 0)) {
    return DAT_66075238 << 0x10 | param_1 & 0xffff;
  }
  return uVar2 << 0x10 | param_1 & 0xffff;
}


