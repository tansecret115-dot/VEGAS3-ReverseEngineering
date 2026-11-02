/* Module: pncrt.dll
   Function: frexp
   Address: 78033f10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl frexp(double _X,int *_Y)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
                    /* 0x33f10  618  frexp */
  uVar2 = FUN_78035d10();
  uVar1 = (uint)((ulonglong)_X >> 0x20);
  if ((_X._6_2_ & 0x7ff0) != 0x7ff0) {
    fVar4 = FUN_78035be0(_X._0_4_,uVar1,_Y);
    FUN_78035d10();
    return (double)fVar4;
  }
  *_Y = -1;
  iVar3 = FUN_78035b80(_X._0_4_,uVar1);
  if (0 < iVar3) {
    if (iVar3 < 3) {
      fVar4 = FUN_780351b0(8,0x17,_X._0_4_,uVar1,DAT_78041a40,DAT_78041a44,uVar2);
      return (double)fVar4;
    }
    if (iVar3 == 3) {
      fVar4 = FUN_780350e0(0x17,_X._0_4_,uVar1);
      return (double)fVar4;
    }
  }
  fVar4 = FUN_780351b0(8,0x17,_X._0_4_,uVar1,SUB84(_X - _DAT_78037e30,0),
                       (int)((ulonglong)(_X - _DAT_78037e30) >> 0x20),uVar2);
  return (double)fVar4;
}


