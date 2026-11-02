/* Module: pngu3266.dll
   Function: IsItemChecked
   Address: 60603dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNCheckedListbox::IsItemChecked(unsigned int) */

int __thiscall CPNCheckedListbox::IsItemChecked(CPNCheckedListbox *this,uint param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
                    /* 0x13dd0  1504  ?IsItemChecked@CPNCheckedListbox@@UAEHI@Z */
  puVar1 = FUN_6061a410(*(void **)(this + 0xc0),param_1);
  piVar2 = (int *)FUN_6061a2e0((int)puVar1);
  if (*piVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*piVar2 + 0x41);
  }
  return iVar3;
}


