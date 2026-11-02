/* Module: InstMsi-x86a.exe
   Function: FUN_010042f4
   Address: 010042f4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_010042f4(int param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x18;
  if (*(int *)(&DAT_0100b844 + iVar3) == 1) {
    uVar1 = 0;
    (&DAT_0100b840)[param_1 * 6] = 1;
    *(undefined4 *)(&DAT_0100b848 + iVar3) = 0;
    *(undefined4 *)(&DAT_0100b850 + iVar3) = 0;
    *(undefined4 *)(&DAT_0100b84c + iVar3) = 0;
  }
  else {
    BVar2 = CloseHandle(*(HANDLE *)(&DAT_0100b854 + iVar3));
    if (BVar2 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
      (&DAT_0100b840)[param_1 * 6] = 1;
    }
  }
  return uVar1;
}


