/* Module: pngu3266.dll
   Function: GetWindowlessRect
   Address: 605f6d30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::GetWindowlessRect(class CPNxRect &) */

void __thiscall CPNWindow::GetWindowlessRect(CPNWindow *this,CPNxRect *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x6d30  1427  ?GetWindowlessRect@CPNWindow@@QAEXAAVCPNxRect@@@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    (**(code **)(*(int *)this + 0x3c))(param_1);
    iVar1 = *(int *)(this + 100);
    iVar2 = *(int *)(this + 0x60);
    *(int *)param_1 = *(int *)param_1 + iVar2;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar1;
  }
  return;
}


