/* Module: erv33260.dll
   Function: FUN_6707ef40
   Address: 6707ef40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6707ef40(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  
  iVar4 = 0;
  iVar3 = param_1;
  local_8 = param_1;
  do {
    iVar2 = *(int *)(param_1 + 200);
    if ((iVar2 == 1) || (iVar2 == 2)) {
      if (*(char *)(param_1 + 0x128) == '\0') {
        iVar4 = *(int *)(param_1 + 0x6c);
        iVar3 = *(int *)(*(int *)(param_1 + 0x60) + 4);
        *(undefined1 *)(param_1 + 0x128) = 1;
        local_8 = iVar3;
      }
      else if ((iVar2 == 2) && (*(char *)(param_1 + 0x129) == '\0')) {
        iVar4 = *(int *)(param_1 + 0x70);
        iVar3 = *(int *)(*(int *)(param_1 + 100) + 4);
        *(undefined1 *)(param_1 + 0x129) = 1;
        local_8 = iVar3;
      }
    }
    if (iVar4 != 0) {
      if ((*(int *)(param_1 + 0xc) < 3) || (5 < *(int *)(param_1 + 0xc))) {
        uVar1 = *(int *)(param_1 + 0xa0) + 2;
        FUN_6708e1d0(local_8,iVar4 + 0x10 + uVar1 * 0x40,
                     iVar4 + 8 +
                     (((*(int *)(param_1 + 0xa4) + 2) * uVar1 * 0x10 & 0xfffffff) * 2 +
                     (uVar1 & 0x1ffffff) * 0x20) * 2,*(int *)(param_1 + 0xa0) << 4,
                     *(int *)(param_1 + 0xa4) << 4,*(int *)(param_1 + 0x9c),
                     (byte *)((uVar1 & 0xfffffff) << 3),(uVar1 & 0xfffffff) << 2);
        iVar3 = local_8;
      }
      else {
        FUN_6708e730(iVar3,iVar4,*(int *)(param_1 + 0xa0) << 4,*(int *)(param_1 + 0xa4) << 4,
                     *(uint *)(param_1 + 0x9c));
      }
    }
  } while ((*(int *)(param_1 + 200) == 2) && (*(char *)(param_1 + 0x129) == '\0'));
  return;
}


