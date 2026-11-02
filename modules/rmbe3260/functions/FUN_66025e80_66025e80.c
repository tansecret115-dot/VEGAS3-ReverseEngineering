/* Module: rmbe3260.dll
   Function: FUN_66025e80
   Address: 66025e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66025e80(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_66067320;
  param_1[4] = &PTR_LAB_66067308;
  param_1[5] = &PTR_LAB_660672f0;
  param_1[6] = &PTR_LAB_660672d8;
  param_1[7] = &PTR_LAB_660672c0;
  FUN_660265c0((int)param_1);
  if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd])(1);
    param_1[0xd] = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x3e);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x3e) = 0;
  }
  if (param_1 == DAT_66075188) {
    DAT_66075188 = (undefined4 *)0x0;
  }
  piVar1 = (int *)param_1[0xe];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xe] = 0;
  }
  FUN_6605cdb0(param_1 + 8);
  *param_1 = &PTR_FUN_66063e30;
  return;
}


