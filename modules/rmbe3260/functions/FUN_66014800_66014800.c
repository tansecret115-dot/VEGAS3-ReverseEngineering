/* Module: rmbe3260.dll
   Function: FUN_66014800
   Address: 66014800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66014800(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[8];
  *param_1 = &PTR_FUN_66066368;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[8] = 0;
  }
  if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
    FUN_6603c1b0((undefined4 *)param_1[0x11]);
    param_1[0x11] = 0;
  }
  FUN_6605b770(param_1 + 3);
  return;
}


