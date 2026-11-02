/* Module: vfplugs.dll
   Function: FUN_004703a0
   Address: 004703a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004703a0(void *this,undefined4 param_1,LONG param_2,LONG param_3)

{
  FUN_00470340(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x1c) = 1;
  SetFocus(*(HWND *)((int)this + 0x10));
  FUN_004707f0(this);
  *(undefined4 *)((int)this + 0x1c) = 0;
  return 0;
}


