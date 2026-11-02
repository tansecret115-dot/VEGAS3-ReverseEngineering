/* Module: pncrt.dll
   Function: _fpclass
   Address: 78032630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl _fpclass(double _X)

{
  int iVar1;
  
                    /* 0x32630  242  _fpclass */
  if ((_X._6_2_ & 0x7ff0) != 0x7ff0) {
    if ((((ulonglong)_X & 0x7ff0000000000000) == 0) &&
       ((((ulonglong)_X & 0xfffff00000000) != 0 || (_X._0_4_ != 0)))) {
      return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff90) + 0x80;
    }
    if (_X == _DAT_78037dc0) {
      return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffffe0) + 0x40;
    }
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff08) + 0x100;
  }
  iVar1 = FUN_78035b80(_X._0_4_,(uint)((ulonglong)_X >> 0x20));
  if (iVar1 == 1) {
    return 0x200;
  }
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      return 1;
    }
    return 2;
  }
  return 4;
}


