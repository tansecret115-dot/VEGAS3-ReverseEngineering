/* Module: vegas30k.dll
   Function: FUN_01072a40
   Address: 01072a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01072a40(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0x34c);
  iVar3 = *(int *)(param_2 + 0x21c);
  if (iVar1 != 0) {
    if ((iVar3 != 0) && (iVar4 = *(int *)(iVar3 + 0x34c), iVar4 != 0)) {
      *(uint *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) - (uint)*(byte *)(iVar1 + 0xe6);
      *(uint *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) - (uint)*(byte *)(iVar1 + 0x12d);
      FUN_010728c0(param_1,iVar3);
    }
    if ((*(uint *)(param_2 + 8) & 0x10) != 0) {
      *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) - (uint)*(byte *)(iVar1 + 0x264);
      *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - (uint)*(byte *)(iVar1 + 0x293);
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      piVar2 = (int *)((*(int *)(iVar1 + 0x10) + -1) * *(int *)(*(int *)(param_1 + 0x4c) + 4) +
                      *(int *)(*(int *)(param_1 + 0x4c) + 8));
      if (piVar2 != (int *)0x0) {
        piVar2 = (int *)*piVar2;
        iVar3 = 0;
        while( true ) {
          if (piVar2 == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *piVar2;
          }
          if (iVar4 <= iVar3) goto LAB_01072b0b;
          if (*(int *)(piVar2[1] * iVar3 + piVar2[2]) == param_2) break;
          iVar3 = iVar3 + 1;
        }
        _SfList_DeleteList_16(piVar2,iVar3,1,0);
      }
    }
LAB_01072b0b:
    *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) & 0xffffffef;
  }
  return 0;
}


