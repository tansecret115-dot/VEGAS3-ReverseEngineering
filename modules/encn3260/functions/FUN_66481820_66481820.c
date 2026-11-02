/* Module: encn3260.dll
   Function: FUN_66481820
   Address: 66481820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66481820(void *this,int *param_1)

{
  void *this_00;
  int *piVar1;
  int iVar2;
  int *local_c;
  int *local_8;
  
  *(undefined ***)((int)this + 4) = &PTR_LAB_664dc570;
  *(undefined ***)((int)this + 8) = &PTR_LAB_664dc558;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_664dc548;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_664dc538;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_664dc4d0;
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_664dc4c0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined2 *)((int)this + 0x48) = 0;
  *(undefined2 *)((int)this + 0x4a) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5a) = 0;
  *(undefined4 *)((int)this + 0x5e) = 0;
  *(undefined4 *)((int)this + 0x66) = 1;
  *(undefined4 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x6e) = 0;
  *(undefined4 *)((int)this + 0x72) = 0;
  *(undefined4 *)((int)this + 0x76) = 0;
  *(undefined4 *)((int)this + 0x7a) = 0;
  *(undefined4 *)((int)this + 0x7e) = 0;
  *(undefined4 *)((int)this + 0x82) = 0;
  *(undefined4 *)((int)this + 0x86) = 0;
  *(undefined4 *)((int)this + 0x8a) = 0;
  *(undefined4 *)((int)this + 0x8e) = 1;
  *(undefined4 *)((int)this + 0x92) = 1;
  *(undefined4 *)((int)this + 0x96) = 1;
  *(undefined4 *)((int)this + 0x9a) = 0xffffffff;
  *(undefined2 *)((int)this + 0x9e) = 0;
  *(undefined2 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa2) = 1;
  *(undefined4 *)((int)this + 0xa6) = 1;
  *(undefined4 *)((int)this + 0xaa) = 0;
  *(undefined4 *)((int)this + 0xae) = 0;
  *(undefined ***)this = &PTR_FUN_664dc490;
  *(undefined ***)((int)this + 4) = &PTR_LAB_664dc480;
  *(undefined ***)((int)this + 8) = &PTR_LAB_664dc468;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_664dc458;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_664dc448;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_664dc3e0;
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_664dc3d0;
  this_00 = operator_new(0x30);
  if (this_00 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_664810b0(this_00,param_1);
  }
  *(int **)((int)this + 0x20) = piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  (**(code **)**(undefined4 **)((int)this + 0x20))
            (*(undefined4 **)((int)this + 0x20),&DAT_664dc5f0,(int)this + 0x3c);
  (**(code **)**(undefined4 **)((int)this + 0x20))
            (*(undefined4 **)((int)this + 0x20),&DAT_664dc6c0,(undefined4 *)((int)this + 0x34));
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)*param_1)(param_1,&DAT_664dc6c0,&local_8);
    if (iVar2 == 0) {
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
      iVar2 = (**(code **)*param_1)(param_1,&DAT_664dc710,&local_c);
      if (iVar2 == 0) {
        if (local_c != (int *)0x0) {
          (**(code **)(*local_c + 8))(local_c);
        }
        *(undefined4 *)((int)this + 0xa2) = 0;
      }
    }
  }
  return this;
}


