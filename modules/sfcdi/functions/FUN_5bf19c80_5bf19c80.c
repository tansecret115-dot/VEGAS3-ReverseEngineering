/* Module: sfcdi.dll
   Function: FUN_5bf19c80
   Address: 5bf19c80
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5bf19c80(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_5bf18ae0(*(int *)(param_1 + 0xc) + 0x1e2c);
  iVar2 = CONCAT31(extraout_var,bVar1);
  if ((iVar2 != 0) &&
     (*(uint *)(*(int *)(param_1 + 0xc) + 0x1dd4) <
      *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + 0x1dac) + 0x24))) {
    iVar2 = 0;
  }
  return iVar2 == 0;
}


