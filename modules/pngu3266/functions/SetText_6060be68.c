/* Module: pngu3266.dll
   Function: SetText
   Address: 6060be68
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNCustomText::SetText(char const *) */

void __thiscall XPNCustomText::SetText(XPNCustomText *this,char *param_1)

{
  int iVar1;
  
                    /* 0x1be68  2020  ?SetText@XPNCustomText@@UAEXPBD@Z */
  iVar1 = strcmp(param_1,*(char **)(this + 0xc4));
  if (iVar1 != 0) {
    FUN_60618ed0(this + 0xc4,param_1);
    FUN_60619270(this + 0xc4,&DAT_606492d8,&DAT_606492d8,1);
    (**(code **)(*(int *)this + 0x78))(0,1);
  }
  return;
}


