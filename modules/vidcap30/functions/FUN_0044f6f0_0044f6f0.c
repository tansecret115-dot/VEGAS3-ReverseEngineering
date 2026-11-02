/* Module: vidcap30.exe
   Function: FUN_0044f6f0
   Address: 0044f6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044f6f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_108;
  undefined1 local_104 [260];
  
  uVar3 = DAT_005bb838;
  local_108 = 0;
  uVar1 = _SfGetString_8(DAT_005ba2a0,0xc58c);
  iVar4 = 2;
  _SfLoadString_16(DAT_005ba2a0,0xc58b,local_104,0x104);
  do {
    iVar2 = FUN_0045efd0(uVar3,&local_108,param_2,local_104,0);
    SfPrintF(local_104,uVar1,iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar2 == -0x7ffb1fce);
  if (-1 < iVar2) {
    iVar4 = FUN_0044c620(param_1);
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        if (iVar2 < 0) {
          return iVar2;
        }
        uVar3 = FUN_0044c5c0(param_1,iVar5);
        iVar2 = FUN_0044f7c0(uVar3,local_108);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
  }
  return iVar2;
}


