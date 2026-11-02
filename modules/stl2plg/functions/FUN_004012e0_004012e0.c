/* Module: stl2plg.dll
   Function: FUN_004012e0
   Address: 004012e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004012e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_004644c8;
  FUN_00401410((int)param_1);
  if ((int *)param_1[0x88] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x88] + 0x20))(1);
    param_1[0x88] = 0;
  }
  if (param_1[0xec] != 0) {
    (**(code **)(*(int *)param_1[0xed] + 0x18))((int *)param_1[0xed],0,0,0,0,0,param_1[0xec]);
    param_1[0xec] = 0;
  }
  piVar1 = (int *)param_1[0xed];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xed] = 0;
  }
  FUN_00402640(param_1 + 0x8a);
  return;
}


