/* Module: pngu3266.dll
   Function: Add
   Address: 605fe746
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNPtrArray::Add(void *) */

int __thiscall CPNPtrArray::Add(CPNPtrArray *this,void *param_1)

{
  int iVar1;
  
                    /* 0xe746  755  ?Add@CPNPtrArray@@QAEHPAX@Z */
  iVar1 = *(int *)(this + 4);
  FUN_6061a640(this,iVar1,param_1);
  return iVar1;
}


