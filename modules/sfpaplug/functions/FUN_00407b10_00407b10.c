/* Module: sfpaplug.dll
   Function: FUN_00407b10
   Address: 00407b10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_00407b10(int param_1)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  
  psVar1 = *(short **)(param_1 + 0x58);
  if (((*psVar1 == 3) || (*psVar1 == 1)) || (uVar2 = (ushort)psVar1[8] + 0x12, uVar2 < 0x13)) {
    uVar2 = 0x12;
  }
  iVar3 = acmFormatSuggest(0,*(undefined4 *)(param_1 + 0x50),psVar1,uVar2,0x90000);
  if (iVar3 == 0) {
    uVar2 = FUN_00407770(param_1);
    return uVar2;
  }
  return 0x8004e011;
}


