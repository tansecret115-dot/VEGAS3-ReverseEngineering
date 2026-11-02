/* Module: pngu3266.dll
   Function: LoadCursorA
   Address: 605f2d67
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNCursor::LoadCursorA(unsigned long) */

int __thiscall CPNCursor::LoadCursorA(CPNCursor *this,ulong param_1)

{
  int iVar1;
  
                    /* 0x2d67  1533  ?LoadCursorA@CPNCursor@@UAEHK@Z */
  iVar1 = FUN_6061dae0(param_1);
  *(int *)(this + 8) = iVar1;
  return (uint)(iVar1 != 0);
}


