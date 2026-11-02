/* Module: atrc3260.dll
   Function: FUN_68002a40
   Address: 68002a40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_68002a40(void *this,ushort param_1)

{
  int iVar1;
  
  if (5 < param_1) {
    return 0;
  }
  iVar1 = FUN_68002a70(this,(&PTR_s_DT_NotDef_68005138)[param_1]);
  return iVar1;
}


