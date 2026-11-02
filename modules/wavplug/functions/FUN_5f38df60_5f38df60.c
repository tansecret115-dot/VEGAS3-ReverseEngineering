/* Module: wavplug.dll
   Function: FUN_5f38df60
   Address: 5f38df60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_5f38df60(void *param_1)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  
  psVar1 = *(short **)((int)param_1 + 0xd8);
  if (((*psVar1 == 3) || (*psVar1 == 1)) || (uVar2 = (ushort)psVar1[8] + 0x12, uVar2 < 0x13)) {
    uVar2 = 0x12;
  }
  iVar3 = acmFormatSuggest(0,*(undefined4 *)((int)param_1 + 0xd0),psVar1,uVar2,0x90000);
  if (iVar3 == 0) {
    uVar2 = FUN_5f3953f0(param_1,*(uint *)((int)param_1 + 0xd0),*(int *)((int)param_1 + 0xd8));
    return uVar2;
  }
  return 0x8004e011;
}


