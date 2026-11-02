/* Module: pngu3266.dll
   Function: SetLabel
   Address: 60615c5a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNTreeControl::SetLabel(char *,unsigned long) */

ulong __thiscall XPNTreeControl::SetLabel(XPNTreeControl *this,char *param_1,ulong param_2)

{
  size_t sVar1;
  void *pvVar2;
  
                    /* 0x25c5a  1940  ?SetLabel@XPNTreeControl@@UAEKPADK@Z */
  if ((*(void **)(this + 0xc0) != (void *)0x0) &&
     (FUN_60619b60(*(void **)(this + 0xc0),param_2,&param_2), param_2 != 0)) {
    if (*(void **)(param_2 + 4) != (void *)0x0) {
      operator_delete(*(void **)(param_2 + 4));
    }
    sVar1 = strlen(param_1);
    pvVar2 = operator_new(sVar1 + 1);
    *(void **)(param_2 + 4) = pvVar2;
    strcpy(*(char **)(param_2 + 4),param_1);
    return 1;
  }
  return 0;
}


