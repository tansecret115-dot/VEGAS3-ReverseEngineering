/* Module: rmme3260.dll
   Function: FUN_662140d0
   Address: 662140d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662140d0(void *this,int param_1)

{
  undefined4 local_10 [3];
  
  if (param_1 < 0) {
    FUN_66208c30(local_10);
    *(undefined4 *)((int)this + 0x38a) = 0;
    *(int *)((int)this + 0x24) = param_1;
    FUN_66213bc0(this,param_1,local_10,(int *)0x0);
    return 0;
  }
  if (*(int *)((int)this + 0x38a) == 8) {
    *(undefined4 *)((int)this + 0x38a) = 9;
  }
  FUN_662133e0(this);
  return 0;
}


