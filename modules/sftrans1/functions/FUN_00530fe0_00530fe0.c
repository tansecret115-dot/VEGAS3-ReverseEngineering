/* Module: sftrans1.dll
   Function: FUN_00530fe0
   Address: 00530fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00530fe0(int param_1,undefined4 *param_2,int param_3)

{
  if ((param_2 != (undefined4 *)0x0) && (param_3 != 0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x3c);
    FUN_00536330(param_1 + 0x40,param_2 + 1);
    FUN_00536330(param_1 + 0x4c,param_2 + 4);
    FUN_00536330(param_1 + 0x58,param_3);
    FUN_00536330(param_1 + 100,param_3 + 0xc);
    return 0;
  }
  return 0x80004005;
}


