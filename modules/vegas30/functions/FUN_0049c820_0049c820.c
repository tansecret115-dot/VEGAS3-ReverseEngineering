/* Module: vegas30.exe
   Function: FUN_0049c820
   Address: 0049c820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049c820(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  FUN_00454f40(param_1);
  if (*(int *)(param_1 + 0xbc8) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  iVar1 = *piVar3;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(piVar3[2] + iVar4 * 4);
      if ((*(uint *)(iVar2 + 0x10) & 0x100000) != 0) {
        if (DAT_00647788 != 0) {
          FUN_005cbf20(iVar2);
        }
        if (DAT_0064778c != 0) {
          FUN_0047f450(iVar2,param_2);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  FUN_004ea040(*(undefined4 *)(param_1 + 0xbc8),param_2);
  if (param_2 == 0) {
    FUN_0049b100(param_1,param_1 + 0xcd8);
  }
  else {
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0xcd8));
    *(undefined4 *)(param_1 + 0xcd8) = 0;
  }
  FUN_0046b9e0(param_1);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xf7ffffff;
  FUN_00455e00(param_1);
  *(uint *)**(undefined4 **)(param_1 + 0xbc8) =
       *(uint *)**(undefined4 **)(param_1 + 0xbc8) | 0x100000;
  DAT_0064767c = DAT_0064767c | 0x1000;
  return;
}


