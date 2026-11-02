/* Module: vegas30.exe
   Function: FUN_00574540
   Address: 00574540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00574540(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0x74) != 0)) &&
     (iVar1 = *(int *)(*(int *)(DAT_0064762c + 0x74) + 0x80), iVar1 != 0)) {
    uVar2 = *(undefined4 *)(iVar1 + 0x278);
  }
  return uVar2;
}


