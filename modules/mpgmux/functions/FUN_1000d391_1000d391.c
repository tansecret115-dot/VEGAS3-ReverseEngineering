/* Module: mpgmux.dll
   Function: FUN_1000d391
   Address: 1000d391
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_1000d391(double param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  uint uVar5;
  
  uVar2 = FUN_10010fe8();
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_10010eb0(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
    if (0 < iVar3) {
      if (iVar3 < 3) {
        FUN_10010fe8();
        return (float10)param_1;
      }
      if (iVar3 == 3) {
        fVar4 = FUN_100107bd(0xb,param_1);
        return fVar4;
      }
    }
    dVar1 = param_1 + _DAT_10015100;
    uVar5 = 8;
  }
  else {
    fVar4 = __frnd(param_1);
    dVar1 = (double)fVar4;
    if ((dVar1 == param_1) || ((uVar2 & 0x20) != 0)) {
      FUN_10010fe8();
      return (float10)dVar1;
    }
    uVar5 = 0x10;
  }
  fVar4 = FUN_10010811(uVar5,0xb,param_1,dVar1,uVar2);
  return fVar4;
}


