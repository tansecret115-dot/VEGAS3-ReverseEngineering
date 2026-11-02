/* Module: vegas30.exe
   Function: FUN_00579a80
   Address: 00579a80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00579b0d) */
/* WARNING: Removing unreachable block (ram,0x00579b12) */
/* WARNING: Removing unreachable block (ram,0x00579b1a) */

undefined4 FUN_00579a80(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 uVar3;
  
  uVar3 = 0;
  Ordinal_2();
  Ordinal_6();
  piVar1 = (int *)Ordinal_2();
  FUN_00503050(&stack0xfffffee8);
  iVar2 = FUN_00578a50();
  if ((-1 < iVar2) && (unaff_EBP != 0)) {
    Ordinal_6();
    iVar2 = FUN_00578e10();
    if (-1 < iVar2) {
      WideCharToMultiByte(0,0,(LPCWSTR)0x0,-1,&stack0xfffffeec,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      uVar3 = _SfTextToLongToken_8();
    }
    (**(code **)(*piVar1 + 8))();
  }
  Ordinal_6();
  return uVar3;
}


