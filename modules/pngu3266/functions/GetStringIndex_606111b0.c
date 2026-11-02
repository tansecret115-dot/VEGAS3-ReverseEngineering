/* Module: pngu3266.dll
   Function: GetStringIndex
   Address: 606111b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall XPNPopupList::GetStringIndex(char const *) */

long __thiscall XPNPopupList::GetStringIndex(XPNPopupList *this,char *param_1)

{
  int iVar1;
  int iVar2;
  char local_104 [256];
  
                    /* 0x211b0  1367  ?GetStringIndex@XPNPopupList@@QAEJPBD@Z */
  iVar1 = (**(code **)(*(int *)this + 0x130))();
  do {
    if (iVar1 == 0) {
      return -1;
    }
    iVar1 = iVar1 + -1;
    (**(code **)(*(int *)this + 0x138))(local_104,0x100,iVar1);
    iVar2 = _stricmp(local_104,param_1);
  } while (iVar2 != 0);
  return iVar1;
}


