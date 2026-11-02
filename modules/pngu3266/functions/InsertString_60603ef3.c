/* Module: pngu3266.dll
   Function: InsertString
   Address: 60603ef3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNCheckedListbox::InsertString(char const *,unsigned
   long) */

ulong __thiscall
CPNCheckedListbox::InsertString(CPNCheckedListbox *this,char *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  char *_Dest;
  undefined4 *puVar3;
  
                    /* 0x13ef3  1485  ?InsertString@CPNCheckedListbox@@UAEKPBDK@Z */
  if (param_2 == 0xffffffff) {
    uVar2 = (**(code **)(*(int *)this + 0x148))(param_1);
  }
  else {
    _Dest = operator_new(0x45);
    strncpy(_Dest,param_1,0x40);
    _Dest[0x41] = '\0';
    _Dest[0x42] = '\0';
    _Dest[0x43] = '\0';
    _Dest[0x44] = '\0';
    iVar1 = **(int **)(this + 0xc0);
    puVar3 = FUN_6061a410(*(int **)(this + 0xc0),param_2);
    (**(code **)(iVar1 + 0x10))(puVar3,_Dest);
    uVar2 = CPNListBox::InsertString((CPNListBox *)this,param_1,param_2);
  }
  return uVar2;
}


