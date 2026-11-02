/* Module: pngu3266.dll
   Function: FUN_6061f0c0
   Address: 6061f0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6061f0c0(byte *param_1,uint *param_2)

{
  *param_2 = (*param_1 & 0x1c) >> 2;
  param_2[1] = *param_1 >> 1 & 1;
  param_2[2] = *param_1 & 1;
  param_2[3] = (uint)*(ushort *)(param_1 + 1);
  param_2[4] = (uint)param_1[3];
  return;
}


