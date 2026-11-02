/* Module: pngu3266.dll
   Function: GetLabel
   Address: 60615c18
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNTreeControl::GetLabel(char *,unsigned long,unsigned
   long)const  */

ulong __thiscall
XPNTreeControl::GetLabel(XPNTreeControl *this,char *param_1,ulong param_2,ulong param_3)

{
  int local_8;
  
                    /* 0x25c18  1238  ?GetLabel@XPNTreeControl@@UBEKPADKK@Z */
  if (*(void **)(this + 0xc0) != (void *)0x0) {
    local_8 = 0;
    FUN_60619b60(*(void **)(this + 0xc0),param_3,&local_8);
    if (local_8 != 0) {
      strncpy(param_1,*(char **)(local_8 + 4),param_2);
      return 1;
    }
  }
  return 0;
}


