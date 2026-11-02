/* Module: stl2plg.dll
   Function: FUN_00405e50
   Address: 00405e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00405e50(void *this,void *param_1,undefined4 param_2)

{
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00464a40;
  puStack_10 = &DAT_004625e6;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  FUN_00406770((int *)((int)this + 0x3b8),param_1,param_2,(void *)((int)this + 0x228));
  ExceptionList = local_14;
  return;
}


