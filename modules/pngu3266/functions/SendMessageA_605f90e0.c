/* Module: pngu3266.dll
   Function: SendMessageA
   Address: 605f90e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall CPNWindow::SendMessageA(unsigned int,unsigned int,long)const  */

long __thiscall CPNWindow::SendMessageA(CPNWindow *this,uint param_1,uint param_2,long param_3)

{
  LRESULT LVar1;
  
                    /* 0x90e0  1811  ?SendMessageA@CPNWindow@@QBEJIIJ@Z */
  LVar1 = ::SendMessageA(*(HWND *)(this + 0xc),param_1,param_2,param_3);
  return LVar1;
}


