/* Module: sfnetmedia.dll
   Function: FUN_0040c8f0
   Address: 0040c8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0040c8f0(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 8) == 0x1f5) {
    FUN_00412f70(1,*(HWND *)((int)this + 4),0x44c,0xf,(uchar *)0x0);
    return;
  }
  FUN_00412d60(0,*(HWND *)((int)this + 4),0,*(int *)(param_3 + 8),(int *)&DAT_0043f3d0,(uchar *)0x0)
  ;
  return;
}


