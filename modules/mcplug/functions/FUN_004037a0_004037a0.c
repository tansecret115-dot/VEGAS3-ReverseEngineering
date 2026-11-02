/* Module: mcplug.dll
   Function: FUN_004037a0
   Address: 004037a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004037a0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_retaddr;
  
  piVar1 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x3c))(param_1,&param_1);
  if (-1 < iVar2) {
    if (unaff_ESI <= unaff_retaddr) {
      return -0x7ff8ffa9;
    }
    if (param_1 != (int *)0x0) {
      *param_1 = *(int *)(piVar1[0x90] + unaff_retaddr * 0xc);
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(piVar1[0x90] + 4 + unaff_retaddr * 0xc);
    }
    iVar2 = 0;
  }
  return iVar2;
}


