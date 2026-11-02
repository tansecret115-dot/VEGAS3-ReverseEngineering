/* Module: sfpublish.dll
   Function: FUN_004121e0
   Address: 004121e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004121e0(void)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  int *local_108;
  uchar local_104 [260];
  
  iVar3 = DAT_004419e4 + -1;
  if (-1 < iVar3) {
    while( true ) {
      FUN_00418d60(local_104,(BYTE *)"%s%s.zip");
      uVar1 = FUN_0042aec0((LPCSTR)local_104,2,&local_108);
      if ((int)uVar1 < 0) break;
      FUN_00418d60(local_104,"%s%s");
      BVar2 = FUN_00417590(local_104,(LPSECURITY_ATTRIBUTES)0x0);
      if (BVar2 == 0) {
        uVar1 = 0x80004005;
      }
      else {
        uVar1 = FUN_0042abd0(local_108,(LPCSTR)local_104);
      }
      FUN_004294e0(local_108);
      if ((int)uVar1 < 0) break;
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return uVar1;
      }
    }
    FUN_0041dd10(DAT_004419e8,iVar3,1,0);
    DAT_004419e4 = DAT_004419e4 + -1;
  }
  return 0;
}


