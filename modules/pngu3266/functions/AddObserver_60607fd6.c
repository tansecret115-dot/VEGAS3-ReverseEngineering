/* Module: pngu3266.dll
   Function: AddObserver
   Address: 60607fd6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNRouter::AddObserver(class CPNRouter *,unsigned long,unsigned long) */

void __thiscall
CPNRouter::AddObserver(CPNRouter *this,CPNRouter *param_1,ulong param_2,ulong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  _ObserverData *p_Var4;
  CPNRouter *local_8;
  
                    /* 0x17fd6  762  ?AddObserver@CPNRouter@@QAEXPAV1@KK@Z */
  if (*(int *)(this + 4) == 0) {
    local_8 = this;
    puVar1 = operator_new(0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_6061a0c0(puVar1);
    }
    *(undefined4 *)(this + 4) = uVar2;
  }
  local_8 = *(CPNRouter **)(*(int *)(this + 4) + 4);
  do {
    if (local_8 == (CPNRouter *)0x0) {
      p_Var4 = MakeNewObserverData(this,param_1,param_2,param_3);
      FUN_6061a1f0(*(void **)(this + 4),p_Var4);
      return;
    }
    piVar3 = (int *)FUN_6061a2c0((int *)&local_8);
    piVar3 = (int *)*piVar3;
  } while ((((CPNRouter *)*piVar3 != param_1) || (piVar3[1] != param_2)) || (piVar3[2] != param_3));
  return;
}


