/* Module: cook3260.dll
   Function: FUN_633a57e0
   Address: 633a57e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_633a57e0(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_4c [9];
  uint local_28 [9];
  
  if ((*param_1 != 0) || (*param_2 != 0)) {
    FUN_633a5740(param_1,(int)local_28);
    FUN_633a5740(param_2,(int)local_4c);
    iVar2 = 0;
    do {
      uVar1 = *(uint *)((int)local_4c + iVar2);
      uVar3 = (int)*(uint *)((int)local_28 + iVar2) >> 0x1f;
      if ((int)((*(uint *)((int)local_28 + iVar2) ^ uVar3) - uVar3) <
          (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f))) {
        *(uint *)((int)local_28 + iVar2) = uVar1;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x20);
    FUN_633a5790((int *)local_28,param_1);
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}


