/* Module: vidcap30.exe
   Function: FUN_00472ea0
   Address: 00472ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00472ea0(void)

{
  int iVar1;
  uchar *puVar2;
  uchar local_c8 [200];
  
  iVar1 = FUN_004715a0(2);
  if (iVar1 != 0) {
    iVar1 = FUN_00472d90(*(undefined4 *)(iVar1 + 0x10),local_c8,200);
    if (-1 < iVar1) {
      puVar2 = _mbsstr(local_c8,"DV");
      return puVar2 != (uchar *)0x0;
    }
  }
  return false;
}


