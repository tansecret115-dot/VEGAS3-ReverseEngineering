/* Module: vidcap30.exe
   Function: FUN_0044e530
   Address: 0044e530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044e530(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_104 [260];
  
  *param_3 = 0;
  pcVar1 = (char *)_SfPrepareName_12(param_2,local_104,0x104);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    uVar3 = _SfGetString_8(DAT_005ba2a0,0xc51e);
    SfMsgBox(DAT_005ba4bc,0x10,uVar3);
    return 0x3e3;
  }
  iVar2 = FUN_0045b320(pcVar1);
  if (iVar2 == 0) {
    pcVar1 = "\\ / : * ? < > | \"";
    uVar3 = _SfGetString_8(DAT_005ba2a0,0xc528);
    SfMsgBox(DAT_005ba4bc,0x10,uVar3,pcVar1);
    return 0x3e3;
  }
  iVar2 = FUN_004436d0(param_1,pcVar1,0);
  *param_3 = iVar2;
  if (iVar2 == 0) {
    uVar3 = FUN_004432e0(param_3,param_1,0xffffffff,pcVar1);
    return uVar3;
  }
  return 0;
}


