/* Module: pngu3266.dll
   Function: DefWindowProcA
   Address: 605f78ec
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall CPNWindow::DefWindowProcA(unsigned long,unsigned int,long) */

long __thiscall CPNWindow::DefWindowProcA(CPNWindow *this,ulong param_1,uint param_2,long param_3)

{
  int iVar1;
  _func_long_HWND___ptr_uint_uint_long **pp_Var2;
  long lVar3;
  
                    /* 0x78ec  940  ?DefWindowProcA@CPNWindow@@QAEJKIJ@Z */
  if ((*(int *)(this + 0x80) != 0) && (iVar1 = OnMoveSize(this,param_1,param_2,param_3), iVar1 != 0)
     ) {
    if (param_1 == 0xa1) {
      (**(code **)(*(int *)this + 0xa8))(0,2);
    }
    return 0;
  }
  pp_Var2 = GetSuperWndProcAddress(this);
  if (*pp_Var2 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    lVar3 = ::DefWindowProcA(*(HWND *)(this + 0xc),param_1,param_2,param_3);
  }
  else {
    lVar3 = CallWindowProcA((WNDPROC)*pp_Var2,*(HWND *)(this + 0xc),param_1,param_2,param_3);
  }
  return lVar3;
}


