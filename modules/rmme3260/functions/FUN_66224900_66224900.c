/* Module: rmme3260.dll
   Function: FUN_66224900
   Address: 66224900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66224900(void *this,int *param_1)

{
  if (param_1 == (int *)0x0) {
    return 0x80004005;
  }
  (**(code **)(*param_1 + 4))(param_1);
  FUN_6624ff10(this,*(int *)((int)this + 4),param_1);
  return 0;
}


