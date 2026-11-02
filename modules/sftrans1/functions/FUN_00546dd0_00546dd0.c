/* Module: sftrans1.dll
   Function: FUN_00546dd0
   Address: 00546dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00546dd0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004caa40(param_1,*(undefined4 *)(DAT_00622478 + 8));
  return (-(uint)(iVar1 != 0) & 0x7ff8ffa9) + 0x80070057;
}


