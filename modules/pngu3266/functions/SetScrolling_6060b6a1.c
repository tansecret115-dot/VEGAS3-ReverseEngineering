/* Module: pngu3266.dll
   Function: SetScrolling
   Address: 6060b6a1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall XPNTabControl::SetScrolling(class CPNDC *,class CPNxRect &) */

void __thiscall XPNTabControl::SetScrolling(XPNTabControl *this,CPNDC *param_1,CPNxRect *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x1b6a1  1997  ?SetScrolling@XPNTabControl@@AAEXPAVCPNDC@@AAVCPNxRect@@@Z */
  iVar3 = 0;
  if ((((*(int *)(this + 0xd0) != 0) && (*(int *)(*(int *)(this + 0xd0) + 0x10) != 0)) &&
      (*(int *)(this + 200) != 0)) &&
     ((*(int *)(param_2 + 8) - *(int *)param_2) + -0x2c <= *(int *)(this + 0xd8))) {
    local_10 = *(int *)(param_2 + 8) + -0x20;
    local_c = *(int *)(param_2 + 0xc) + -0x12;
    (**(code **)(**(int **)(this + 0xd4) + 0x44))(&local_10);
    iVar1 = *(int *)(param_2 + 8);
    param_2 = (CPNxRect *)0x0;
    local_8 = *(int *)(*(int *)(this + 0xd0) + 4);
    do {
      if (local_8 == 0) break;
      piVar2 = (int *)FUN_6061a2c0(&local_8);
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 2 + (*(int *)(*piVar2 + 0x10) - *(int *)(*piVar2 + 8));
    } while (iVar1 + -0x2c <= *(int *)(this + 0xd8) - iVar3);
    iVar3 = *(int *)(*(int *)(this + 0xd4) + 0xfb);
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(CPNxRect **)(iVar3 + 0x10) = param_2;
  }
  return;
}


