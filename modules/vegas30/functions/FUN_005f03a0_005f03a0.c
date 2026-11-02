/* Module: vegas30.exe
   Function: FUN_005f03a0
   Address: 005f03a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_005f03a0(LPCSTR param_1)

{
  int iVar1;
  
  iVar1 = lstrlenA("META:\\");
  FUN_0060ac30();
  FUN_0060ac30();
  lstrcpynA(&stack0xffffffec,param_1,iVar1 + 1);
  (&stack0xffffffec)[iVar1] = 0;
  (&stack0xffffffec)[iVar1] = 0;
  lstrcpynA(&stack0xffffffec,"META:\\",iVar1 + 1);
  (&stack0xffffffec)[iVar1] = 0;
  (&stack0xffffffec)[iVar1] = 0;
  iVar1 = lstrcmpA(&stack0xffffffec,&stack0xffffffec);
  return iVar1 == 0;
}


