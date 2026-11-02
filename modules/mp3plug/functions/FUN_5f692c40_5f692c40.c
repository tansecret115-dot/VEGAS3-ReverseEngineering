/* Module: mp3plug.dll
   Function: FUN_5f692c40
   Address: 5f692c40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f692c40(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_retaddr;
  
  piVar1 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x3c))(param_1,&param_1);
  if (-1 < iVar2) {
    if (unaff_retaddr != 0) {
      return -0x7ff8ffa9;
    }
    if (piVar1[0x420] == 0) {
      iVar2 = FUN_5f692a10(piVar1);
    }
    if (-1 < iVar2) {
      if (param_1 != (int *)0x0) {
        *param_1 = *(int *)piVar1[0x420];
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)(piVar1[0x420] + 4);
      }
    }
  }
  return iVar2;
}


