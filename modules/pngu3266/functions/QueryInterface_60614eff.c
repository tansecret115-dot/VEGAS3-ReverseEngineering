/* Module: pngu3266.dll
   Function: QueryInterface
   Address: 60614eff
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __stdcall XPNWizardPage::QueryInterface(struct _GUID const &,void * *) */

long XPNWizardPage::QueryInterface(_GUID *param_1,void **param_2)

{
  void *pvVar1;
  _GUID *p_Var2;
  uint *in_stack_0000000c;
  
                    /* 0x24eff  1730  ?QueryInterface@XPNWizardPage@@UAGJABU_GUID@@PAPAX@Z */
  pvVar1 = *param_2;
  if ((((pvVar1 == DAT_6062bd38) && (param_2[1] == DAT_6062bd3c)) && (param_2[2] == DAT_6062bd40))
     && (param_2[3] == DAT_6062bd44)) {
    (**(code **)(param_1->Data1 + 4))(param_1);
    *in_stack_0000000c = (uint)(param_1 + -0xd);
  }
  else {
    if (((pvVar1 == DAT_6062bd78) && (param_2[1] == DAT_6062bd7c)) &&
       ((param_2[2] == DAT_6062bd80 && (param_2[3] == DAT_6062bd84)))) {
      (**(code **)(param_1->Data1 + 4))(param_1);
      p_Var2 = param_1;
    }
    else {
      if (((pvVar1 != DAT_6062cca8) || (param_2[1] != DAT_6062ccac)) ||
         ((param_2[2] != DAT_6062ccb0 || (param_2[3] != DAT_6062ccb4)))) {
        *in_stack_0000000c = 0;
        return -0x7fffbffe;
      }
      (**(code **)(param_1->Data1 + 4))(param_1);
      p_Var2 = (_GUID *)&param_1->Data2;
    }
    *in_stack_0000000c = -(uint)(param_1 != (_GUID *)0xd0) & (uint)p_Var2;
  }
  return 0;
}


