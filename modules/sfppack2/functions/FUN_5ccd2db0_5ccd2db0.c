/* Module: sfppack2.dll
   Function: FUN_5ccd2db0
   Address: 5ccd2db0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5ccd2db0(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_retaddr;
  
  piVar1 = param_2;
  iVar2 = *(int *)((int)this + 0x8c);
  if (*(int *)(iVar2 + 0x18) != 0) {
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x98) + 0xc))(iVar2 + 0x98,&param_2);
    if (-1 < iVar2) {
      (**(code **)(*param_2 + 0x10))(param_2,piVar1);
      (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
    }
  }
  FUN_5ccd5780(param_1,(int)piVar1);
  return;
}


