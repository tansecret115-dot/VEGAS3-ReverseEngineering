/* Module: pngu3266.dll
   Function: Create
   Address: 606013cc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNPopupList::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,unsigned long) */

int __thiscall
CPNPopupList::Create
          (CPNPopupList *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
          long param_5,long param_6,ulong param_7,ulong param_8)

{
  HWND pHVar1;
  ulong uVar2;
  int iVar3;
  HWND hWnd;
  int iVar4;
  CPNEdit *this_00;
  int *piVar5;
  char *pcVar6;
  ulong uVar7;
  UINT uCmd;
  CHAR local_128 [256];
  ulong local_28 [9];
  
                    /* 0x113cc  908  ?Create@CPNPopupList@@UAEHKPAVCPNWindow@@JJJJKK@Z */
  uVar7 = 0;
  pcVar6 = (char *)0x0;
  uVar2 = TranslateStyles(this,param_8);
  iVar3 = CPNControl::Create((CPNControl *)this,param_1,s_COMBOBOX_606491c8,param_2,param_3,param_4,
                             param_5,param_6,param_7,uVar2,pcVar6,uVar7);
  hWnd = *(HWND *)(this + 0xc);
  if ((hWnd != (HWND)0x0) && ((param_8 & 8) != 0)) {
    param_8 = 0;
    uCmd = 5;
    while (hWnd = GetWindow(hWnd,uCmd), pHVar1 = (HWND)param_8, hWnd != (HWND)0x0) {
      GetClassNameA(hWnd,local_128,0xff);
      iVar4 = _stricmp(local_128,&DAT_606491dc);
      pHVar1 = hWnd;
      if (iVar4 == 0) break;
      uCmd = 2;
    }
    param_8 = (ulong)pHVar1;
    if (param_8 != 0) {
      local_28[0] = param_8;
      this_00 = operator_new(0x113);
      if (this_00 == (CPNEdit *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)CPNEdit::CPNEdit(this_00);
      }
      *(int **)(this + 0xc0) = piVar5;
      (**(code **)(*piVar5 + 0xcc))(local_28);
      CPNRouter::AddObserver(*(CPNRouter **)(this + 0xc0),(CPNRouter *)this,4,0x84);
    }
  }
  return iVar3;
}


