/* Module: rmbe3260.dll
   Function: FUN_66017da0
   Address: 66017da0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66017da0(int param_1,void *param_2)

{
  void *this;
  int iVar1;
  
  this = (void *)(param_1 + -0x14);
  iVar1 = FUN_66017d60(this,(int)param_2);
  if (iVar1 < 0) {
    return 0x80070057;
  }
  if (*(void **)((int)param_2 + 0xc) != (void *)0x0) {
    FUN_66017ce0(this,*(void **)((int)param_2 + 0xc));
  }
  if (*(void **)((int)param_2 + 0x18) != (void *)0x0) {
    FUN_66017c60(this,*(void **)((int)param_2 + 0x18));
  }
  if (*(void **)((int)param_2 + 0x1e) != (void *)0x0) {
    FUN_66017c60(this,*(void **)((int)param_2 + 0x1e));
  }
  FUN_6605d000((void *)(param_1 + 0x38),iVar1,1);
  operator_delete(param_2);
  return 0;
}


