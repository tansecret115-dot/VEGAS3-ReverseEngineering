/* Module: rmbe3260.dll
   Function: FUN_66060580
   Address: 66060580
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_66060580(void *this,int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  void *this_00;
  undefined4 *puVar3;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)this = 0;
  }
  if (param_2 == 0) {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    if (uVar2 <= param_3) {
      *(int **)this = param_1;
      (**(code **)(*param_1 + 4))(param_1);
      return this;
    }
  }
  this_00 = (void *)FUN_6605f700();
  puVar3 = (undefined4 *)FUN_660607b0(this_00,param_1,param_2,param_3);
  (**(code **)*puVar3)(puVar3,&DAT_66064f48,this);
  return this;
}


