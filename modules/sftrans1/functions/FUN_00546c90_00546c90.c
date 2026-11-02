/* Module: sftrans1.dll
   Function: FUN_00546c90
   Address: 00546c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00546c90(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  param_1[1] = 0;
  return uVar1;
}


