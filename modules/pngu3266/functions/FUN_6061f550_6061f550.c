/* Module: pngu3266.dll
   Function: FUN_6061f550
   Address: 6061f550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_6061f550(ushort *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  *param_2 = (uint)*param_1;
  param_2[1] = (uint)param_1[1];
  param_2[2] = (uint)(byte)((byte)param_1[2] >> 7);
  param_2[3] = (((byte)param_1[2] & 0x70) >> 4) + 1;
  param_2[4] = ((byte)param_1[2] & 8) >> 3;
  uVar2 = ((byte)param_1[2] & 7) + 1;
  param_2[5] = uVar2;
  param_2[6] = 1 << (sbyte)uVar2;
  param_2[7] = (uint)*(byte *)((int)param_1 + 5);
  uVar1 = param_1[3];
  param_2[8] = (uint)(byte)uVar1;
  param_2[9] = (uint)(((float)(uint)(byte)uVar1 - _DAT_6062d2c0) * _DAT_6062d2c4);
  return;
}


