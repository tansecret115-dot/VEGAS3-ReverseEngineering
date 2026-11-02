/* Module: vidcap30.exe
   Function: FUN_0044e620
   Address: 0044e620
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044e620(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104 [260];
  
  uVar1 = DAT_005bb838;
  uVar2 = FUN_0044c6a0(param_2);
  local_108 = _SfGetString_8(DAT_005ba2a0,0xc50b);
  iVar4 = 2;
  _SfLoadString_16(DAT_005ba2a0,0xc50a,local_104,0x104);
  do {
    iVar3 = FUN_0045efd0(uVar1,&local_10c,uVar2,local_104,1);
    SfPrintF(local_104,local_108,iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar3 == -0x7ffb1fce);
  if (-1 < iVar3) {
    iVar4 = FUN_0044f590(param_1,param_2,local_10c);
    return iVar4;
  }
  return iVar3;
}


