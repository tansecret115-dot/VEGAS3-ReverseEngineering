/* Module: pncrt.dll
   Function: floor
   Address: 78033e10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl floor(double _X)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_8;
  undefined4 uStack_4;
  
                    /* 0x33e10  607  floor */
  uVar3 = FUN_78035d10();
  uVar2 = (uint)((ulonglong)_X >> 0x20);
  if ((_X._6_2_ & 0x7ff0) != 0x7ff0) {
    fVar5 = FUN_78035da0(_X);
    dVar1 = (double)fVar5;
    if ((dVar1 != _X) && ((uVar3 & 0x20) == 0)) {
      uStack_4 = (undefined4)((ulonglong)dVar1 >> 0x20);
      local_8 = SUB84(dVar1,0);
      fVar5 = FUN_780351b0(0x10,0xb,_X._0_4_,uVar2,local_8,uStack_4,uVar3);
      return (double)fVar5;
    }
    FUN_78035d10();
    return dVar1;
  }
  iVar4 = FUN_78035b80(_X._0_4_,uVar2);
  if (0 < iVar4) {
    if (iVar4 < 3) {
      FUN_78035d10();
      return _X;
    }
    if (iVar4 == 3) {
      fVar5 = FUN_780350e0(0xb,_X._0_4_,uVar2);
      return (double)fVar5;
    }
  }
  fVar5 = FUN_780351b0(8,0xb,_X._0_4_,uVar2,SUB84(_X - _DAT_78037e28,0),
                       (int)((ulonglong)(_X - _DAT_78037e28) >> 0x20),uVar3);
  return (double)fVar5;
}


