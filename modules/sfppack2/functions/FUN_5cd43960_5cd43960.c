/* Module: sfppack2.dll
   Function: FUN_5cd43960
   Address: 5cd43960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cd43960(void *this,undefined4 *param_1,undefined4 *param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)((int)this + 0x3c);
    FUN_5cd48ce0((int)this + 0x40,param_1 + 1);
    FUN_5cd48ce0((int)this + 0x4c,param_1 + 4);
    FUN_5cd48ce0((int)this + 0x58,param_2);
    FUN_5cd48ce0((int)this + 100,param_2 + 3);
    return 0;
  }
  return 0x80004005;
}


