/* Module: vegas30.exe
   Function: FUN_0051f150
   Address: 0051f150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0051f150(int param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0xa0) != 0) || (*(int *)(param_1 + 0xa4) != 0)) {
      if ((*(int *)(param_1 + 0x98) == 0) ||
         ((*(uint *)(*(int *)(param_1 + 0x98) + 4) & 0x1000) == 0)) {
        iVar2 = FUN_005d9aa0(DAT_0064b138,0,*(int *)(param_1 + 0xa0),*(int *)(param_1 + 0xa4));
        if (iVar2 != 0) {
          FUN_005b83b0(DAT_0064b138,1);
          *(int *)(param_1 + 0x98) = iVar2 + 0x144;
          *(int *)(iVar2 + 0x1d4) = iVar2;
          *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar2 + 0x30);
          *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar2 + 0x34);
          FUN_005b84d0(DAT_0064b138,1);
        }
      }
      if ((*(int *)(param_1 + 0x98) == 0) || (*(int *)(*(int *)(param_1 + 0x98) + 0x90) == 0)) {
        iVar2 = FUN_005cf4d0(DAT_0064b138,*(undefined4 *)(param_1 + 0xa0));
        if (iVar2 != 0) {
          FUN_005b83b0(DAT_0064b138,1);
          *(int *)(param_1 + 0x98) = iVar2 + 0x80;
          *(int *)(iVar2 + 0x110) = iVar2;
          *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar2 + 0x1c);
          *(undefined4 *)(param_1 + 0xa4) = 0;
          FUN_005b84d0(DAT_0064b138,1);
        }
      }
      iVar2 = *(int *)(param_1 + 0x98);
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x90) != 0)) && ((*(byte *)(iVar2 + 4) & 1) != 0)) {
        FUN_0051ed90(param_1,iVar2);
        FUN_00538410(*(undefined4 *)(param_1 + 0x90),
                     *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x88),
                     *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x8c));
        if (DAT_0064a508 != 0) {
          lVar1 = *(longlong *)(*(int *)(param_1 + 0x98) + 0x88);
          lVar3 = FUN_005383a0(*(int *)(param_1 + 0x90) + 0xe80);
          FUN_00458030(DAT_00647630,lVar3 + lVar1,1);
          FUN_00455250(DAT_00647630,0);
        }
        return 0;
      }
      *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xfffffff7;
      FUN_0051f330(param_1);
      FUN_0051e450(param_1,0,0,0);
      PostMessageA(*(HWND *)(param_1 + 8),0x10,0,0);
    }
  }
  return 0x15;
}


