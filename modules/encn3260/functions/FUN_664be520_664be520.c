/* Module: encn3260.dll
   Function: FUN_664be520
   Address: 664be520
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664be520(void *this,void *param_1)

{
  int *piVar1;
  int local_14 [3];
  int local_8;
  
  piVar1 = (int *)FUN_664be4b0((int)this);
  local_8 = 1;
  while (piVar1 != (int *)0x0) {
    if (local_8 == 0) {
      FUN_664bb810(param_1,&DAT_664e258c);
    }
    else {
      local_8 = 0;
    }
    FUN_664bb2c0(local_14);
    (**(code **)(*piVar1 + 4))(local_14);
    FUN_664bb870(param_1,local_14);
    piVar1 = (int *)FUN_664be4d0((int)this);
    FUN_664bb3e0(local_14);
  }
  FUN_664bb810(param_1,&DAT_664e3044);
  return;
}


