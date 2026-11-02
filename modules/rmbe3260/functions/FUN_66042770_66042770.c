/* Module: rmbe3260.dll
   Function: FUN_66042770
   Address: 66042770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_66042770(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 0xc) == (code *)0x0) {
    return 0x80004005;
  }
  uVar1 = (**(code **)((int)this + 0xc))(param_1,param_2,param_3);
  return uVar1;
}


