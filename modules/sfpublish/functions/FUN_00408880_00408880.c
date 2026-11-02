/* Module: sfpublish.dll
   Function: FUN_00408880
   Address: 00408880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00408880(void *this,int param_1)

{
  LONG LVar1;
  undefined4 uVar2;
  
  LVar1 = GetWindowLongA(*(HWND *)((int)this + 4),-4);
  uVar2 = 0;
  if ((param_1 != 0) || ((int)this + 8 == LVar1)) {
    LVar1 = SetWindowLongA(*(HWND *)((int)this + 4),-4,*(LONG *)((int)this + 0x1c));
    if (LVar1 == 0) {
      return 0;
    }
    uVar2 = *(undefined4 *)((int)this + 4);
    *(code **)((int)this + 0x1c) = DefWindowProcA_exref;
    *(undefined4 *)((int)this + 4) = 0;
  }
  return uVar2;
}


