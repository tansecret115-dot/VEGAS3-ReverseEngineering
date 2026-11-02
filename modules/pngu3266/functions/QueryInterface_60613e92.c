/* Module: pngu3266.dll
   Function: QueryInterface
   Address: 60613e92
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __stdcall XPNWizardManager::QueryInterface(struct _GUID const &,void * *) */

long XPNWizardManager::QueryInterface(_GUID *param_1,void **param_2)

{
  uint *in_stack_0000000c;
  
                    /* 0x23e92  1729  ?QueryInterface@XPNWizardManager@@UAGJABU_GUID@@PAPAX@Z */
  if ((((*param_2 == DAT_6062bd38) && (param_2[1] == DAT_6062bd3c)) && (param_2[2] == DAT_6062bd40))
     && (param_2[3] == DAT_6062bd44)) {
    (**(code **)(param_1->Data1 + 4))(param_1);
    *in_stack_0000000c = (uint)(param_1 + -0xd);
  }
  else {
    if (((*param_2 != DAT_6062bd88) || (param_2[1] != DAT_6062bd8c)) ||
       ((param_2[2] != DAT_6062bd90 || (param_2[3] != DAT_6062bd94)))) {
      *in_stack_0000000c = 0;
      return -0x7fffbffe;
    }
    (**(code **)(param_1->Data1 + 4))(param_1);
    *in_stack_0000000c = -(uint)(param_1 != (_GUID *)0xd0) & (uint)param_1;
  }
  return 0;
}


