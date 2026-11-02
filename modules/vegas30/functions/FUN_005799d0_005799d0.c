/* Module: vegas30.exe
   Function: FUN_005799d0
   Address: 005799d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005799d0(void)

{
  undefined4 uVar1;
  LPCOLESTR lpsz;
  int iVar2;
  undefined4 unaff_EBP;
  int *unaff_ESI;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  uVar1 = Ordinal_2(&PTR_DAT_0061be7c);
  Ordinal_6(unaff_EBP);
  lpsz = (LPCOLESTR)Ordinal_2(uVar1);
  puVar3 = &stack0xfffffff0;
  uVar1 = 0;
  puVar4 = puVar3;
  FUN_00503050(&stack0xffffffec);
  iVar2 = FUN_00578a50(puVar3,uVar1,puVar4);
  if ((-1 < iVar2) && (unaff_ESI != (int *)0x0)) {
    iVar2 = FUN_00578e10(unaff_ESI,&stack0xffffffec);
    if (-1 < iVar2) {
      CLSIDFromString(lpsz,(LPCLSID)0x0);
    }
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  Ordinal_6(lpsz);
  return iVar2;
}


