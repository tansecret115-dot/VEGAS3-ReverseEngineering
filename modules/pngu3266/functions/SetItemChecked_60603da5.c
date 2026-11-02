/* Module: pngu3266.dll
   Function: SetItemChecked
   Address: 60603da5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNCheckedListbox::SetItemChecked(unsigned int,int) */

void __thiscall CPNCheckedListbox::SetItemChecked(CPNCheckedListbox *this,uint param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
                    /* 0x13da5  1934  ?SetItemChecked@CPNCheckedListbox@@UAEXIH@Z */
  puVar1 = FUN_6061a410(*(void **)(this + 0xc0),param_1);
  piVar2 = (int *)FUN_6061a2e0((int)puVar1);
  if (*piVar2 != 0) {
    *(int *)(*piVar2 + 0x41) = param_2;
  }
  return;
}


