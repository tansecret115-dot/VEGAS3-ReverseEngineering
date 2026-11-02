/* Module: rmbe3260.dll
   Function: FUN_66052f60
   Address: 66052f60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66052f60(void *this,ushort param_1)

{
  int iVar1;
  
  if (5 < param_1) {
    return 0;
  }
  iVar1 = FUN_66052f90(this,(&PTR_s_DT_NotDef_6606f2d0)[param_1]);
  return iVar1;
}


