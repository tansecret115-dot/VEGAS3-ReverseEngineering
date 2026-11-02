/* Module: pngu3266.dll
   Function: FUN_6061dbf0
   Address: 6061dbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_6061dbf0(uint param_1)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = (short)(param_1 >> 0x10);
  if (sVar1 == -1) {
    return param_1 & 0xffff;
  }
  uVar2 = param_1 >> 0x10;
  if ((sVar1 == 0) && (uVar2 = DAT_6064b444, DAT_6064b448 != 0)) {
    return DAT_6064b440 << 0x10 | param_1 & 0xffff;
  }
  return uVar2 << 0x10 | param_1 & 0xffff;
}


