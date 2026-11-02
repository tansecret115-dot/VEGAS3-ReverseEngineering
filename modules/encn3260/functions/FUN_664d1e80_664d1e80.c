/* Module: encn3260.dll
   Function: FUN_664d1e80
   Address: 664d1e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_664d1e80(undefined4 *param_1)

{
  void *this;
  undefined4 *puVar1;
  uint uVar2;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  ushort local_a;
  
  *param_1 = &PTR_FUN_664dfe50;
  FUN_664d20b0((uint *)&local_10);
  this = operator_new(0x10);
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_664d7870(this,((uint)local_a ^ CONCAT22(local_a,uStack_c) ^
                                CONCAT22(uStack_c,uStack_e) ^ CONCAT22(uStack_e,local_10)) - 0x3f40
                               & 0xffff);
  }
  *(undefined4 **)((int)param_1 + 0x1e) = puVar1;
  FUN_664d20b0(param_1 + 3);
  *(undefined2 *)(param_1 + 5) = 0;
  uVar2 = FUN_664d2090((int)param_1);
  *(short *)((int)param_1 + 0x16) = (short)uVar2;
  FUN_664d1f50((int)param_1);
  return param_1;
}


