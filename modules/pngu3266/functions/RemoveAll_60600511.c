/* Module: pngu3266.dll
   Function: RemoveAll
   Address: 60600511
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNListBox::RemoveAll(void) */

void __thiscall CPNListBox::RemoveAll(CPNListBox *this)

{
                    /* 0x10511  1750  ?RemoveAll@CPNListBox@@UAEXXZ */
  CPNWindow::SendMessageA((CPNWindow *)this,0x184,0,0);
  return;
}


