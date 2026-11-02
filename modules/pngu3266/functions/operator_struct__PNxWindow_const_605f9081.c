/* Module: pngu3266.dll
   Function: operator_struct__PNxWindow_const
   Address: 605f9081
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual __thiscall CPNWindow::operator struct _PNxWindow const (void)const  */

void __thiscall CPNWindow::operator_struct__PNxWindow_const(CPNWindow *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_stack_00000004;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x9081  594  ??BCPNWindow@@UBE?BU_PNxWindow@@XZ */
  DAT_60649a88 = GetHWND(this);
  (**(code **)(*(int *)this + 0x38))(&local_14);
  (**(code **)(*(int *)this + 0x50))(&local_c);
  DAT_60649a8c = local_c;
  _DAT_60649a90 = local_8;
  _DAT_60649a94 = local_14;
  _DAT_60649a98 = local_10;
  puVar2 = &DAT_60649a88;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_stack_00000004 = *puVar2;
    puVar2 = puVar2 + 1;
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  return;
}


