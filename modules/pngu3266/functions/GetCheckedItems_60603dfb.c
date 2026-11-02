/* Module: pngu3266.dll
   Function: GetCheckedItems
   Address: 60603dfb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNCheckedListbox::GetCheckedItems(unsigned long
   *,unsigned int) */

ulong __thiscall
CPNCheckedListbox::GetCheckedItems(CPNCheckedListbox *this,ulong *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  int local_c;
  int local_8;
  
                    /* 0x13dfb  1131  ?GetCheckedItems@CPNCheckedListbox@@UAEKPAKI@Z */
  local_8 = *(int *)(this + 0xc0);
  uVar3 = 0;
  local_c = *(int *)(local_8 + 4);
  uVar4 = 0;
  if (local_c != 0) {
    puVar5 = param_1;
    if (local_c != 0) goto LAB_60603e25;
    iVar1 = 0;
    while( true ) {
      if (*(int *)(iVar1 + 0x41) != 0) {
        if (param_1 != (ulong *)0x0) {
          *puVar5 = uVar4;
        }
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_6061a2c0(&local_c);
      uVar4 = uVar4 + 1;
      if (local_c == 0) break;
LAB_60603e25:
      piVar2 = (int *)FUN_6061a2e0(local_c);
      iVar1 = *piVar2;
    }
  }
  return uVar3;
}


