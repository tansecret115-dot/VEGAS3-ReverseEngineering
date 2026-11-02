/* Module: encn3260.dll
   Function: FUN_664903a0
   Address: 664903a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664903a0(int *param_1)

{
  int *piVar1;
  
  if (param_1[0x1c] != 0) {
    (**(code **)(*param_1 + 0x7c))();
  }
  piVar1 = (int *)param_1[0x24];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x24] = 0;
  }
  piVar1 = (int *)param_1[0x1a];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1a] = 0;
  }
  FUN_6648f130((int)param_1);
  return;
}


