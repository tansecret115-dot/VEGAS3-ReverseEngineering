/* Module: pngu3266.dll
   Function: NotifyObservers
   Address: 60605454
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNTreeControl::NotifyObservers(class CPNEvent &) */

void __thiscall CPNTreeControl::NotifyObservers(CPNTreeControl *this,CPNEvent *param_1)

{
  CPNEvent *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_30 [10];
  CPNTreeControl *local_8;
  
                    /* 0x15454  1579  ?NotifyObservers@CPNTreeControl@@UAEXAAVCPNEvent@@@Z */
  pCVar1 = param_1;
  local_8 = this;
  if ((*(int *)(param_1 + 8) == -0x80000000) && (*(int *)(param_1 + 0xc) == 8)) {
    puVar3 = (uint *)(*(int *)(param_1 + 0x20) + 0x38);
    puVar4 = local_30;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    param_1 = (CPNEvent *)0x0;
    FUN_60619b60(*(void **)(this + 200),local_30[1],&param_1);
    if (param_1 != (CPNEvent *)0x0) {
      *(undefined4 *)(pCVar1 + 0x20) = *(undefined4 *)param_1;
    }
  }
  XPNTreeControl::NotifyObservers((XPNTreeControl *)local_8,pCVar1);
  return;
}


