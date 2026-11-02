/* Module: dnet3260.dll
   Function: FUN_63051d80
   Address: 63051d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_63051d80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined4 param_5)

{
  short sVar1;
  
  sVar1 = -1;
  if (*(code **)((int)this + 0x2a) != (code *)0x0) {
    sVar1 = (**(code **)((int)this + 0x2a))
                      (*(undefined4 *)((int)this + 0xe),param_1,param_2,param_3,param_5);
  }
  if (sVar1 == 0) {
    *param_4 = *(int *)((int)this + 2) << 1;
    return 0;
  }
  *param_4 = 0;
  return 0x80004005;
}


