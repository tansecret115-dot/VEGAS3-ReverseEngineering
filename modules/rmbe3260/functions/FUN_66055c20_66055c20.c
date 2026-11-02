/* Module: rmbe3260.dll
   Function: FUN_66055c20
   Address: 66055c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66055c20(undefined4 *param_1)

{
  void *this;
  undefined4 *puVar1;
  uint uVar2;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  ushort local_a;
  
  *param_1 = &PTR_FUN_66068a30;
  FUN_66055f20((uint *)&local_10);
  this = operator_new(0x10);
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_66057810(this,((uint)local_a ^ CONCAT22(local_a,uStack_c) ^
                                CONCAT22(uStack_c,uStack_e) ^ CONCAT22(uStack_e,local_10)) - 0x3f40
                               & 0xffff);
  }
  *(undefined4 **)((int)param_1 + 0x1e) = puVar1;
  FUN_66055f20(param_1 + 3);
  *(undefined2 *)(param_1 + 5) = 0;
  uVar2 = FUN_66055f00((int)param_1);
  *(short *)((int)param_1 + 0x16) = (short)uVar2;
  FUN_66055cf0((int)param_1);
  return param_1;
}


