/* Module: pngu3266.dll
   Function: operator=
   Address: 605f1013
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: struct _PNxWindow & __thiscall _PNxWindow::operator=(struct _PNxWindow const &) */

_PNxWindow * __thiscall _PNxWindow::operator=(_PNxWindow *this,_PNxWindow *param_1)

{
  int iVar1;
  _PNxWindow *p_Var2;
  
                    /* 0x1013  566  ??4_PNxWindow@@QAEAAU0@ABU0@@Z */
  p_Var2 = this;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)p_Var2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    p_Var2 = p_Var2 + 4;
  }
  return this;
}


