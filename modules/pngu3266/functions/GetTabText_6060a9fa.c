/* Module: pngu3266.dll
   Function: GetTabText
   Address: 6060a9fa
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall XPNTabControl::GetTabText(unsigned long,char *,long)const  */

long __thiscall
XPNTabControl::GetTabText(XPNTabControl *this,ulong param_1,char *param_2,long param_3)

{
  _TabInfo *p_Var1;
  long lVar2;
  
                    /* 0x1a9fa  1381  ?GetTabText@XPNTabControl@@UBEJKPADJ@Z */
  p_Var1 = GetTabInfo(this,param_1);
  if (*(int *)((char *)**(undefined4 **)p_Var1 + -8) < param_3) {
    strcpy(param_2,(char *)**(undefined4 **)p_Var1);
    lVar2 = *(long *)(**(int **)p_Var1 + -8);
  }
  else {
    lVar2 = -1;
  }
  return lVar2;
}


