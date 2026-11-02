/* Module: pngu3266.dll
   Function: FUN_6061c600
   Address: 6061c600
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6061c600(void *this,ushort param_1)

{
  int iVar1;
  
  if (5 < param_1) {
    return 0;
  }
  iVar1 = FUN_6061c630(this,(&PTR_s_DT_NotDef_606496c8)[param_1]);
  return iVar1;
}


