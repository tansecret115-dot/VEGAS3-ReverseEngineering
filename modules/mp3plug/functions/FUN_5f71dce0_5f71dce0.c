/* Module: mp3plug.dll
   Function: FUN_5f71dce0
   Address: 5f71dce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f71dce0(void *this,int param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_5f71dc40(this,param_3);
  if (((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0x14) == 2)) &&
     (*(int *)(param_2 + 0x18) == 0)) {
    return;
  }
  if (((*(int *)(param_2 + 0x10) == 0) || (*(int *)(param_2 + 0x18) == 0)) ||
     (*(int *)(param_2 + 0x14) != 2)) {
    iVar3 = (0x20 >> (param_4 & 0x1f)) + -1;
    if (*(int *)(param_2 + 0x68) <= iVar3) {
      iVar3 = *(int *)(param_2 + 0x68);
    }
  }
  else if ((*(int *)(param_3 + 0x18) == 2) && (*(int *)(param_3 + 4) == 2)) {
    iVar3 = 3;
  }
  else {
    iVar3 = 1;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = iVar4 * 2;
      iVar1 = iVar4 * 0x48;
      iVar4 = iVar4 + 1;
      FUN_5f71ddb0(param_1 + iVar1,(float *)(param_1 + (iVar2 + 2) * 0x24));
    } while (iVar4 < iVar3);
  }
  return;
}


