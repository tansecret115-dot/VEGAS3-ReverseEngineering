/* Module: erv23260.dll
   Function: FUN_637f3160
   Address: 637f3160
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637f3160(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_63829148;
  param_1[0x19] = &PTR_FUN_63829130;
  if ((undefined4 *)param_1[0xad] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xad])(1);
  }
  param_1[0xad] = 0;
  if ((undefined4 *)param_1[0xae] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xae])(1);
  }
  param_1[0xae] = 0;
  if ((undefined4 *)param_1[0xb0] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb0])(1);
  }
  pvVar1 = (void *)param_1[0xb1];
  param_1[0xb0] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_637f6a90((int)pvVar1);
    FUN_637f2010(pvVar1);
  }
  pvVar1 = (void *)param_1[0xbc];
  param_1[0xb1] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_637f6a90((int)pvVar1);
    FUN_637f2010(pvVar1);
  }
  param_1[0xbc] = 0;
  FUN_637f3440((void *)param_1[0xbd]);
  if ((void *)param_1[0xd9] != (void *)0x0) {
    FUN_637f1080((void *)param_1[0xd9]);
    param_1[0xda] = 0;
    param_1[0xd9] = 0;
  }
  FUN_637f22c0(param_1);
  return;
}


