/* Module: Setup.exe
   Function: FUN_0042d000
   Address: 0042d000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0042d000(int param_1)

{
  undefined4 *puVar1;
  void *this;
  char *pcVar2;
  
  puVar1 = (undefined4 *)0x0;
  pcVar2 = (char *)&DAT_0044568c;
  do {
    if (param_1 == *(int *)(pcVar2 + -0x44)) {
      this = (void *)FUN_00403450(0xc08);
      if (this == (void *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = FUN_00426320(this,*(int *)(pcVar2 + -0x44),(HKEY__)*(int *)(pcVar2 + -0x40),
                              *(uchar **)(pcVar2 + -0x3c),(undefined4 *)(pcVar2 + -0x38),
                              (int)(pcVar2 + -0x1c),*(undefined4 *)(pcVar2 + -4),
                              *(undefined4 *)pcVar2,0,*(int *)(pcVar2 + 4),0,(uchar *)0x0,
                              (uchar *)0x0);
      }
    }
    pcVar2 = pcVar2 + 0x54;
  } while (pcVar2 < s_KALib_Status_00446bdc + 4);
  return puVar1;
}


