/* Module: rmbe3260.dll
   Function: FUN_6602d4a0
   Address: 6602d4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6602d4a0(int param_1)

{
  int local_18 [3];
  undefined4 *local_c;
  int local_8;
  
  local_8 = -(uint)(*(int *)(param_1 + 0x98) != 0);
  FUN_6605b650(local_18);
  if (local_8 != 0) {
    do {
      FUN_6605cd20((void *)(param_1 + 0x90),&local_8,local_18,&local_c);
      if (local_c != (undefined4 *)0x0) {
        (**(code **)*local_c)(1);
      }
    } while (local_8 != 0);
  }
  FUN_6605c880((int *)(param_1 + 0x90));
  FUN_6605cdc0((void *)(param_1 + 0x60),0,0xffffffff);
  FUN_6605cdc0((void *)(param_1 + 0x70),0,0xffffffff);
  FUN_6605cdc0((void *)(param_1 + 0x80),0,0xffffffff);
  FUN_6605b770(local_18);
  return;
}


