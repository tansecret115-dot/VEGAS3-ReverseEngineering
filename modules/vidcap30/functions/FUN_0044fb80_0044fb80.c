/* Module: vidcap30.exe
   Function: FUN_0044fb80
   Address: 0044fb80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044fb80(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 local_104 [260];
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = FUN_0045b8c0(param_1);
    if (iVar1 == 0) {
      pcVar3 = param_1;
      uVar2 = _SfGetString_8(DAT_005ba2a0,0xc511);
      SfErrorHandler_DetailsAddString(0x8004e019,uVar2,pcVar3);
    }
    SfPrintF(local_104,"%s.sfap0",param_1);
    iVar1 = FUN_0045b8c0(local_104);
    if (iVar1 == 0) {
      pcVar3 = param_1;
      uVar2 = _SfGetString_8(DAT_005ba2a0,0xc512);
      SfErrorHandler_DetailsAddString(0x8004e019,uVar2,pcVar3);
    }
    SfPrintF(local_104,"%s.sfk",param_1);
    iVar1 = FUN_0045b8c0(local_104);
    if (iVar1 == 0) {
      pcVar3 = param_1;
      uVar2 = _SfGetString_8(DAT_005ba2a0,0xc513);
      SfErrorHandler_DetailsAddString(0x8004e019,uVar2,pcVar3);
    }
  }
  FUN_00417cb0(DAT_005ba4bc,param_1,&DAT_005bb848);
  return;
}


