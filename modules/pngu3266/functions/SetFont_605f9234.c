/* Module: pngu3266.dll
   Function: SetFont
   Address: 605f9234
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::SetFont(class CPNFont *,int) */

void __thiscall CPNWindow::SetFont(CPNWindow *this,CPNFont *param_1,int param_2)

{
  undefined4 *puVar1;
  CPNFont *this_00;
  int *piVar2;
  
                    /* 0x9234  1911  ?SetFont@CPNWindow@@UAEXPAVCPNFont@@H@Z */
  if (param_1 != (CPNFont *)0x0) {
    puVar1 = *(undefined4 **)(this + 0x3c);
    if ((puVar1 != (undefined4 *)0x0) && (((byte)this[0x4c] & 1) != 0)) {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(this + 0x3c) = 0;
    }
    if (param_2 == 0) {
      *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) & 0xfffffffe;
      *(CPNFont **)(this + 0x3c) = param_1;
    }
    else {
      this_00 = operator_new(0x34);
      if (this_00 == (CPNFont *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)CPNFont::CPNFont(this_00);
      }
      *(int **)(this + 0x3c) = piVar2;
      (**(code **)(*piVar2 + 0x28))(param_1);
      *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) | 1;
    }
    if (*(HWND *)(this + 0xc) != (HWND)0x0) {
      ::SendMessageA(*(HWND *)(this + 0xc),0x30,*(WPARAM *)(param_1 + 0x2c),0);
    }
  }
  return;
}


