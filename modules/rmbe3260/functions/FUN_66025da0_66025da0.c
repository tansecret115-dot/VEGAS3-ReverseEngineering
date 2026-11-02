/* Module: rmbe3260.dll
   Function: FUN_66025da0
   Address: 66025da0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66025da0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *this;
  int *piVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66067388;
  param_1[5] = &PTR_LAB_66067370;
  param_1[6] = &PTR_LAB_66066be0;
  param_1[7] = &PTR_LAB_66067358;
  FUN_6605cda0(param_1 + 8);
  *param_1 = &PTR_FUN_66067320;
  param_1[4] = &PTR_LAB_66067308;
  param_1[5] = &PTR_LAB_660672f0;
  param_1[6] = &PTR_LAB_660672d8;
  param_1[7] = &PTR_LAB_660672c0;
  puVar1 = operator_new(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    this = (void *)0x0;
  }
  else {
    this = (void *)FUN_6604f440(puVar1);
  }
  param_1[0xd] = this;
  if (this != (void *)0x0) {
    FUN_6604f510(this,2,0x6606ddb0,1);
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  piVar2 = (int *)FUN_66026d30();
  *(int **)((int)param_1 + 0x3e) = piVar2;
  (**(code **)(*piVar2 + 4))(piVar2);
  return param_1;
}


