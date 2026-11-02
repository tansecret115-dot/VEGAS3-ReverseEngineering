/* Module: vegas30.exe
   Function: FUN_0043d9a0
   Address: 0043d9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043d9a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_104 [260];
  
  iVar1 = FUN_0043d770(param_1,param_2,param_3,param_4);
  if ((-1 < iVar1) && (DAT_0064a8cc == 0)) {
    iVar1 = FUN_0043d850(param_1,param_3,param_4);
  }
  FUN_0040dde0(DAT_0064762c);
  if (iVar1 == 0) {
    uVar2 = _SfGetFileNamePtrA_4(param_3);
    SfPrintF(local_104,"Creating %s",uVar2);
    uVar2 = FUN_00452640(param_1,local_104,100,1);
    iVar1 = FUN_0043d540(uVar2,param_2,param_3);
    FUN_004527f0(uVar2);
  }
  FUN_0040dea0(DAT_0064762c);
  return iVar1;
}


