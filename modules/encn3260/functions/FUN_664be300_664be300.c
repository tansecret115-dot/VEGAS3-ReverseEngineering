/* Module: encn3260.dll
   Function: FUN_664be300
   Address: 664be300
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664be300(void *this,void *param_1)

{
  bool bVar1;
  void *this_00;
  undefined4 *puVar2;
  int local_20 [3];
  int local_14 [3];
  void *local_8;
  
  bVar1 = true;
  local_8 = this;
  this_00 = (void *)FUN_664be280((int)this);
  while (this_00 != (void *)0x0) {
    FUN_664bb2c0(local_14);
    FUN_664be100(this_00,local_14);
    if (bVar1) {
      FUN_664bb570(param_1,local_14);
      bVar1 = false;
    }
    else {
      puVar2 = FUN_664bb720(local_20,&DAT_664ef7c4,local_14);
      FUN_664bb870(param_1,puVar2);
      FUN_664bb3e0(local_20);
    }
    this_00 = (void *)FUN_664be2a0((int)local_8);
    FUN_664bb3e0(local_14);
  }
  return;
}


