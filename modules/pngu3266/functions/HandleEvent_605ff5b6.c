/* Module: pngu3266.dll
   Function: HandleEvent
   Address: 605ff5b6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNPropertySheet::HandleEvent(class CPNEvent &) */

void __thiscall CPNPropertySheet::HandleEvent(CPNPropertySheet *this,CPNEvent *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  char local_2e0;
  undefined4 local_2df;
  char local_1dc;
  undefined4 local_1db;
  undefined **local_d8 [52];
  undefined4 local_8;
  
                    /* 0xf5b6  1436  ?HandleEvent@CPNPropertySheet@@UAEXAAVCPNEvent@@@Z */
  uVar4 = *(uint *)(param_1 + 0x18);
  if (*(int *)(param_1 + 8) == -0x80000000) {
    if ((*(int *)(param_1 + 0xc) == 1) && (uVar4 != 0)) {
      if (uVar4 < 3) {
        if (*(int *)(this + 200) == 0) {
          (**(code **)(*(int *)this + 300))(uVar4);
          *(undefined4 *)(param_1 + 0x28) = 1;
        }
      }
      else if (uVar4 == 100) {
        CPNDialog::CPNDialog((CPNDialog *)local_d8);
        local_2e0 = DAT_60649ac0;
        puVar3 = &local_2df;
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        *(undefined2 *)puVar3 = 0;
        *(undefined1 *)((int)puVar3 + 2) = 0;
        local_1dc = DAT_60649ac0;
        local_8 = 0;
        puVar3 = &local_1db;
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        *(undefined2 *)puVar3 = 0;
        *(undefined1 *)((int)puVar3 + 2) = 0;
        local_d8[0] = &CPNMessageBox::_vftable_;
        (**(code **)(*(int *)this + 0x24))(&local_1dc,0x104);
        FUN_6061db60(0x3e90009,&local_2e0,0x104);
        uVar1 = CPNMessageBox::DoModal
                          ((CPNMessageBox *)local_d8,(CPNWindow *)this,&local_2e0,&local_1dc,0x24);
        if ((uVar1 == 6) && (uVar4 = 0, *(int *)(this + 0xd4) != 0)) {
          do {
            (**(code **)(**(int **)(*(int *)(this + 0xd0) + uVar4 * 4) + 0x160))();
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(this + 0xd4));
        }
        *(undefined4 *)(param_1 + 0x28) = 1;
        local_d8[0] = &XPNMessageBox::_vftable_;
        CPNDialog::~CPNDialog((CPNDialog *)local_d8);
      }
    }
  }
  return;
}


