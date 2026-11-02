/* Module: vegas30.exe
   Function: FUN_0057eec0
   Address: 0057eec0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_0057eec0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x54);
  iVar2 = _SfIsHighColor_0();
  *(int *)(param_1 + 0x54) = iVar2;
  return iVar1 != iVar2;
}


