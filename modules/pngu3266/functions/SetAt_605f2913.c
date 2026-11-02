/* Module: pngu3266.dll
   Function: SetAt
   Address: 605f2913
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNMapLongToObj::SetAt(long,void *) */

void __thiscall CPNMapLongToObj::SetAt(CPNMapLongToObj *this,long param_1,void *param_2)

{
  undefined4 *puVar1;
  
                    /* 0x2913  1820  ?SetAt@CPNMapLongToObj@@QAEXJPAX@Z */
  puVar1 = FUN_60619ba0(this,param_1);
  *puVar1 = param_2;
  return;
}


