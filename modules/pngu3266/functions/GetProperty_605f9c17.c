/* Module: pngu3266.dll
   Function: GetProperty
   Address: 605f9c17
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void * __thiscall CPNWindow::GetProperty(char const *) */

void * __thiscall CPNWindow::GetProperty(CPNWindow *this,char *param_1)

{
  HANDLE pvVar1;
  
                    /* 0x9c17  1305  ?GetProperty@CPNWindow@@QAEPAXPBD@Z */
  pvVar1 = GetPropA(*(HWND *)(this + 0xc),param_1);
  return pvVar1;
}


