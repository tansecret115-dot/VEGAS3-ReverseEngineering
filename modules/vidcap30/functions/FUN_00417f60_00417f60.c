/* Module: vidcap30.exe
   Function: FUN_00417f60
   Address: 00417f60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00417f60(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uchar local_104 [260];
  
  if (DAT_005ba990 == 0) {
    _SfBeep_4(1);
    return -0x7fffbffb;
  }
  _mbscpy(local_104,(uchar *)(*(int *)(param_3 + 4) + 4 + param_2 * 0x108));
  iVar1 = FUN_004179c0(local_104,0,0xffffffff);
  if (iVar1 != 0) {
    FUN_00417cb0(param_1,local_104,param_3);
  }
  return iVar1;
}


