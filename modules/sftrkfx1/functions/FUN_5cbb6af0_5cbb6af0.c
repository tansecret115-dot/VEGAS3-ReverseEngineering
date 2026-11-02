/* Module: sftrkfx1.dll
   Function: FUN_5cbb6af0
   Address: 5cbb6af0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cbb6af0(void *this,undefined4 param_1,float *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 local_64 [25];
  
  uVar1 = *param_3;
  if ((param_4 != 0) && (*(int *)((int)this + 0x14c) != 0)) {
    *(undefined4 *)((int)this + 0x2c) = 0;
    return 1;
  }
  if (*(int *)((int)this + 0x2c) == 0) {
    FUN_5cba7c70(this,local_64);
    iVar2 = FUN_5cbb5540(this,(int)local_64);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  if (*(int *)((int)this + 0x150) == 0) {
    FUN_5cbb6490((int)this + 0x148,param_2,uVar1);
  }
  return 0;
}


