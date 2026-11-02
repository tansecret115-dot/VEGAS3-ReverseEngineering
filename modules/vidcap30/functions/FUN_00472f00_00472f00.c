/* Module: vidcap30.exe
   Function: FUN_00472f00
   Address: 00472f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_00472f00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined1 local_28 [20];
  undefined1 local_14 [20];
  
  uVar1 = *(uint *)(param_1 + 0x124);
  iVar2 = FUN_00471030(1);
  if (-1 < iVar2) {
    FUN_004713b0();
    SfPrintF(local_14,"%I64d",param_3,param_4);
    SfPrintF(local_28,"%I64d",param_5,param_6);
    iVar2 = FUN_0045a6b0(param_1 + 0x158,param_2,local_14,local_28);
    if ((-1 < iVar2) && ((~uVar1 >> 5 & 1) != 0)) {
      FUN_00470ec0(1);
    }
  }
  return;
}


