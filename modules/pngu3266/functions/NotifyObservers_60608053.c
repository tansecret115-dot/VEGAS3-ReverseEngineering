/* Module: pngu3266.dll
   Function: NotifyObservers
   Address: 60608053
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNRouter::NotifyObservers(class CPNEvent &) */

void __thiscall CPNRouter::NotifyObservers(CPNRouter *this,CPNEvent *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  CPNEvent *pCVar4;
  int *piVar5;
  
                    /* 0x18053  1578  ?NotifyObservers@CPNRouter@@UAEXAAVCPNEvent@@@Z */
  pCVar4 = param_1;
  if (*(int *)(this + 4) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    uVar2 = *(uint *)(param_1 + 0xc);
    param_1 = *(CPNEvent **)(*(int *)(this + 4) + 4);
    while (param_1 != (CPNEvent *)0x0) {
      piVar5 = (int *)FUN_6061a2c0((int *)&param_1);
      puVar3 = (undefined4 *)*piVar5;
      if (((puVar3[1] & uVar1) != 0) && ((uVar1 != 0x80000000 || ((puVar3[2] & uVar2) != 0)))) {
        (**(code **)(*(int *)*puVar3 + 8))(pCVar4);
      }
    }
  }
  return;
}


