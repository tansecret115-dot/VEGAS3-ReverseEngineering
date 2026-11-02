/* Module: sfnetmedia.dll
   Function: FUN_004103a0
   Address: 004103a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004103a0(void)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  int *local_108;
  uchar local_104 [260];
  
  iVar3 = DAT_00441acc + -1;
  if (-1 < iVar3) {
    while( true ) {
      FUN_004156f0(local_104,(BYTE *)"%s%s.zip");
      uVar1 = FUN_004271d0((LPCSTR)local_104,2,&local_108);
      if ((int)uVar1 < 0) break;
      FUN_004156f0(local_104,"%s%s");
      BVar2 = FUN_00413f20(local_104,(LPSECURITY_ATTRIBUTES)0x0);
      if (BVar2 == 0) {
        uVar1 = 0x80004005;
      }
      else {
        uVar1 = FUN_00426ee0(local_108,(LPCSTR)local_104);
      }
      FUN_004257f0(local_108);
      if ((int)uVar1 < 0) break;
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return uVar1;
      }
    }
    FUN_00423fd0(DAT_00441ad0,iVar3,1,0);
    DAT_00441acc = DAT_00441acc + -1;
  }
  return 0;
}


