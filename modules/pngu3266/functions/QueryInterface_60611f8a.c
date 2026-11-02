/* Module: pngu3266.dll
   Function: QueryInterface
   Address: 60611f8a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __stdcall XPNTimer::QueryInterface(struct _GUID const &,void * *) */

long XPNTimer::QueryInterface(_GUID *param_1,void **param_2)

{
  long lVar1;
  undefined4 *in_stack_0000000c;
  
                    /* 0x21f8a  1728  ?QueryInterface@XPNTimer@@UAGJABU_GUID@@PAPAX@Z */
  if (((((*param_2 == DAT_6062bd38) && (param_2[1] == DAT_6062bd3c)) && (param_2[2] == DAT_6062bd40)
       ) && (param_2[3] == DAT_6062bd44)) ||
     (((*param_2 == DAT_6062bec8 && (param_2[1] == DAT_6062becc)) &&
      ((param_2[2] == DAT_6062bed0 && (param_2[3] == DAT_6062bed4)))))) {
    (**(code **)(param_1->Data1 + 4))(param_1);
    *in_stack_0000000c = param_1;
    lVar1 = 0;
  }
  else {
    *in_stack_0000000c = 0;
    lVar1 = -0x7fffbffe;
  }
  return lVar1;
}


