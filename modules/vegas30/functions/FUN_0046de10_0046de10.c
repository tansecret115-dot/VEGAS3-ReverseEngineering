/* Module: vegas30.exe
   Function: FUN_0046de10
   Address: 0046de10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0046de10(int param_1,int param_2,int param_3)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) && (param_3 == 0)) {
    return 1;
  }
  BVar1 = OpenClipboard(*(HWND *)(param_1 + 4));
  if (BVar1 != 0) {
    EmptyClipboard();
  }
  uVar2 = FUN_0046dd70(*(undefined4 *)(param_1 + 0xcd4),param_2,param_3);
  if (BVar1 != 0) {
    FUN_0046dbd0(param_1,*(undefined4 *)(param_1 + 0xcd4));
    CloseClipboard();
  }
  DAT_0064767c = DAT_0064767c | 4;
  return uVar2;
}


