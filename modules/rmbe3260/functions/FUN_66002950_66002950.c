/* Module: rmbe3260.dll
   Function: FUN_66002950
   Address: 66002950
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66002950(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  piVar3 = (int *)0x0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  iVar1 = (**(code **)(**(int **)((int)this + 0x104) + 0xc))
                    (*(int **)((int)this + 0x104),param_1,&local_c);
  if (-1 < iVar1) {
    do {
      iVar1 = *local_c;
      uVar2 = (**(code **)(iVar1 + 0xc))(local_c,*(undefined4 *)((int)this + 0x118),piVar3,&local_8)
      ;
      (**(code **)(iVar1 + 0x10))(local_c,uVar2);
      (**(code **)(*local_8 + 0xc))(local_8,&local_14);
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
      FUN_66002b00(this,local_14,local_10,(uint *)&param_1);
      FUN_66002150(this,piVar3,param_1,(int *)0x0);
      piVar3 = (int *)((int)piVar3 + 1);
    } while ((int)piVar3 < 4);
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return;
}


