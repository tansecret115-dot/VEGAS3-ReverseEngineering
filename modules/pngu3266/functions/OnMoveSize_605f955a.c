/* Module: pngu3266.dll
   Function: OnMoveSize
   Address: 605f955a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNWindow::OnMoveSize(unsigned long,unsigned int,long) */

int __thiscall CPNWindow::OnMoveSize(CPNWindow *this,ulong param_1,uint param_2,long param_3)

{
  int iVar1;
  
                    /* 0x955a  1652  ?OnMoveSize@CPNWindow@@IAEHKIJ@Z */
  iVar1 = 0;
  if (*(int *)(this + 0x80) != 0) {
    if (param_1 == 0xa1) {
      iVar1 = OnMoveSizeNCLButtonDown(this,0xa1,param_2,param_3);
    }
    else if (param_1 == 0x200) {
      iVar1 = OnMoveSizeMouseMove(this,0x200,param_2,param_3);
    }
    else if (param_1 == 0x202) {
      iVar1 = OnMoveSizeLButtonUp(this,0x202,param_2,param_3);
    }
  }
  return iVar1;
}


