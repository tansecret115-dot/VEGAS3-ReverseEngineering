/* Module: encn3260.dll
   Function: FUN_664d1300
   Address: 664d1300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d1300(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)this;
  if (((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) &&
     (*(int *)((int)this + 8) == 0x65)) {
    uVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,*(int *)((int)this + 4),param_1);
    return uVar2;
  }
  return 0x80004005;
}


