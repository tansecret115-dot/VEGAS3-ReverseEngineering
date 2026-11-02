/* Module: vegas30.exe
   Function: FUN_0047f450
   Address: 0047f450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047f450(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x69c);
  if (((param_2 != 0) && (iVar2 = *(int *)(iVar1 + 0x38), iVar2 != 0)) &&
     (*(int *)(iVar2 + 0x18) != 0)) {
    FUN_0047de20(param_1 + 0x638,iVar2,param_1,0,0,0xffffffff);
  }
  if (*(int *)(iVar1 + 0x38) != 0) {
    FUN_0047ecc0(*(int *)(iVar1 + 0x38),0xffffffff);
    FUN_0047c430(*(undefined4 *)(iVar1 + 0x38));
    free(*(void **)(iVar1 + 0x38));
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  if (*(int *)(iVar1 + 0x3c) != 0) {
    _SfList_Destroy_4(*(int *)(iVar1 + 0x3c));
    *(undefined4 *)(iVar1 + 0x3c) = 0;
  }
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  FUN_0047ed60(param_1 + 0x638,0xffffffff);
  FUN_005bfed0(param_2);
  return 0;
}


