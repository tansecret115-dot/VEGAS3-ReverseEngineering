/* Module: pngu3266.dll
   Function: AddSensitiveRect
   Address: 605f9f3e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall CPNWindow::AddSensitiveRect(class CPNxRect const &) */

long __thiscall CPNWindow::AddSensitiveRect(CPNWindow *this,CPNxRect *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  SensitiveInfo *pSVar3;
  long lVar4;
  
                    /* 0x9f3e  772  ?AddSensitiveRect@CPNWindow@@QAEJABVCPNxRect@@@Z */
  lVar4 = -1;
  if (*(int *)(this + 0x70) == 0) {
    puVar1 = operator_new(0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_6061a0c0(puVar1);
    }
    *(undefined4 *)(this + 0x70) = uVar2;
  }
  pSVar3 = FindSensitiveRect(this,param_1);
  if (pSVar3 == (SensitiveInfo *)0x0) {
    puVar1 = operator_new(0x14);
    *puVar1 = *(undefined4 *)param_1;
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    lVar4 = *(long *)(this + 0x78);
    puVar1[4] = lVar4;
    *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
    FUN_6061a1f0(*(void **)(this + 0x70),puVar1);
  }
  return lVar4;
}


