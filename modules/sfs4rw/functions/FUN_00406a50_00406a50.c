/* Module: sfs4rw.dll
   Function: FUN_00406a50
   Address: 00406a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406a50(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = DAT_004a8128;
  if (DAT_004a8128 != (void *)0x0) {
    iVar2 = FUN_004124c0(DAT_004a8128,&DAT_004a823c);
    if (-1 < iVar2) {
      FUN_00412d10((int)pvVar1);
    }
    *(undefined4 *)(param_1 + 0x23c) = 0;
  }
  return;
}


