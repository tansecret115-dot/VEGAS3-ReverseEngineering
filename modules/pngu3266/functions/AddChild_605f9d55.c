/* Module: pngu3266.dll
   Function: AddChild
   Address: 605f9d55
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall CPNWindow::AddChild(class CPNWindow *) */

void __thiscall CPNWindow::AddChild(CPNWindow *this,CPNWindow *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_ESI;
  
                    /* 0x9d55  756  ?AddChild@CPNWindow@@IAEXPAV1@@Z */
  if (*(int *)(this + 0x44) == 0) {
    puVar1 = operator_new(0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_6061a0c0(puVar1);
    }
    *(undefined4 *)(this + 0x44) = uVar2;
  }
  iVar3 = (**(code **)(**(int **)(this + 0x44) + 0x18))(param_1,0);
  if (iVar3 == 0) {
    FUN_6061a230(*(void **)(this + 0x44),unaff_ESI);
  }
  return;
}


