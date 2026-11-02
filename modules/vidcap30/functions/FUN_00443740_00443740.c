/* Module: vidcap30.exe
   Function: FUN_00443740
   Address: 00443740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00443740(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_0042e4f0(param_1);
  if (((piVar1 != (int *)0x0) && (-1 < param_2)) && (param_2 < *piVar1)) {
    uVar2 = *(undefined4 *)(piVar1[2] + param_2 * 4);
  }
  return uVar2;
}


