/* Module: pngu3266.dll
   Function: MakeNewObserverData
   Address: 606080b3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: struct _ObserverData * __thiscall CPNRouter::MakeNewObserverData(class CPNRouter
   *,unsigned long,unsigned long) */

_ObserverData * __thiscall
CPNRouter::MakeNewObserverData(CPNRouter *this,CPNRouter *param_1,ulong param_2,ulong param_3)

{
  _ObserverData *p_Var1;
  
                    /* 0x180b3  1557  ?MakeNewObserverData@CPNRouter@@IAEPAU_ObserverData@@PAV1@KK@Z
                        */
  p_Var1 = operator_new(0xc);
  *(CPNRouter **)p_Var1 = param_1;
  *(ulong *)(p_Var1 + 4) = param_2;
  *(ulong *)(p_Var1 + 8) = param_3;
  return p_Var1;
}


