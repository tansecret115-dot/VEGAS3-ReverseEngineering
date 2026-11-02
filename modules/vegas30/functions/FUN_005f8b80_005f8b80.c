/* Module: vegas30.exe
   Function: FUN_005f8b80
   Address: 005f8b80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005f8b80(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1f4 [500];
  
  iVar3 = 0;
  iVar2 = 1;
  while( true ) {
    iVar1 = FUN_005f8a90(iVar2,0,local_1f4,500);
    if (iVar1 < 0) break;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 1;
  }
  return iVar3;
}


