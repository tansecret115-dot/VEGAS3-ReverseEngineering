/* Module: pngu3266.dll
   Function: FUN_6061f050
   Address: 6061f050
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6061f050(ushort *param_1,uint *param_2)

{
  uint uVar1;
  
  *param_2 = (uint)*param_1;
  param_2[1] = (uint)param_1[1];
  param_2[2] = (uint)param_1[2];
  param_2[3] = (uint)param_1[3];
  param_2[4] = (uint)(byte)((byte)param_1[4] >> 7);
  param_2[5] = ((byte)param_1[4] & 0x40) >> 6;
  param_2[6] = ((byte)param_1[4] & 0x20) >> 5;
  uVar1 = ((byte)param_1[4] & 7) + 1;
  param_2[7] = uVar1;
  param_2[8] = 1 << (sbyte)uVar1;
  return;
}


