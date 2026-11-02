/* Module: vegas30.exe
   Function: FUN_00503080
   Address: 00503080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00503080(undefined4 *param_1)

{
  undefined4 *unaff_retaddr;
  int *piVar1;
  int local_4;
  
  piVar1 = (int *)*param_1;
  (**(code **)(*piVar1 + 0x18))(piVar1,&param_1);
  if (local_4 != 0) {
    *(int **)local_4 = &local_4;
  }
  if (unaff_retaddr != (undefined4 *)0x0) {
    *unaff_retaddr = piVar1;
  }
  return;
}


