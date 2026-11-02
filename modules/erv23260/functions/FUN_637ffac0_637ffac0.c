/* Module: erv23260.dll
   Function: FUN_637ffac0
   Address: 637ffac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637ffac0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x34) = param_2;
  iVar1 = FUN_637ffb00((int)this);
  if (iVar1 != 0) {
    FUN_637ffbc0((int)this);
    return 1;
  }
  return 0;
}


