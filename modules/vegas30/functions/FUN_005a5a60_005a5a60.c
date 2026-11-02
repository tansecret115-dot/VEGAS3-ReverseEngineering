/* Module: vegas30.exe
   Function: FUN_005a5a60
   Address: 005a5a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a5a60(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0xd0) & 1) != 0) {
    iVar1 = **(int **)(param_1 + 4);
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 8) + iVar4 * 4);
        if ((((*(int *)(iVar2 + 0x438) == 0) && ((*(uint *)(iVar2 + 0x434) & 8) != 0)) &&
            (iVar2 != param_2)) &&
           ((*(int *)(iVar2 + 0x448) == param_5 && (*(int *)(iVar2 + 0x44c) == param_6)))) {
          *(undefined4 *)(iVar2 + 0x448) = 0;
          *(uint *)(iVar2 + 0x434) = *(uint *)(iVar2 + 0x434) & 0xfffffff7;
          *(undefined4 *)(iVar2 + 0x43c) = 0;
          *(undefined4 *)(iVar2 + 0x440) = 0;
          *(undefined4 *)(iVar2 + 0x44c) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    *(undefined4 *)(param_2 + 0x43c) = param_3;
    *(uint *)(param_2 + 0x434) = *(uint *)(param_2 + 0x434) | 8;
    *(undefined4 *)(param_2 + 0x440) = 1;
    uVar3 = _SfGetMicrosec_0();
    *(uint *)(param_2 + 0x444) = uVar3 / 1000;
    *(int *)(param_2 + 0x448) = param_5;
    *(int *)(param_2 + 0x44c) = param_6;
  }
  return;
}


