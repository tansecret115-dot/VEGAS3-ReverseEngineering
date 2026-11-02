/* Module: rv103260.dll
   Function: FUN_636a5540
   Address: 636a5540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636a5540(void *this,ushort param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (5 < param_1) {
    return 0x80004005;
  }
  uVar1 = FUN_636a5570(this,(&PTR_s_DT_NotDef_636a82b0)[param_1],param_2);
  return uVar1;
}


