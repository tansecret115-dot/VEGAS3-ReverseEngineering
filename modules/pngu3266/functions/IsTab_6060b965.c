/* Module: pngu3266.dll
   Function: IsTab
   Address: 6060b965
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNTabControl::IsTab(char const *)const  */

int __thiscall XPNTabControl::IsTab(XPNTabControl *this,char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *_Str2;
  int local_8;
  
                    /* 0x1b965  1523  ?IsTab@XPNTabControl@@UBEHPBD@Z */
  iVar2 = *(int *)(*(int *)(this + 0xd0) + 0x10);
  if ((((iVar2 == 0) && (*(int *)(this + 0xcc) != 0)) ||
      ((iVar2 != 0 && (*(int *)(this + 0xcc) == 0)))) || (iVar2 == 0)) {
LAB_6060b9cc:
    iVar2 = 0;
  }
  else {
    local_8 = *(int *)(*(int *)(this + 0xd0) + 4);
    do {
      if (local_8 == 0) goto LAB_6060b9cc;
      _Str2 = param_1;
      puVar1 = (undefined4 *)FUN_6061a2c0(&local_8);
      iVar2 = _stricmp((char *)**(undefined4 **)*puVar1,_Str2);
    } while (iVar2 != 0);
    iVar2 = 1;
  }
  return iVar2;
}


