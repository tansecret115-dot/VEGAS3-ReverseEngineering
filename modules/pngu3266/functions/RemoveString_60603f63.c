/* Module: pngu3266.dll
   Function: RemoveString
   Address: 60603f63
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNCheckedListbox::RemoveString(unsigned long) */

ulong __thiscall CPNCheckedListbox::RemoveString(CPNCheckedListbox *this,ulong param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
                    /* 0x13f63  1772  ?RemoveString@CPNCheckedListbox@@UAEKK@Z */
  puVar3 = FUN_6061a410(*(void **)(this + 0xc0),param_1);
  puVar3 = (undefined4 *)FUN_6061a2e0((int)puVar3);
  pvVar1 = (void *)*puVar3;
  if (pvVar1 != (void *)0x0) {
    iVar2 = **(int **)(this + 0xc0);
    puVar3 = FUN_6061a410(*(int **)(this + 0xc0),param_1);
    (**(code **)(iVar2 + 0xc))(puVar3);
    operator_delete(pvVar1);
  }
  uVar4 = CPNListBox::RemoveString((CPNListBox *)this,param_1);
  return uVar4;
}


