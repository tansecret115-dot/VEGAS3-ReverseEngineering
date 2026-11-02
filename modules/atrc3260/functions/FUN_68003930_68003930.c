/* Module: atrc3260.dll
   Function: FUN_68003930
   Address: 68003930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_68003930(void *this,byte *param_1,void *param_2)

{
  int *piVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  piVar1 = FUN_68003890(this,param_1,(uint *)&param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  FUN_680033b0(param_2,piVar1 + 5);
  return 1;
}


