/* Module: vegas30.exe
   Function: FUN_00509790
   Address: 00509790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00509790(int param_1)

{
  int iVar1;
  
  if (((((*(uint *)(param_1 + 0x114) & 0x86) == 0) && ((*(uint *)(param_1 + 0x114) & 1) != 0)) &&
      (iVar1 = *(int *)(param_1 + 0x118), iVar1 != 0)) && ((*(byte *)(iVar1 + 300) & 1) != 0)) {
    lstrcpynA((LPSTR)(param_1 + 0x10),(LPCSTR)(iVar1 + 0x28),0x104);
    *(undefined1 *)(param_1 + 0x113) = 0;
    *(uint *)(iVar1 + 300) = *(uint *)(iVar1 + 300) & 0xfffffffe;
  }
  return;
}


