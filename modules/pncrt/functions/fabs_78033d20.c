/* Module: pncrt.dll
   Function: fabs
   Address: 78033d20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl fabs(double _X)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
                    /* 0x33d20  597  fabs */
  uVar2 = FUN_78035d10();
  if ((_X._6_2_ & 0x7ff0) != 0x7ff0) {
    FUN_78035d10();
    return ABS(_X);
  }
  uVar1 = (uint)((ulonglong)_X >> 0x20);
  iVar3 = FUN_78035b80(_X._0_4_,uVar1);
  if (iVar3 == 1) {
    FUN_78035d10();
    return _X;
  }
  if (iVar3 == 2) {
    FUN_78035d10();
    return -_X;
  }
  if (iVar3 != 3) {
    fVar4 = FUN_780351b0(8,0x15,_X._0_4_,uVar1,SUB84(_X - _DAT_78037e20,0),
                         (int)((ulonglong)(_X - _DAT_78037e20) >> 0x20),uVar2);
    return (double)fVar4;
  }
  fVar4 = FUN_780350e0(0x15,_X._0_4_,uVar1);
  return (double)fVar4;
}


