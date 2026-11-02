/* Module: vegas30k.dll
   Function: FUN_011a20a0
   Address: 011a20a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011a20a0(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0x405e0000;
  if (*(int *)(*(int *)(param_1 + 0x228) + 0x4c2) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ftol();
  }
  (**(code **)(param_1 + 0x14))
            (param_1,0x2d,*(undefined4 *)(param_1 + 0x18),0xffffffff,param_2,0,0,uVar1,0,0);
  return;
}


