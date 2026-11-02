/* Module: encn3260.dll
   Function: FUN_6648d260
   Address: 6648d260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648d260(void *this,uint param_1,undefined4 param_2)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  
  iVar1 = FUN_664bbdc0(*(void **)((int)this + 8),param_1 & 0xffff,&param_1);
  if (iVar1 == 0) {
    return 0x80004005;
  }
  this_00 = operator_new(0x24);
  if (this_00 != (void *)0x0) {
    puVar2 = FUN_664945a0(this_00,15000,90000,2000,param_2);
    *(undefined4 **)(param_1 + 0x1a) = puVar2;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 0;
}


