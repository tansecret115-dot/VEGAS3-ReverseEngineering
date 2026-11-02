/* Module: rv203260.dll
   Function: FUN_638aee50
   Address: 638aee50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638aee50(void *this,ushort param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (5 < param_1) {
    return 0x80004005;
  }
  uVar1 = FUN_638aee80(this,(&PTR_s_DT_NotDef_638b5330)[param_1],param_2);
  return uVar1;
}


