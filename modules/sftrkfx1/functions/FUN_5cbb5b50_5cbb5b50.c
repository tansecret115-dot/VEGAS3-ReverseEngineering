/* Module: sftrkfx1.dll
   Function: FUN_5cbb5b50
   Address: 5cbb5b50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cbb5b50(void *this,undefined4 param_1,short *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_64 [25];
  
  iVar1 = *param_3;
  iVar2 = FUN_5cba7c70(this,local_64);
  if (((iVar2 != 0) || (*(int *)((int)this + 0x2c) == 0)) &&
     (iVar2 = FUN_5cbb5540(this,(int)local_64), iVar2 < 0)) {
    return iVar2;
  }
  if (*(int *)((int)this + 0x150) == 0) {
    FUN_5cbb56f0((int)this + 0x148,param_2,iVar1);
  }
  return 0;
}


