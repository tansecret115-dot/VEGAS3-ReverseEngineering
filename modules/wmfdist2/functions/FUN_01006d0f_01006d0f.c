/* Module: wmfdist2.exe
   Function: FUN_01006d0f
   Address: 01006d0f
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01006d0f(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = (*(code *)param_1[7])(param_1[0x22],0,1);
  if (iVar2 == -1) {
    uVar4 = 4;
  }
  else {
    piVar1 = param_1 + 0x1ef;
    *(undefined2 *)((int)param_1 + 0x7de) = *(undefined2 *)(param_1 + 0x2b);
    *(undefined2 *)((int)param_1 + 0x7da) = *(undefined2 *)(param_1 + 0x1c);
    *piVar1 = iVar2;
    param_1[499] = param_1[0xe];
    iVar3 = (*(code *)param_1[9])(5,piVar1);
    if ((iVar3 != -1) &&
       (((*(short *)(param_1 + 0x2b) = *(short *)((int)param_1 + 0x7de),
         *(short *)((int)param_1 + 0x7de) == 0 || (*piVar1 == iVar2)) ||
        (iVar2 = (*(code *)param_1[7])(param_1[0x22],*piVar1,0), iVar2 != -1)))) {
      return 1;
    }
    uVar4 = 0xb;
  }
  FUN_0100718c((undefined4 *)*param_1,uVar4,0);
  return 0;
}


