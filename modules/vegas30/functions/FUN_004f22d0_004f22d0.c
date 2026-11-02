/* Module: vegas30.exe
   Function: FUN_004f22d0
   Address: 004f22d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004f22d0(LPCSTR param_1,uchar *param_2)

{
  int iVar1;
  uchar *puVar2;
  
  iVar1 = lstrlenA(param_1);
  FUN_0060ac30();
  lstrcpynA(&stack0xfffffff0,param_1,iVar1 + 1);
  (&stack0xfffffff0)[iVar1] = 0;
  _mbslwr(&stack0xfffffff0);
  puVar2 = _mbsstr(&stack0xfffffff0,param_2);
  return puVar2 != (uchar *)0x0;
}


