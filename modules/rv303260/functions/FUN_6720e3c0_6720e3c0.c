/* Module: rv303260.dll
   Function: FUN_6720e3c0
   Address: 6720e3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6720e3c0(void *this,ushort param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (5 < param_1) {
    return 0x80004005;
  }
  uVar1 = FUN_6720e3f0(this,(&PTR_s_DT_NotDef_67215420)[param_1],param_2);
  return uVar1;
}


