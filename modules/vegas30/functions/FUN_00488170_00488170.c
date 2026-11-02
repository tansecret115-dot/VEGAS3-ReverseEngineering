/* Module: vegas30.exe
   Function: FUN_00488170
   Address: 00488170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00488170(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(*(int *)(param_4 + 8) + 8);
  if (param_6 == 0xc) {
    iVar2 = FUN_005c68e0(param_4);
    iVar3 = _SfTextToLongTokenEx_20(param_2,0xffffffff,0xffffffff,iVar2 + 1,0);
    if ((-1 < iVar3) && (iVar3 <= iVar2)) {
      FUN_005c86c0(uVar1,param_4,iVar3 + -1);
      return 1;
    }
  }
  else if (param_6 == 0xd) {
    iVar2 = FUN_005c6950(param_4);
    SfPrintF(param_2,&DAT_0061052c,iVar2 + 1);
  }
  return 0;
}


