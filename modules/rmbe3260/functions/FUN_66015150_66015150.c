/* Module: rmbe3260.dll
   Function: FUN_66015150
   Address: 66015150
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66015150(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  uVar2 = param_1;
  local_8 = 0;
  if ((*(int *)(param_1 + 100) != 0) && ((short)*(uint *)(param_1 + 0x58) != 0)) {
    iVar4 = 0;
    param_1 = *(uint *)(param_1 + 0x58) & 0xffff;
    do {
      piVar1 = (int *)**(undefined4 **)(*(int *)(uVar2 + 0x54) + iVar4);
      if (piVar1 != (int *)0x0) {
        iVar3 = FUN_6603c070(*(void **)(uVar2 + 0x4c),piVar1);
        iVar3 = FUN_660157a0(iVar3);
        if (iVar3 < 0) {
          local_8 = iVar3;
        }
      }
      iVar4 = iVar4 + 4;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  *(undefined4 *)(uVar2 + 0x4c) = 0;
  *(undefined4 *)(uVar2 + 0x84) = 0;
  *(undefined4 *)(uVar2 + 0x88) = 0;
  *(undefined4 *)(uVar2 + 100) = 0;
  *(undefined4 *)(uVar2 + 0x24) = 0;
  return local_8;
}


