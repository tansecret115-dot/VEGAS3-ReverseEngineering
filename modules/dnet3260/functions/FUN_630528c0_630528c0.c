/* Module: dnet3260.dll
   Function: FUN_630528c0
   Address: 630528c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_630528c0(void *this,ushort param_1)

{
  int iVar1;
  
  if (5 < param_1) {
    return 0;
  }
  iVar1 = FUN_630528f0(this,(&PTR_s_DT_NotDef_63055148)[param_1]);
  return iVar1;
}


