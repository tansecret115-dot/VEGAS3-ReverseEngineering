/* Module: wmfplug2.dll
   Function: FUN_0040a190
   Address: 0040a190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040a190(void *this,int *param_1)

{
  if (*(int *)((int)this + 0x4c) == 0) {
    return 0x80004005;
  }
  *param_1 = *(int *)((int)this + 0x4c);
  (**(code **)(**(int **)((int)this + 0x4c) + 4))(*(int **)((int)this + 0x4c));
  return 0;
}


