/* Module: rmme3260.dll
   Function: FUN_6623f8a0
   Address: 6623f8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6623f8a0(int *param_1)

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
    FUN_66265fd0();
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
    FUN_66251190(local_10,&local_14,&local_8,(int *)&local_c);
    FUN_6623f8a0(local_c);
  }
  FUN_66247740((HDC)param_1[0x1d]);
  FUN_66247ce0((void *)param_1[0x1d],0,0);
  if (param_1[0x1a] == 0) {
    FUN_66265fd0();
  }
  return;
}


