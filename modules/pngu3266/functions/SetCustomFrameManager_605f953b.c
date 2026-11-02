/* Module: pngu3266.dll
   Function: SetCustomFrameManager
   Address: 605f953b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::SetCustomFrameManager(class CPNCustomFrame *) */

void __thiscall CPNWindow::SetCustomFrameManager(CPNWindow *this,CPNCustomFrame *param_1)

{
                    /* 0x953b  1885  ?SetCustomFrameManager@CPNWindow@@QAEXPAVCPNCustomFrame@@@Z */
  if (*(undefined4 **)(this + 0x28) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x28))(1);
  }
  this[10] = (CPNWindow)((byte)this[10] | 1);
  *(CPNCustomFrame **)(this + 0x28) = param_1;
  return;
}


