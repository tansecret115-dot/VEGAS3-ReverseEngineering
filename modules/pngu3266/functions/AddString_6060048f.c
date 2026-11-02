/* Module: pngu3266.dll
   Function: AddString
   Address: 6060048f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNListBox::AddString(unsigned long) */

ulong __thiscall CPNListBox::AddString(CPNListBox *this,ulong param_1)

{
  ulong uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_108;
  undefined4 local_107;
  
                    /* 0x1048f  776  ?AddString@CPNListBox@@UAEKK@Z */
  local_108 = DAT_60649ac0;
  puVar3 = &local_107;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  FUN_6061db60(param_1,&local_108,0x104);
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x180,0,(long)&local_108);
  return uVar1;
}


