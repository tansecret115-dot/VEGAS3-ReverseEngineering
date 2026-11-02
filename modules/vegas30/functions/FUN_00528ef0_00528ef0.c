/* Module: vegas30.exe
   Function: FUN_00528ef0
   Address: 00528ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00528ef0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  iVar2 = FUN_004047d0(0x34e,0);
  if (iVar2 != 0) {
    FUN_004ed760(uVar1,iVar2);
    iVar2 = FUN_00404830(*(undefined4 *)(param_1 + 8),iVar2,&stack0x00000008,2);
    if (iVar2 != 0) {
      FUN_004ed800(uVar1,iVar2);
    }
  }
  return;
}


