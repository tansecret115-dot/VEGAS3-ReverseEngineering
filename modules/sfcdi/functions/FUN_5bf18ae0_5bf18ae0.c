/* Module: sfcdi.dll
   Function: FUN_5bf18ae0
   Address: 5bf18ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5bf18ae0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = '\x01';
  if (*(short *)(param_1 + 0x3c) == *(short *)(param_1 + 0x40)) {
    iVar2 = FUN_5bf18ab0(param_1);
    cVar1 = '\x01' - (iVar2 != 0);
  }
  return (bool)cVar1;
}


