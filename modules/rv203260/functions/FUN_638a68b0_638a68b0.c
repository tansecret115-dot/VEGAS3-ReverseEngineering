/* Module: rv203260.dll
   Function: FUN_638a68b0
   Address: 638a68b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638a68b0(void *this,undefined4 param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x24);
  if (param_2 < uVar1) {
    *param_3 = uVar1;
    return 0x80004005;
  }
  *param_3 = uVar1;
  return 0;
}


