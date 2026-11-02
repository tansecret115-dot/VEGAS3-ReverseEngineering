/* Module: rmbe3260.dll
   Function: FUN_660015a0
   Address: 660015a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_660015a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar1 = *(int **)((int)this + 0x104);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    local_c = (int *)0x0;
    local_10 = (int *)0x0;
    local_8 = (int *)0x0;
    iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,0,&local_c);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*local_c + 0x10))(local_c,0xc,&local_10);
      if (-1 < iVar2) {
        iVar2 = (**(code **)*local_10)(local_10,&DAT_66065c38,&local_8);
        if (-1 < iVar2) {
          (**(code **)(*local_8 + 0x24))(local_8,param_1);
          (**(code **)(*local_8 + 0x2c))(local_8,param_2);
          (**(code **)(*local_8 + 0x34))(local_8,param_4);
          (**(code **)(*local_8 + 0x3c))(local_8,param_3);
        }
      }
    }
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
      local_c = (int *)0x0;
    }
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10);
      local_10 = (int *)0x0;
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  return iVar2;
}


