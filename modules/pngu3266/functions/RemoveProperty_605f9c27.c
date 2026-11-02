/* Module: pngu3266.dll
   Function: RemoveProperty
   Address: 605f9c27
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void * __thiscall CPNWindow::RemoveProperty(char const *) */

void * __thiscall CPNWindow::RemoveProperty(CPNWindow *this,char *param_1)

{
  HANDLE pvVar1;
  
                    /* 0x9c27  1769  ?RemoveProperty@CPNWindow@@QAEPAXPBD@Z */
  pvVar1 = RemovePropA(*(HWND *)(this + 0xc),param_1);
  return pvVar1;
}


