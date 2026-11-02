/* Module: rmbe3260.dll
   Function: FUN_660080e0
   Address: 660080e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660080e0(CPNWindow *param_1)

{
  CPNText *this;
  int *piVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_660169b0(0x44f,param_1,(CPNxSize *)&local_14,(CPNxPoint *)&local_c);
  *(undefined4 *)(param_1 + 0x11c) = local_c;
  *(undefined4 *)(param_1 + 0x120) = local_8;
  *(undefined4 *)(param_1 + 0x14c) = local_14;
  *(undefined4 *)(param_1 + 0x150) = local_10;
  *(undefined4 *)(param_1 + 0x17c) = 4;
  FUN_660169b0(0x450,param_1,(CPNxSize *)&local_14,(CPNxPoint *)&local_c);
  *(undefined4 *)(param_1 + 0x124) = local_c;
  *(undefined4 *)(param_1 + 0x128) = local_8;
  *(undefined4 *)(param_1 + 0x154) = local_14;
  *(undefined4 *)(param_1 + 0x158) = local_10;
  *(undefined4 *)(param_1 + 0x180) = 8;
  FUN_660169b0(0x44a,param_1,(CPNxSize *)&local_14,(CPNxPoint *)&local_c);
  *(undefined4 *)(param_1 + 300) = local_c;
  *(undefined4 *)(param_1 + 0x130) = local_8;
  *(undefined4 *)(param_1 + 0x15c) = local_14;
  *(undefined4 *)(param_1 + 0x160) = local_10;
  *(undefined4 *)(param_1 + 0x184) = 8;
  FUN_660169b0(0x44e,param_1,(CPNxSize *)&local_14,(CPNxPoint *)&local_c);
  *(undefined4 *)(param_1 + 0x134) = local_c;
  *(undefined4 *)(param_1 + 0x164) = local_14;
  *(undefined4 *)(param_1 + 0x138) = local_8;
  *(undefined4 *)(param_1 + 0x168) = local_10;
  *(undefined4 *)(param_1 + 0x188) = 8;
  this = operator_new(0xc0);
  if (this == (CPNText *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)CPNText::CPNText(this);
  }
  *(int **)(param_1 + 0x1ec) = piVar1;
  (**(code **)(*piVar1 + 0xb8))(0x439,param_1);
  return;
}


