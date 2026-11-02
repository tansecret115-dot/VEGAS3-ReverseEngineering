/* Module: pngu3266.dll
   Function: RemoveObserver
   Address: 60607f6f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNRouter::RemoveObserver(class CPNRouter *) */

void __thiscall CPNRouter::RemoveObserver(CPNRouter *this,CPNRouter *param_1)

{
  CPNRouter *pCVar1;
  CPNRouter *pCVar2;
  undefined4 *puVar3;
  
                    /* 0x17f6f  1764  ?RemoveObserver@CPNRouter@@QAEXPAV1@@Z */
  pCVar1 = param_1;
  if ((*(int *)(this + 4) != 0) && (param_1 != (CPNRouter *)0x0)) {
    param_1 = *(CPNRouter **)(*(int *)(this + 4) + 4);
    while (pCVar2 = param_1, param_1 != (CPNRouter *)0x0) {
      puVar3 = (undefined4 *)FUN_6061a2c0((int *)&param_1);
      if (*(CPNRouter **)*puVar3 == pCVar1) {
        operator_delete((int *)*puVar3);
        (**(code **)(**(int **)(this + 4) + 0xc))(pCVar2);
      }
    }
    puVar3 = *(undefined4 **)(this + 4);
    if (puVar3[4] == 0) {
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)(this + 4) = 0;
    }
  }
  return;
}


