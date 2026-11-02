/* Module: vidcap30.exe
   Function: FUN_00419310
   Address: 00419310
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00419310(LPCSTR param_1,uchar *param_2)

{
  int iVar1;
  uchar *puVar2;
  
  iVar1 = lstrlenA(param_1);
  FUN_00579db0();
  lstrcpynA(&stack0xfffffff0,param_1,iVar1 + 1);
  (&stack0xfffffff0)[iVar1] = 0;
  _mbslwr(&stack0xfffffff0);
  puVar2 = _mbsstr(&stack0xfffffff0,param_2);
  return puVar2 != (uchar *)0x0;
}


