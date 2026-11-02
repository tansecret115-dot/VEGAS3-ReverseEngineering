/* Module: sfcdi.dll
   Function: FUN_5bf102f0
   Address: 5bf102f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf102f0(byte *param_1)

{
  ushort uVar1;
  
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = FUN_5bf0e140(0,param_1,0x10);
  *(ushort *)(param_1 + 0x10) = CONCAT11((char)~(uint)uVar1,(char)(~(uint)uVar1 >> 8));
  return;
}


