/* Module: mpgvout.001
   Function: FUN_10032a50
   Address: 10032a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __cdecl FUN_10032a50(double param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  unkbyte10 local_34;
  undefined8 local_14;
  
  if ((byte)(param_1 < 0.0 | (byte)((ushort)((ushort)NAN(param_1) << 10) >> 8) |
            (byte)((ushort)((ushort)(param_1 == 0.0) << 0xe) >> 8)) == 1) {
    local_14._0_4_ = 0;
    iVar3 = 0;
  }
  else {
    local_14._0_4_ = (int)(longlong)ROUND(param_1 * _DAT_10032a34);
    iVar3 = (int)local_14;
    local_14 = (longlong)ROUND(param_1 * _DAT_10032a34) << 0x20;
    local_34 = (float10)local_14;
    iVar2 = FUN_10032578(0,iVar3,0,0);
    if (iVar2 < 1) {
      local_34 = _DAT_10032a44 + local_34;
    }
    dVar1 = param_1 - (double)local_34;
    if (0.0 <= dVar1) {
      local_14._0_4_ = (int)(longlong)ROUND(dVar1);
    }
    else {
      local_14._0_4_ = (int)(longlong)ROUND(-dVar1);
      bVar4 = (int)local_14 != 0;
      local_14._0_4_ = -(int)local_14;
      iVar3 = iVar3 - (uint)bVar4;
    }
  }
  return CONCAT44(iVar3,(int)local_14);
}


