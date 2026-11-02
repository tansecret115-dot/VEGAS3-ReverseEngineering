/* Module: rmbe3260.dll
   Function: FUN_66045ba0
   Address: 66045ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66045ba0(void *this,short *param_1)

{
  short *psVar1;
  void *pvVar2;
  
  psVar1 = param_1;
  if ((*(int *)((int)this + 0x52) != 0) && (*(int **)((int)this + 4) != (int *)0x0)) {
    pvVar2 = (void *)(**(code **)(**(int **)((int)this + 4) + 0x20))(param_1,0);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    pvVar2 = (void *)(**(code **)(**(int **)((int)this + 4) + 0x28))(&param_1);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    *psVar1 = *psVar1 + (short)param_1;
    return 0;
  }
  *(undefined4 *)((int)this + 0x487) = 0x80040007;
  return 0x80040007;
}


