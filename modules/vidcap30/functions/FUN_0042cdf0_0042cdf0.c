/* Module: vidcap30.exe
   Function: FUN_0042cdf0
   Address: 0042cdf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042cdf0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_EBX;
  undefined4 *unaff_EBP;
  undefined4 *puVar5;
  undefined4 unaff_retaddr;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = 1;
  if ((*(uint *)(iVar2 + 0x14c) & 1) != 0) {
    *(undefined4 *)(iVar2 + 0x148) = *(undefined4 *)(iVar2 + 0x148);
    *(uint *)(iVar2 + 0x14c) = *(uint *)(iVar2 + 0x14c) & 0xfffffffe;
    if (param_4 != (int *)0x0) {
      iVar2 = (**(code **)(*param_4 + 0x2c))(param_4);
      iVar1 = (**(code **)(*param_4 + 0xc))(param_4,&stack0x00000000);
      if (((-1 < iVar1) && (unaff_EBP != (undefined4 *)0x0)) && (iVar2 != 0)) {
        iVar2 = FUN_0042cef0(param_1 + -0xc,iVar2);
        if (iVar2 < 0) {
          return iVar2;
        }
        if (*(int *)(param_1 + 0x18) == 0) {
          return iVar2;
        }
        *(undefined4 *)(param_1 + 0xc) = unaff_EBX;
        *(undefined4 *)(param_1 + 0x10) = unaff_retaddr;
        if (*(int *)(param_1 + 0x4c) != 0) {
          (**(code **)(*param_4 + 0x14))(param_4,param_1 + 0x6c,&stack0xfffffffc);
        }
        uVar4 = *(uint *)(param_1 + 0x14);
        puVar5 = *(undefined4 **)(param_1 + 0x18);
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar5 = *unaff_EBP;
          unaff_EBP = unaff_EBP + 1;
          puVar5 = puVar5 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar5 = *(undefined1 *)unaff_EBP;
          unaff_EBP = (undefined4 *)((int)unaff_EBP + 1);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        PostMessageA(*(HWND *)(*(int *)(param_1 + 4) + 4),0x40f,0,param_1 + -0xc);
        return 0;
      }
    }
    iVar1 = -0x7fffbffd;
  }
  return iVar1;
}


