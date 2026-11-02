/* Module: encn3260.dll
   Function: FUN_664cbd30
   Address: 664cbd30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664cbd30(void *this,ushort param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (5 < param_1) {
    return 0x80004005;
  }
  uVar1 = FUN_664cbd60(this,(&PTR_s_DT_NotDef_664efff8)[param_1],param_2);
  return uVar1;
}


