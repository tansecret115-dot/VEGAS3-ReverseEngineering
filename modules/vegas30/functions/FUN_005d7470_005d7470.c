/* Module: vegas30.exe
   Function: FUN_005d7470
   Address: 005d7470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d7470(int param_1,LPSTR param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CHAR local_104 [260];
  
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar1 = _SfGetString_8(DAT_00647204,*(undefined4 *)(param_1 + 0x20));
  uVar2 = _SfGetString_8(DAT_00647204,0x5622);
  SfPrintF(local_104,uVar2,uVar1,uVar3,uVar4,uVar5,uVar6);
  lstrcpynA(param_2,local_104,param_3);
  param_2[param_3 + -1] = '\0';
  lstrlenA(param_2);
  return;
}


