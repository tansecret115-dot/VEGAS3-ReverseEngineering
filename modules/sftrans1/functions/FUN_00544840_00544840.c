/* Module: sftrans1.dll
   Function: FUN_00544840
   Address: 00544840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00544840(HDC param_1,int param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  uint cjBuffer;
  
  iVar1 = FUN_005447d0(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  cjBuffer = (uint)(ushort)(*(short *)(param_2 + 2) - 0xe);
  DVar2 = GetFontData(param_1,DAT_005771e0,param_3 + 0xe,(PVOID)(param_2 + 0xe),cjBuffer);
  if (DVar2 != cjBuffer) {
    return 0;
  }
  FUN_00544690(param_2);
  return 1;
}


