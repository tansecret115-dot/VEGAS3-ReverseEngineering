/* Module: vidcap30.exe
   Function: FUN_0042d700
   Address: 0042d700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042d700(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*param_1 == 8) {
    *param_2 = 0;
    piVar1 = (int *)param_1[0xf7];
    if (piVar1 == (int *)0x0) {
      return 0x80004002;
    }
    uVar2 = (**(code **)(*piVar1 + 0x20))(piVar1);
    *param_2 = uVar2;
  }
  return 0;
}


