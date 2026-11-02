/* Module: vegas30.exe
   Function: FUN_004db540
   Address: 004db540
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004db540(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  __int64 _Var3;
  undefined8 uVar4;
  
  iVar2 = Transport_IsPreviewPlaying();
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (((uVar1 & 2) != 0) && (param_2 != 0)) {
      _Var3 = Transport_GetPreviewPos();
      uVar4 = FUN_00494160(param_1,_Var3);
      FUN_00453970(param_1,uVar4,0);
    }
    FUN_005fd4c0();
    return uVar1 >> 1 & 1;
  }
  return (*(uint *)(param_1 + 0x18) & 0xff) >> 1 & 1;
}


