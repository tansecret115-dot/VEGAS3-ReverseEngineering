/* Module: vegas30.exe
   Function: FUN_004d63f0
   Address: 004d63f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004d63f0(int *param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1[9] == 0) {
    param_1[9] = param_2;
    (**(code **)(*param_1 + 0x70))(param_2);
  }
  else if (param_2 == 0) {
    (**(code **)(*param_1 + 0x74))();
  }
  else {
    bVar1 = param_1[0x29] != 0;
    (**(code **)(*param_1 + 0x6c))(param_1[9],param_2);
  }
  param_1[9] = param_2;
  if (bVar1 != false) {
    DestroyWindow((HWND)param_1[0x29]);
    FUN_004d5aa0();
  }
  FUN_004d5bd0(bVar1);
  return;
}


