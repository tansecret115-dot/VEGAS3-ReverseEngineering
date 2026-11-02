/* Module: vegas30.exe
   Function: FUN_00574b60
   Address: 00574b60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00574b60(int param_1)

{
  int iVar1;
  int iVar2;
  uint unaff_ESI;
  undefined4 *puStack_14;
  undefined1 local_4 [4];
  
  iVar1 = param_1;
  puStack_14 = &param_1;
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x98))(*(int **)(param_1 + 4),local_4,0);
  if (unaff_ESI == 0) {
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 1;
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 6;
    FUN_00574b00(iVar1);
    *(undefined4 **)(iVar1 + 0x224) = puStack_14;
    FUN_00574c40(iVar1);
  }
  else if (unaff_ESI < 0x11) {
    (**(code **)(**(int **)(iVar1 + 4) + 0x98))
              (*(int **)(iVar1 + 4),&puStack_14,iVar1 + 0x10,&stack0xfffffff4);
  }
  if (-1 < iVar2) {
    if (*(int *)(iVar1 + 0x340) != 0) {
      _FaderInst_Message_16(*(int *)(iVar1 + 0x340),0x631,0,*(uint *)(iVar1 + 0x1c) >> 1 & 1);
    }
    if (*(int *)(iVar1 + 0x6e8) != 0) {
      _FaderInst_Message_16(*(int *)(iVar1 + 0x6e8),0x631,0,*(uint *)(iVar1 + 0x1c) >> 2 & 1);
    }
  }
  return iVar2;
}


