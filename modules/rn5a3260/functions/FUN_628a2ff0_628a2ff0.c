/* Module: rn5a3260.dll
   Function: FUN_628a2ff0
   Address: 628a2ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_628a2ff0(int param_1)

{
  int *piVar1;
  int *local_10;
  int *local_c;
  int local_8;
  
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  local_8 = 0;
  (**(code **)(*piVar1 + 0x18))(piVar1,&local_8);
  if (local_8 == 0) {
    local_10 = (int *)0x0;
    local_c = (int *)0x0;
    (**(code **)**(undefined4 **)(param_1 + 0x78))
              (*(undefined4 **)(param_1 + 0x78),&DAT_628a6640,&local_c);
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 0xc))(local_c,&DAT_628a6350,&local_10);
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 8))(local_c);
        local_c = (int *)0x0;
      }
    }
    if (local_10 != (int *)0x0) {
      (**(code **)*local_10)(local_10,&DAT_628a63c0,&local_8);
      if (local_8 != 0) {
        (**(code **)(**(int **)(param_1 + 0x58) + 0x14))(*(int **)(param_1 + 0x58),local_8);
      }
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 8))(local_10);
      }
    }
  }
  return local_8;
}


