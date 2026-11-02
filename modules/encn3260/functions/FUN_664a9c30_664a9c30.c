/* Module: encn3260.dll
   Function: FUN_664a9c30
   Address: 664a9c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664a9c30(int *param_1)

{
  int local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  if (param_1[0x50] == 0) {
    param_1[0x3d] = 0;
    return;
  }
  if (param_1[0x1a] == 0) {
    FUN_664d5b10();
  }
  if (param_1[0x3d] != 0) {
    (**(code **)(*param_1 + 0x40))(param_1);
    param_1[0x3d] = 0;
  }
  local_10 = param_1 + 0xc;
  local_14 = -(uint)(param_1[0xf] != 0);
  local_c = (int *)0x0;
  local_8 = 0;
  while (local_14 != 0) {
    FUN_664c4010(local_10,&local_14,&local_8,(int *)&local_c);
    FUN_664a9c30(local_c);
  }
  FUN_664b22a0((HDC)param_1[0x1d]);
  FUN_664b2840((void *)param_1[0x1d],0,0);
  if (param_1[0x1a] == 0) {
    FUN_664d5b10();
  }
  return;
}


