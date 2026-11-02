/* Module: vidcap30.exe
   Function: FUN_004f4640
   Address: 004f4640
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004f4640(HWND param_1)

{
  LRESULT LVar1;
  LRESULT LVar2;
  LRESULT LVar3;
  int iVar4;
  
  LVar1 = SendMessageA(param_1,0x1004,0,0);
  LVar2 = SendMessageA(param_1,0x1027,0,0);
  LVar3 = SendMessageA(param_1,0x1028,0,0);
  iVar4 = LVar3 + -1 + LVar2;
  if (LVar1 < iVar4) {
    iVar4 = LVar1 + -1;
  }
  return iVar4;
}


