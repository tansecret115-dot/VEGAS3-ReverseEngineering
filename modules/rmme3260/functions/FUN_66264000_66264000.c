/* Module: rmme3260.dll
   Function: FUN_66264000
   Address: 66264000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66264000(void *this,ushort param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (5 < param_1) {
    return 0x80004005;
  }
  uVar1 = FUN_66264030(this,(&PTR_s_DT_NotDef_6627cba8)[param_1],param_2);
  return uVar1;
}


