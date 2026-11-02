/* Module: sfcdi.dll
   Function: FUN_5bf40a00
   Address: 5bf40a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf40a00(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_2 + 0x34c);
  iVar4 = *(int *)(param_2 + 0x21c);
  if (iVar1 != 0) {
    if ((iVar4 != 0) && (iVar5 = *(int *)(iVar4 + 0x34c), iVar5 != 0)) {
      *(uint *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) - (uint)*(byte *)(iVar1 + 0xe6);
      *(uint *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) - (uint)*(byte *)(iVar1 + 0x12d);
      FUN_5bf40880(param_1,iVar4);
    }
    if ((*(uint *)(param_2 + 8) & 0x10) != 0) {
      *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) - (uint)*(byte *)(iVar1 + 0x264);
      *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - (uint)*(byte *)(iVar1 + 0x293);
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      puVar3 = (undefined4 *)
               ((*(int *)(iVar1 + 0x10) + -1) * *(int *)(*(int *)(param_1 + 0x4c) + 4) +
               *(int *)(*(int *)(param_1 + 0x4c) + 8));
      if (puVar3 != (undefined4 *)0x0) {
        piVar2 = (int *)*puVar3;
        iVar4 = 0;
        while( true ) {
          if (piVar2 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *piVar2;
          }
          if (iVar5 <= iVar4) goto LAB_5bf40acb;
          if (*(int *)(piVar2[1] * iVar4 + piVar2[2]) == param_2) break;
          iVar4 = iVar4 + 1;
        }
        FUN_5bf29dd0(piVar2,iVar4,1,0);
      }
    }
LAB_5bf40acb:
    *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) & 0xffffffef;
  }
  return 0;
}


