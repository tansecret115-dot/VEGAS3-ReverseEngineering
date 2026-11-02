/* Module: rmto3260.dll
   Function: FUN_662f6120
   Address: 662f6120
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662f6120(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_2;
  if ((param_2 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)(param_1 + 4), puVar1 != (undefined4 *)0x0)) {
    param_2 = (int *)0x0;
    iVar3 = (**(code **)*puVar1)(puVar1,&DAT_663066d8,&param_2);
    if (-1 < iVar3) {
      (**(code **)(*param_2 + 0xc))(param_2,piVar2);
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))(param_2);
      }
    }
    return iVar3;
  }
  return -0x7fffbffd;
}


