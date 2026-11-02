/* Module: pngu3266.dll
   Function: RemoveObservers
   Address: 60607f29
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNRouter::RemoveObservers(void) */

void __thiscall CPNRouter::RemoveObservers(CPNRouter *this)

{
  undefined4 *puVar1;
  int local_8;
  
                    /* 0x17f29  1765  ?RemoveObservers@CPNRouter@@QAEXXZ */
  if (*(int *)(this + 4) != 0) {
    local_8 = *(int *)(*(int *)(this + 4) + 4);
    while (local_8 != 0) {
      puVar1 = (undefined4 *)FUN_6061a2c0(&local_8);
      operator_delete((void *)*puVar1);
    }
    if (*(undefined4 **)(this + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 4))(1);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}


