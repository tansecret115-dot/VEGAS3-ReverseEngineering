/* Module: qt4plug.dll
   Function: FUN_5f515730
   Address: 5f515730
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_5f515730(undefined4 param_1,short param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint in_EAX;
  int iVar1;
  
  if ((param_5 != (int *)0x0) && (in_EAX = 0, param_2 == 1)) {
    if ((DAT_5f5a3e70 & 1) == 0) {
      _DAT_5f5a3e68 = _DAT_5f5966b8 - _DAT_5f5a2ad8;
      DAT_5f5a3e70 = DAT_5f5a3e70 | 1;
    }
    FUN_5f57a8b0();
    iVar1 = ftol();
    iVar1 = (**(code **)(*param_5 + 0x18))(param_5,iVar1,iVar1 >> 0x1f);
    in_EAX = 0;
    if (iVar1 != 0) {
      return 0xffffff80;
    }
  }
  return in_EAX & 0xffff0000;
}


