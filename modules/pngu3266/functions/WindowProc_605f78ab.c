/* Module: pngu3266.dll
   Function: WindowProc
   Address: 605f78ab
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall CPNWindow::WindowProc(unsigned long,unsigned int,long) */

long __thiscall CPNWindow::WindowProc(CPNWindow *this,ulong param_1,uint param_2,long param_3)

{
  int iVar1;
  long local_8;
  
                    /* 0x78ab  2125  ?WindowProc@CPNWindow@@QAEJKIJ@Z */
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x114))(param_1,param_2,param_3,&local_8);
  if (iVar1 == 0) {
    local_8 = DefWindowProcA(this,param_1,param_2,param_3);
  }
  return local_8;
}


