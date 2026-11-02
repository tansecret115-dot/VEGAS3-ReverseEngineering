/* Module: rmbe3260.dll
   Function: FUN_6602c9f0
   Address: 6602c9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6602c9f0(void *this,int param_1)

{
  ulong uVar1;
  CPNPropertyPage *pCVar2;
  
  if ((*(int *)(param_1 + 8) == 2) && (*(int *)(param_1 + 0xc) == 0xb2)) {
    FUN_6602d540((int)this + -4);
    return;
  }
  if ((*(int *)(param_1 + 8) == 0x10) && (*(int *)(param_1 + 0x24) == 0x590)) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x18) + 0x160))();
    pCVar2 = XPNPropertySheet::GetPage(*(XPNPropertySheet **)((int)this + 0x18),uVar1);
    if (pCVar2 != (CPNPropertyPage *)0x0) {
      (**(code **)(*(int *)pCVar2 + 0x17c))();
    }
  }
  return;
}


