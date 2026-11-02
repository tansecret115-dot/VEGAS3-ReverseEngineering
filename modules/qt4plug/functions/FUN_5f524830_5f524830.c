/* Module: qt4plug.dll
   Function: FUN_5f524830
   Address: 5f524830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f5249de) */
/* WARNING: Removing unreachable block (ram,0x5f524a04) */
/* WARNING: Removing unreachable block (ram,0x5f524a27) */
/* WARNING: Removing unreachable block (ram,0x5f524a35) */
/* WARNING: Removing unreachable block (ram,0x5f524a4a) */
/* WARNING: Removing unreachable block (ram,0x5f5248ff) */
/* WARNING: Removing unreachable block (ram,0x5f524935) */
/* WARNING: Removing unreachable block (ram,0x5f524958) */
/* WARNING: Removing unreachable block (ram,0x5f524968) */
/* WARNING: Removing unreachable block (ram,0x5f52497f) */
/* WARNING: Removing unreachable block (ram,0x5f524a9b) */

undefined4 FUN_5f524830(uint param_1,uchar *param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  uchar local_104 [260];
  
  GetTempPathA(0x104,(LPSTR)local_104);
  FUN_5f541d10(local_104,".mov",param_2,param_3);
  FUN_5f579290();
  sVar1 = FUN_5f577a90();
  if (sVar1 == 0) {
    iVar2 = FUN_5f5782f0();
    sVar1 = 0;
    if (iVar2 != 0) {
      sVar1 = FUN_5f5781b0();
    }
    iVar2 = FUN_5f5782f0();
    if (iVar2 != 0) {
      sVar1 = FUN_5f5781b0();
    }
    if (sVar1 == 0) {
      FUN_5f576e30();
    }
    return 0;
  }
  return 0;
}


