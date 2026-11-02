/* Module: rmbe3260.dll
   Function: FUN_66001670
   Address: 66001670
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_66001670(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int *local_10;
  int *local_c;
  int *local_8;
  
  iVar2 = 0;
  if (*(int *)((int)this + 0x104) != 0) {
    uVar1 = 0;
    do {
      if (iVar2 < 0) {
        return iVar2;
      }
      local_c = (int *)0x0;
      local_10 = (int *)0x0;
      local_8 = (int *)0x0;
      iVar2 = (**(code **)(**(int **)((int)this + 0x104) + 0xc))
                        (*(int **)((int)this + 0x104),uVar1,&local_c);
      if (((-1 < iVar2) &&
          (iVar2 = (**(code **)(*local_c + 0x10))(local_c,0xc,&local_10), -1 < iVar2)) &&
         (iVar2 = (**(code **)*local_10)(local_10,&DAT_66065c38,&local_8), -1 < iVar2)) {
        (**(code **)(*local_8 + 0x28))(local_8,param_1);
        (**(code **)(*local_8 + 0x30))(local_8,param_2);
        (**(code **)(*local_8 + 0x38))(local_8,param_4);
        (**(code **)(*local_8 + 0x40))(local_8,param_3);
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
      uVar1 = uVar1 + 1;
    } while (uVar1 < 9);
  }
  return iVar2;
}


