/* Module: encn3260.dll
   Function: FUN_664864c0
   Address: 664864c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664864c0(int param_1,undefined4 param_2,char *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  piVar1 = operator_new(0x40);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_664bd560(piVar1);
    FUN_664bb2c0(piVar1 + 0xd);
    *piVar1 = (int)&PTR_FUN_664de0e8;
  }
  FUN_664bb5e0(piVar1 + 0xd,&DAT_664e24fc);
  iVar2 = FUN_6648bad0(*(void **)(param_1 + 0x40),param_1 + -0x30);
  uVar3 = FUN_6648c650((void *)(param_1 + -0x30),piVar1,param_3,s_text_rtsp_parameters_664e2500,
                       iVar2);
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  return uVar3;
}


