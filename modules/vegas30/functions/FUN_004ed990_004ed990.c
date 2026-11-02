/* Module: vegas30.exe
   Function: FUN_004ed990
   Address: 004ed990
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ed990(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x184);
  iVar2 = FUN_004047d0(0x34a,0);
  if (iVar2 != 0) {
    FUN_004ed760(uVar1,iVar2);
    iVar2 = FUN_00404830(*(undefined4 *)(param_1 + 8),iVar2,&stack0x00000008,2);
    if (iVar2 != 0) {
      FUN_004ed800(uVar1,iVar2);
    }
  }
  return;
}


