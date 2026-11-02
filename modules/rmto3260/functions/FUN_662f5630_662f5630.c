/* Module: rmto3260.dll
   Function: FUN_662f5630
   Address: 662f5630
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_662f5630(uint param_1)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = (short)(param_1 >> 0x10);
  if (sVar1 == -1) {
    return param_1 & 0xffff;
  }
  uVar2 = param_1 >> 0x10;
  if ((sVar1 == 0) && (uVar2 = DAT_66311d60, DAT_66311d64 != 0)) {
    return DAT_66311d5c << 0x10 | param_1 & 0xffff;
  }
  return uVar2 << 0x10 | param_1 & 0xffff;
}


